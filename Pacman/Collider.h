//
//  Collider.h
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 3/7/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#ifndef Collider_h
#define Collider_h

#include <SFML/Graphics.hpp>

class Collider {
public:
    // Rectangle bounds of the collider
    sf::FloatRect bounds;
protected:
    // Updates the bounds variable to reflect the object's current state
    virtual void updateBounds() = 0;
};

#endif /* Collider_hpp */
