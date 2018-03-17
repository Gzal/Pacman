//
//  Ghost.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/24/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Ghost.hpp"
#include "ResourcePath.hpp"
#include "Constants.h"

Ghost::Ghost() {
    rng.seed(std::random_device()());
    
    sprite.setOrigin(size.x / 2, size.y / 2);
    sprite.setPosition(consts::windowSize.x / 4 + consts::windowMargin,
                       consts::windowSize.y / 4 + consts::windowMargin);
}

bool Ghost::loadResources() {
    if(!texture.loadFromFile(resourcePath() + "Ghost.png"))
        return false;
    sprite.setTexture(texture);
    return true;
}

sf::Vector2f Ghost::getVelocity(sf::Vector2f const &avoid = {0,0}) {
    sf::Vector2f chosen{0,0};
    
    do {
        switch(dist4(rng)) {
            // Up
            case 1:
                chosen = sf::Vector2f{0,-speed};
                break;
            // Right
            case 2:
                chosen = sf::Vector2f{speed,0};
                break;
            // Down
            case 3:
                chosen = sf::Vector2f{0,speed};
                break;
            // Left
            case 4:
                chosen = sf::Vector2f{-speed,0};
                break;
            default:
                break;
        }
    } while (chosen == avoid);
    
    return chosen;
}

void Ghost::update(std::vector<Wall> &boundaries) {
    if (frameCount < frameLimit)
        frameCount++;
    else {
        frameCount = 0;
        velocity = getVelocity();
    }
    
    if (this->willCollideWith(boundaries))
        velocity = getVelocity(velocity);
    
    sprite.move(velocity);

    updateBounds();
}
