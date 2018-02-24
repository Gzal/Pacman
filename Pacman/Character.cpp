//
//  Character.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/22/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Character.hpp"

bool Character::willCollideWith(std::vector<Wall> &b) {
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
