//
//  Wall.hpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/10/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#ifndef Wall_hpp
#define Wall_hpp

#include <SFML/Graphics.hpp>
#include "Constants.h"

class Wall {
    int const width{4};
public:
    sf::RectangleShape shape;
    
    Wall() = default;
    Wall(sf::Vector2f &size, sf::Vector2f &position);
    ~Wall() = default;
};
#endif /* Wall_hpp */
