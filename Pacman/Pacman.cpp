//
//  Pacman.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/9/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Pacman.hpp"
#include "ResourcePath.hpp"

bool Pacman::loadResources() {
    if(!Pacman::texture.loadFromFile(resourcePath() + "Pacman_Open.png"))
        return false;
    Pacman::sprite.setTexture(Pacman::texture);
    
    return true;
}
