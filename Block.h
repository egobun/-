#pragma once
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <cmath>
#include <chrono>
#include<thread>
#include "fire.h"
#include "Goblin.h"

using namespace sf;
using namespace std;

class block {
private:
    int xValue;
    int yValue;
    float xScale;
    float yScale;
public:
    Texture Block;
    Sprite spriteb;

    block(int setx, int sety, int number);

    block(int setx, int sety, int number, float xScale, float yScale, float xValue, float yValue);
    
    Texture getTexture();

    Sprite getSprite();

    int getxValue();

    int getyValue();

    float getxScale();

    float getyScale();

    void interfire(Sprite& goblin);
    void intergoblin(Goblin& goblin, bool& onGround);

    void intergoblinjump(Goblin& goblin, bool& onGround, double& dy);

    void fireunderblock(vector<fire>& bolls, block& block);
};
