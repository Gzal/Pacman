//
//  Ghost.hpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/24/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#ifndef Ghost_hpp
#define Ghost_hpp

#include "Character.hpp"
#include <random>

class Ghost : public Character {
    // Random number generator
    std::mt19937 rng;
    // 1-4 integer ditribution
    std::uniform_int_distribution<std::mt19937::result_type> dist4{1,4};
    // Frame counter to determine when to shift direction
    int frameCount{0};
    // Frame limit before shifting directions
    int const frameLimit{60};
public:
    // Constructor sets Ghost sprite on the top left quarter of the screen
    Ghost();
    ~Ghost() = default;
    
    // Load textures from file and, if successful, sets it on sprite
    bool loadResources();
    // Update Ghost's sprite so that it moves in a random direction every
    // few frames
    void update();
private:
    // Randomly return a velocity vector in one of four directions
    sf::Vector2f getVelocity();
};

#endif /* Ghost_hpp */
