//
//  Wall.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/10/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Wall.hpp"

Wall::Wall(sf::Vector2f &size, sf::Vector2f &position) {
    Wall::shape.setSize(size);
    Wall::shape.setPosition(position);
    Wall::shape.setFillColor(sf::Color::White);
}
