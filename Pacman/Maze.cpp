//
//  Maze.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/11/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Maze.hpp"

Maze::Maze() {
    using consts::windowMargin; using consts::windowSize;
    
    Wall dummy(windowSize.x - 2 * windowMargin);
    // Top wall
    dummy.shape.setPosition(windowSize.x / 2, windowMargin);
    boundaries.push_back(dummy);
    // Right wall
    dummy.shape.setPosition(windowSize.x - windowMargin, windowSize.y / 2);
    dummy.shape.rotate(90);
    boundaries.push_back(dummy);
    // Bottom wall
    dummy.shape.setPosition(windowSize.x / 2, windowSize.y - windowMargin);
    dummy.shape.rotate(90);
    boundaries.push_back(dummy);
    // Left wall
    dummy.shape.setPosition(windowMargin, windowSize.y / 2);
    dummy.shape.rotate(90);
    boundaries.push_back(dummy);
}
