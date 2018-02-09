//
//  Pacman.hpp
//  Pacman
//
//  Created by Jose Gabriel Gonzalez Belmontes on 2/9/18.
//  Copyright © 2018 Jose Gabriel Gonzalez Belmontes. All rights reserved.
//

#ifndef Pacman_hpp
#define Pacman_hpp

#include <SFML/Graphics.hpp>

class Pacman {
private:
    sf::Texture texture;
public:
    sf::Sprite sprite;
    
    Pacman() = default;
    ~Pacman() = default;
    
    bool loadResources();
};

#endif /* Pacman_hpp */
