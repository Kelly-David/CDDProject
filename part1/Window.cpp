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
int numFish=10;
int width = 1100;
int height = 600;
int fishMovesInSeconds = 10;

int main()
{
 
    sf::RenderWindow window(sf::VideoMode(width, height), "Wator 2017");
    // setting backgound image
    sf:: Texture texBack;
    texBack.loadFromFile("images/water.png");
    sf:: Sprite spriteBack;
    spriteBack.setTexture(texBack);

    //#################have to be moved to function or diferent file  ###############
    // external cpp and header not working 
    // creating fish and setting size of the fish 
    sf:: Texture tex;
    tex.loadFromFile("images/fish1.png");
    sf:: Sprite sprite[numFish];
    // creating array of fish
    for (int i=0;i<numFish;i++)
      {
	sprite[i].setTexture(tex);
        sprite[i].setPosition(sf::Vector2f((rand() % width),(rand() %height)));
        sprite[i].setScale(sf::Vector2f(0.1f,0.1F));
	
      }
    //    sf:: Time time= sf::seconds(30);
    sf:: Clock clock;
 




    

    //#############################################################################
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
	// changing fishes location
	// getEclapsedTime is getting time from last clock restarting 
      if(clock.getElapsedTime().asSeconds()>fishMovesInSeconds){
          for (int i=0;i<numFish;i++)
           {
       	sprite[i].setTexture(tex);
        sprite[i].setPosition(sf::Vector2f((rand() % width),(rand() %height)));
        sprite[i].setScale(sf::Vector2f(0.1f,0.1F));
	// restarting clock from begining
	clock.restart();
      }


	 }




	
	// drraing fish on the screen 
	for (int i=0;i<numFish;i++)
	  {
	    window.draw(sprite[i]);
	  }
        window.display();
    }

    return 0;
}
