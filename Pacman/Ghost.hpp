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
class Ghost : public Character {
public:
    // Constructor sets Ghost sprite on the top left quarter of the screen
    Ghost();
    ~Ghost() = default;
    
    // Load textures from file and, if successful, sets it on sprite
    bool loadResources();
};

#endif /* Ghost_hpp */
