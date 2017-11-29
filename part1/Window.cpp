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
int fishLives = 5; // fishes will live five moves
int minFish = 5;  // minimum fishes requered what add more fishes 

int main()
{
    sf:: Clock clock;
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
    sf:: Sprite fish[numFish];
    // creating array of fish when game startrs after that is drawed by clock function 
    for (int i=0;i<numFish;i++)
           {
	     float positionX = rand() % width ;
	     float positionY =rand() %height;
	     if (positionX> (width-(width*0.1)))
	       {
		 positionX = rand() % width ;
	       }
	     if (positionY>(height -(height *0.1)))
	       {
		 positionY = rand() % height ;
	       }
	     fish[i].setTexture(tex);
	     fish[i].setPosition(sf::Vector2f(positionX,positionY));
	     fish[i].setScale(sf::Vector2f(0.1f,0.1F));
	   } 

    // checking for collision???????????????????????????????????????????not finished 
    for (int i=0;i<numFish;i++)
      {
	//	if (fish[i].getGlobalBounds().intersects(shark[j].getGlobalBounds())==true)
	  {

	    // kill the fish  

	  }

      }


    

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
      if(clock.getElapsedTime().asSeconds()>fishMovesInSeconds)
	{
          for (int i=0;i<numFish;i++)
           {
	     float positionX = rand() % width ;
	     float positionY =rand() %height;
	     if (positionX> (width-(width*0.1)))
	       {
		 positionX = rand() % width ;
	       }
	     if (positionY>(height -(height *0.1)))
	       {
		 positionY = rand() % height ;
	       } 
	fish[i].setTexture(tex);
        fish[i].setPosition(sf::Vector2f(positionX,positionY));
        fish[i].setScale(sf::Vector2f(0.1f,0.1F));
	// restarting clock from begining
	
	   }
	  clock.restart();
	  fishLives--;
	  if(fishLives==0)
	    {
	      // draw add more fishes 

	    }
	  
	 }




	
	// draw fish on the screen 
	for (int i=0;i<numFish;i++)
	  {
	    window.draw(fish[i]);
	  }
        window.display();
    }

    return 0;
}
