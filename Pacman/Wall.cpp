//
//  Wall.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/10/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Wall.hpp"

Wall::Wall(int length) {
    shape.setSize(sf::Vector2f(length,width));
    shape.setOrigin(shape.getSize().x / 2, shape.getSize().y / 2);
    shape.setFillColor(sf::Color::White);
}

void Wall::updateBounds() {
    bounds = shape.getGlobalBounds();
}
