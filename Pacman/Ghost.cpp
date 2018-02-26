//
//  Ghost.cpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/24/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#include "Ghost.hpp"
#include "ResourcePath.hpp"
#include "Constants.h"

Ghost::Ghost() {
    sprite.setOrigin(size.x / 2, size.y / 2);
    sprite.setPosition(consts::windowSize.x / 4 + consts::windowMargin,
                       consts::windowSize.y / 4 + consts::windowMargin);
}

bool Ghost::loadResources() {
    if(!texture.loadFromFile(resourcePath() + "Ghost.png"))
        return false;
    sprite.setTexture(texture);
    return true;
}
