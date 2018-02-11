//
//  Wall.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/10/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Wall.hpp"

Wall::Wall() {
    Wall::shape.setSize(sf::Vector2f(consts::windowSize.x -
                                     2 * consts::windowMargin,
                                     Wall::width));
    Wall::shape.setPosition(consts::windowMargin,
                            consts::windowSize.y - consts::windowMargin);
    Wall::shape.setFillColor(sf::Color::White);
}
