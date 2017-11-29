/*
 * @Author: david.kelly 
 * @Date: 2017-11-15 11:56:05 
 * @Last Modified by: david.kelly
 * @Last Modified time: 2017-11-15 12:39:58
 */

#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "Creature.h"

int main()
{

    sf::RenderWindow window(sf::VideoMode(200, 200, 16), "Wator Simulation");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}