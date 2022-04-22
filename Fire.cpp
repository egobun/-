#include "Fire.h"

fire::fire()
{
	Fire.loadFromFile("firepro.png");
	spritef.setTexture(Fire);
	spritef.setTextureRect(IntRect(0, 0, 72, 72));  
}

Sprite fire::getSprite()
{
	return this->spritef;
}

fire::fire(float x, float y)
{
	Fire.loadFromFile("firepro.png");
    spritef.setTexture(Fire);
    spritef.setTextureRect(IntRect(0, 0, 72, 72));
    spritef.setPosition(x, y);
}

fire::fire(float x, float y, int dirb)
{
    this->dirb = dirb;
    Fire.loadFromFile("firepro.png");
    spritef.setTexture(Fire);
    spritef.setTextureRect(IntRect(0, 0, 72, 72));

    spritef.setPosition(x, y);
}

void fire::givefire(vector<fire> bolls, Sprite sprite, int dir)
{
    fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
    if (Keyboard::isKeyPressed(Keyboard::Key::RShift)) {
        this_thread::sleep_for(chrono::milliseconds(55));
        if (!(Keyboard::isKeyPressed(Keyboard::Key::RShift))) {
    
            //firebollpush += 1;
            //this_thread::sleep_for(chrono::milliseconds(50));
            //cout << firebollpush;
            bolls.push_back(b);
            bolls[bolls.size() - 1].dirb = dir;
        }
    
    
    }
}
