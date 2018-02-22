//
//  Maze.hpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/11/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#ifndef Maze_hpp
#define Maze_hpp

#include <vector>
#include "Constants.h"
#include "Wall.hpp"

class Maze {
public:
    // Container for the boundary walls
    std::vector<Wall> boundaries;
    // Constructs the four boundary walls
    Maze();
    ~Maze() = default;
};
#endif /* Maze_hpp */
