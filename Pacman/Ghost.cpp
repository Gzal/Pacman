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

sf::Vector2f Ghost::getVelocity() {
    switch(dist4(rng)) {
        // Up
        case 1:
            return sf::Vector2f{0,-speed};
        // Right
        case 2:
            return sf::Vector2f{speed,0};
        // Down
        case 3:
            return sf::Vector2f{0,speed};
        // Left
        case 4:
            return sf::Vector2f{-speed,0};
        default:
            return sf::Vector2f{0,0};
    }
}

void Ghost::update() {
    if (frameCount < frameLimit)
        frameCount++;
    else {
        frameCount = 0;
        velocity = getVelocity();
    }
    
    sprite.move(velocity);
}
