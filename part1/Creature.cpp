/*
 * @Author: david.kelly 
 * @Date: 2017-11-13 09:00:39 
 * @Last Modified by: david.kelly
 * @Last Modified time: 2017-11-13 09:16:06
 */

/*! @file Creature.cpp
    @brief Implements Creature class
*/

#include "Creature.h"
#include <stdlib.h>  
#include <iostream>

void Creature::grow() {
    ++age;
}

void Creature::swim(int xC, int yC) {
    x = xC;
    y = yC;
}

void Creature::eat() {
    age = 0;
}

int Creature::getX() {
    return x;
}

int Creature::getY() {
    return y;
}

Creature::Creature(int a=0, int xC, int yC) 
: age(a), x(xC), y(yC) { };

Creature::~Creature() { };


