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

class heart {
private:
    int width;
    int height;
    Texture Heart;
    Sprite spriteh;
public:
    Sprite getSprite();
    heart(int width, int height);
    int getWidth() const;
    void setPositionOfHeart(float xPos, float yPos);
};

