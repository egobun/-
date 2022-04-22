#include "Heart.h"


    heart::heart(int width, int height) {
        Heart.loadFromFile("heart.png");
        spriteh.setTexture(Heart);
        this->width = width;
        this->height = height;
    }

    Sprite heart::getSprite() {
        return this->spriteh;
    }

    int heart::getWidth() const {
        return this->width;
    }

    void heart::setPositionOfHeart(float xPos, float yPos) {
        spriteh.setPosition(xPos, yPos);
    }
