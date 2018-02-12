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
    position.x = (consts::windowSize.x - size.x) / 2;
    position.y = (consts::windowSize.y - size.y) / 2;
    sprite.setPosition(position);
}

bool Pacman::loadResources() {
    if(!texture.loadFromFile(resourcePath() + "Pacman_Open.png"))
        return false;
    sprite.setTexture(texture);
    return true;
}

void Pacman::update() {
    velocity = {0,0};
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
        velocity.y = -speed;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
        velocity.y = speed;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
        velocity.x = -speed;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
        velocity.x = speed;
    
    sprite.move(velocity);
}
