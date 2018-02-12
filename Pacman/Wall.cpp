//
//  Wall.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/10/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Wall.hpp"

Wall::Wall(int length, sf::Vector2f position) {
    shape.setSize(sf::Vector2f(width,length));
    shape.setPosition(position);
    shape.setFillColor(sf::Color::White);
}
