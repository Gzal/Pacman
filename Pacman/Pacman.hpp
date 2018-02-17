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
    //Pacman size and speed constants
    sf::Vector2u const size{64, 64};
    float const speed{.5f};
    //Member variables
    sf::Vector2f velocity;
    sf::Texture texture;
public:
    sf::Sprite sprite;
    //Sets Pamcan sprite on the center of the screen
    Pacman();
    ~Pacman() = default;
    //Load textures from file and, if successful, sets it on sprite
    bool loadResources();
    //Move Pacman sprite based on keyboard input
    void update();
};

#endif /* Pacman_hpp */
