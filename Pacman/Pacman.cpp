//
//  Pacman.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/9/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Pacman.hpp"
#include "ResourcePath.hpp"
#include "Constants.h"

Pacman::Pacman() {
    sprite.setOrigin(size.x / 2, size.y / 2);
    sprite.setPosition(consts::windowSize.x / 2, consts::windowSize.y / 2);
}

bool Pacman::loadResources() {
    if(!texture.loadFromFile(resourcePath() + "Pacman_Open.png"))
        return false;
    sprite.setTexture(texture);
    return true;
}
    
void Pacman::update(std::vector<Wall> &boundaries) {
    velocity = {0,0};
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
        velocity.y = -speed;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
        velocity.y = speed;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
        velocity.x = -speed;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
        velocity.x = speed;
    
    if(this->willCollideWith(boundaries))
       velocity = {0,0};
    
    sprite.move(velocity);
}

bool Pacman::willCollideWith(std::vector<Wall> &b) {
    sf::FloatRect p{this->sprite.getGlobalBounds()};
    
    p.left += velocity.x;
    p.top += velocity.y;
    
    sf::FloatRect w;
    
    for(auto wall : b) {
        sf::FloatRect w = wall.shape.getGlobalBounds();
        if(p.intersects(w))
            return true;
    }
    
    return false;
}
