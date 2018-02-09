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
    position.x = (consts::windowSize.x - Pacman::size.x) / 2;
    position.y = (consts::windowSize.y - Pacman::size.y) / 2;
    Pacman::sprite.setPosition(Pacman::position);
}

bool Pacman::loadResources() {
    if(!Pacman::texture.loadFromFile(resourcePath() + "Pacman_Open.png"))
        return false;
    Pacman::sprite.setTexture(Pacman::texture);
    return true;
}

void Pacman::update() {
    Pacman::velocity = {0,0};
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
        Pacman::velocity.y = -Pacman::speed;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
        Pacman::velocity.y = Pacman::speed;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
        Pacman::velocity.x = -Pacman::speed;
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
        Pacman::velocity.x = Pacman::speed;
    
    Pacman::sprite.move(velocity);
}
