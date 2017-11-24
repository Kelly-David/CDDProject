/*
window.cpp
wator
Authors: Vaidas Siupienius, David Kelly 
Date: 17/11/12

 */
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Fish.h"

// variables

int width = 800;
int height = 600;
//Fish fish1;
int main()
{
 
    sf::RenderWindow window(sf::VideoMode(width, height), "Wator 2017");
    // setting backgound image
    sf:: Texture texBack;
    texBack.loadFromFile("images/water.png");
 sf:: Sprite spriteBack;
 spriteBack.setTexture(texBack);

 
 // creating fish and setting size of the fish 
 sf:: Texture tex;
 tex.loadFromFile("images/fish1.png");
 sf:: Sprite sprite;
 sprite.setTexture(tex);
 sprite.setPosition(sf::Vector2f(50, 50));
 sprite.setScale(sf::Vector2f(0.1f,0.1F));
    

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
	window.clear();
	window.draw(spriteBack);
       	window.draw(sprite);

        window.display();
    }

    return 0;
}
