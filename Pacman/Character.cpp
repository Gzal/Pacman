//
//  Character.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/22/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Character.hpp"

void Character::updateBounds() {
    bounds = sprite.getGlobalBounds();
}

bool Character::willCollideWith(std::vector<Wall> const &boundaries) {
    sf::FloatRect expectedBounds = bounds;
    expectedBounds.left += velocity.x;
    expectedBounds.top += velocity.y;
    
    for(auto wall : boundaries) {
        if(expectedBounds.intersects(wall.bounds))
            return true;
    }
    
    return false;
}
