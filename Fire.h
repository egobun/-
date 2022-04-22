#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <vector>
#include <cmath>
#include <chrono>
#include<thread>

using namespace sf;
using namespace std;


class fire
{
private:
    Texture Fire;
public:
    
    Sprite spritef;
    int dirb = 0;

    fire();
    Sprite getSprite();

    fire(float x, float y);
       
    fire(float x, float y, int dirb);
        
    void givefire(vector<fire>bolls, Sprite sprite, int dir);

};


