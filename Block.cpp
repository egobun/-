#include "Block.h"

int dirg1 = 0;
int dirg2 = 0;

block::block(int setx, int sety, int number) {
    if (number == 2)
        this->Block.loadFromFile("block2.png");
    if (number == 1)
        this->Block.loadFromFile("block1.png");
    spriteb.setTexture(Block);
    this->spriteb.setPosition(setx, sety);
    this->xValue = 0;
    this->yValue = 0;
}

block::block(int setx, int sety, int number, float xScale, float yScale, float xValue, float yValue) {
    this->xScale = xScale;
    this->yScale = yScale;
    this->xValue = xValue;
    this->yValue = yValue;
    if (number == 2)
        this->Block.loadFromFile("block2.png");
    if (number == 1)
        this->Block.loadFromFile("block1.png");

    spriteb.setTexture(Block);
    this->spriteb.setPosition(setx, sety);
    spriteb.setScale(xScale, yScale);
}
    
Texture block::getTexture() {
    return this->Block;
}
Sprite block::getSprite() {
    return this->spriteb;
}
int block::getxValue() {
    return xValue;
}
int block::getyValue() {
    return yValue;
}
float block::getxScale() {
    return this->xScale;
}
float block::getyScale() {
    return this->yScale;
}
void block::interfire(Sprite& goblin) {
    if (goblin.getPosition().y >= this->spriteb.getPosition().y && goblin.getPosition().y <= this->spriteb.getPosition().y + 100/*this->getyValue()*/ && goblin.getPosition().x <= this->getSprite().getPosition().x + this->getxValue()) {
        goblin.setPosition(this->getSprite().getPosition().x + 100, goblin.getPosition().y);
    }
}


void block::intergoblin(Goblin& goblin, bool& onGround) {
    if (goblin.getSprite().getPosition().y + goblin.getHeight() - 20 > this->spriteb.getPosition().y && goblin.getSprite().getPosition().y < this->spriteb.getPosition().y + this->getyValue() /*this->getTexture().getSize() this->getyValue()*/ && this->getSprite().getPosition().x + this->getxValue() >= goblin.getSprite().getPosition().x && this->getSprite().getPosition().x <= goblin.getSprite().getPosition().x + goblin.getWidth()) {

        if (dirg1 == 1 && Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
            goblin.getSprite().move(-15, 0);
            return;
        }
        if (dirg1 == 0 && goblin.getSprite().getPosition().y < this->getSprite().getPosition().y + this->getyValue() - 15) {
            cout << 0 << endl;
            goblin.getSprite().setPosition(this->getSprite().getPosition().x + this->getxValue(), goblin.getSprite().getPosition().y);
        }

        if (dirg1 == 1 && goblin.getSprite().getPosition().y < this->getSprite().getPosition().y + this->getyValue() - 15) {
            cout << 1 << endl;
            goblin.getSprite().setPosition(this->getSprite().getPosition().x - goblin.getWidth(), goblin.getSprite().getPosition().y);
        }
        if (Keyboard::isKeyPressed(Keyboard::Key::W) && goblin.getSprite().getPosition().y >= this->getSprite().getPosition().y + this->getyValue() - 5) {
            goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, this->getSprite().getPosition().y + this->getyValue() - 5);
                
        }
        goblin.getSprite().move(0, 5);
            

    }

    else
        onGround = false;
}

   
void block::intergoblinjump(Goblin& goblin, bool& onGround, double& dy) {
    if (dy < 0.005 and goblin.getSprite().getPosition().y < this->getSprite().getPosition().y + this->getyValue() && goblin.getSprite().getPosition().y > this->getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < this->getSprite().getPosition().x + this->getxValue() && goblin.getSprite().getPosition().x + goblin.getWidth() > this->getSprite().getPosition().x) {
        onGround = true;
        dy = 0;
            
    }
    else
        onGround = false;
}

void block::fireunderblock(vector<fire>& bolls, block& block) {
    for (int i = 0; i < bolls.size(); i++) {
        auto fireblock = (this->getSprite().getPosition().x + this->getxValue() / 2 - bolls[i].spritef.getPosition().x) * (this->getSprite().getPosition().x + this->getxValue() / 2 - bolls[i].spritef.getPosition().x) + (this->getSprite().getPosition().y + this->getyValue() / 2 - bolls[i].spritef.getPosition().y) * (this->getSprite().getPosition().y + this->getyValue() / 2 - bolls[i].spritef.getPosition().y);
        if (fireblock < this->getxValue() * this->getyValue() / 1.5) {
            bolls[i].spritef.setPosition(10000, 10000);
        }
    }
}


