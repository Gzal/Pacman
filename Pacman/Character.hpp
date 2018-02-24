//
//  Character.hpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/22/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#ifndef Character_hpp
#define Character_hpp

#include <vector>
#include <SFML/Graphics.hpp>
#include "Wall.hpp"

class Character {
protected:
    // Pacman size and speed constants
    sf::Vector2u const size{64, 64};
    float const speed{.5f};
    
    // Member variables
    sf::Vector2f velocity;
    sf::Texture texture;
public:
    sf::Sprite sprite;
    
    // Default constructors and destructors
    Character() = default;
    virtual ~Character() = default;
    
protected:
    // Check whether a collision with the maze boundaries is to be expected
    // on the next frame based on the current velocity
    bool willCollideWith(std::vector<Wall> &b);
};


#endif /* Character_hpp */
