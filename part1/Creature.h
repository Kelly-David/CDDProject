/*
 * @Author: david.kelly 
 * @Date: 2017-11-13 09:00:39 
 * @Last Modified by: david.kelly
 * @Last Modified time: 2017-11-13 09:16:06
 */

/*! @file Creature.h
    @brief Sea creature class
*/
#pragma once
class Creature {
    public:
        int x;      // x coordinate
        int y;      // y coordinate
        int age;

        Creature(int, int, int);
        ~Creature();
        
        void grow();
        void eat();
        void swim(int, int);
        int getX();
        int getY();
};