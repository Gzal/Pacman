//
//  Wall.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/10/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Wall.hpp"

Wall::Wall() {
    Wall::shape.setSize(sf::Vector2f(consts::windowSize.x - 128,
                                     Wall::width));
    Wall::shape.setPosition(64, consts::windowSize.y - 64);
    Wall::shape.setFillColor(sf::Color::White);
}
