#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include "Constants.h"
#include "Pacman.hpp"

int main(int, char const**)
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(consts::windowSize.x,
                                          consts::windowSize.y), "Pacman");
    
    //Create Pacman object and load resources
    Pacman pacman;
    if(!pacman.loadResources())
        return EXIT_FAILURE;
    
    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        sf::Event event;
        while (window.pollEvent(event))
        {
            // Close window: exit
            if (event.type == sf::Event::Closed) {
                window.close();
            }

            // Escape pressed: exit
            if (event.type == sf::Event::KeyPressed &&
                event.key.code == sf::Keyboard::Escape) {
                window.close();
            }
        }

        // Clear screen
        window.clear();
        
        //Update Pacman object
        pacman.update();
        
        //Draw on the window
        window.draw(pacman.sprite);

        // Update the window
        window.display();
    }

    return EXIT_SUCCESS;
}
