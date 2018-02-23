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
    velocity = getVelocity();
    
    if(this->willCollideWith(boundaries))
       velocity = {0,0};
    
    sprite.move(velocity);
}
sf::Vector2f Pacman::getVelocity() {
    
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
        return {0, -speed};
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Down))
        return {0, speed};
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
        return {-speed, 0};
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right))
        return {speed, 0};
    else
        return {0,0};
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
