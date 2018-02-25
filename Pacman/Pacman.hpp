//
//  Pacman.hpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/9/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#ifndef Pacman_hpp
#define Pacman_hpp

#include "Character.hpp"

class Pacman : public Character {
public:
    // Constructor sets Pacman sprite on the center of the screen
    Pacman();
    ~Pacman() = default;
    
    // Load textures from file and, if successful, sets it on sprite
    bool loadResources();
    // Update Pacman's sprite based on keyboard input and the environment
    void update(std::vector<Wall> &boundaries);
private:
    // Check user keyboard input and return the corresponding velocity
    sf::Vector2f getVelocity();
};

#endif /* Pacman_hpp */
