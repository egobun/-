#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <math.h>
#include <thread>
#include <chrono>
#include "Fire.h"
#include "Goblin.h"
#include "Block.h"
#include "HealthOfGoblin.h"
#include "Heart.h"
#include "Timer.h"
extern int dirg1;
extern int dirg2;


//#include<D:\MyProjects\ConsoleApplication9\ConsoleApplication9\view.h>

using namespace sf;
using namespace std;
//int dirg1 = 0;
//int dirg2 = 0;
//int n = 1;
//int firebollpush = 1;
//все для огня
//class fire {
//private:
//    Texture Fire;
//public:
//    //int i = 0;
//    int dirb = 0;
//    Sprite spritef;
//
//    fire() {
//        Fire.loadFromFile("firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//    }
//
//    Sprite getSprite() {
//        return this->spritef;
//    }
//    fire(float x, float y) {
//        Fire.loadFromFile("firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//
//        spritef.setPosition(x, y);
//    }
//    fire(float x, float y, int dirb) {
//        this->dirb = dirb;
//        Fire.loadFromFile("firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//
//        spritef.setPosition(x, y);
//    }
//    void givefire(vector<fire>bolls, Sprite sprite, int dir) {
//        fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
//        if (Keyboard::isKeyPressed(Keyboard::Key::RShift)) {
//            this_thread::sleep_for(chrono::milliseconds(55));
//            if (!(Keyboard::isKeyPressed(Keyboard::Key::RShift))) {
//
//                //firebollpush += 1;
//                //this_thread::sleep_for(chrono::milliseconds(50));
//                //cout << firebollpush;
//                bolls.push_back(b);
//                bolls[bolls.size() - 1].dirb = dir;
//            }
//
//
//        }
//
//    }
//
//};

//class Goblin {
//private:
//    Texture goblin1;
//    float x;
//    float y;
//    float width;
//    float height;
//
//    //Sprite spriteg1;
//
//public:
//    double dy;
//    Sprite spriteg1;
//    Goblin(int setx, int sety) {
//        goblin1.loadFromFile("goblinpro1.png");
//        spriteg1.setTexture(goblin1);
//        spriteg1.setTextureRect(IntRect(0, 0, 85, 85));
//        this->x = setx;
//        this->y = sety;
//        spriteg1.setPosition(setx, sety);
//        spriteg1.setScale(0.75, 0.75);//63.75
//        this->width = 63.75;
//        this->height = 63.75;
//
//
//    }
//
//    Sprite& getSprite() {
//        return this->spriteg1;
//    }
//    Texture getTexture() const {
//        return this->goblin1;
//    }
//    float getWidth() {
//        return this->width;
//    }
//    float getHeight() {
//        return this->height;
//    }
//
//    //void flygoblin(block& block1, block& block2, bool onGround, double dy) {
//    //    // остановка при малой скорости у земли (1)
//    //    if (dy < 0.5 and this->getSprite().getPosition().y > block1.getSprite().getPosition().y - this->getHeight() and this->getSprite().getPosition().x < block2.getSprite().getPosition().x) {
//    //        onGround = true;
//    //        dy = 0;
//    //    }
//    //    // остановка при малой скорости у земли (2)
//    //    if (dy < 0.5 and this->getSprite().getPosition().y > block1.getSprite().getPosition().y + this->getHeight() and this->getSprite().getPosition().x > block2.getSprite().getPosition().x + 50) {
//    //        onGround = true;
//    //        dy = 0;
//    //    }
//
//};

//class block {
//private:
//    int xValue;
//    int yValue;
//    float xScale;
//    float yScale;
//public:
//    Texture Block;
//    Sprite spriteb;
//
//
//    block(int setx, int sety, int number) {
//        if (number == 2)
//            this->Block.loadFromFile("block2.png");
//        if (number == 1)
//            this->Block.loadFromFile("block1.png");
//        spriteb.setTexture(Block);
//        this->spriteb.setPosition(setx, sety);
//        this->xValue = 0;
//        this->yValue = 0;
//        //spriteb.setScale(5, 5);
//    }
//    block(int setx, int sety, int number, float xScale, float yScale, float xValue, float yValue) {
//        this->xScale = xScale;
//        this->yScale = yScale;
//        this->xValue = xValue;
//        this->yValue = yValue;
//        if (number == 2)
//            this->Block.loadFromFile("block2.png");
//        if (number == 1)
//            this->Block.loadFromFile("block1.png");
//
//        spriteb.setTexture(Block);
//        this->spriteb.setPosition(setx, sety);
//        spriteb.setScale(xScale, yScale);
//    }
//    //block(int setx, int sety, int number,float xScale,float yScale) {
//    //    if (number == 2)
//    //        this->Block.loadFromFile("C:/Users/Влад/Desktop/block2.png");
//    //    if (number == 1)
//    //        this->Block.loadFromFile("C:/Users/Влад/Desktop/block1.png");
//    //    spriteb.setTexture(Block);
//    //    spriteb.setScale(xScale, yScale);
//    //    this->spriteb.setPosition(setx, sety);
//    //    this->xValue = 0;
//    //    this->yValue = 0;
//    //    //spriteb.setScale(5, 5);
//    //}
//    Texture getTexture() {
//        return this->Block;
//    }
//    Sprite getSprite() {
//        return this->spriteb;
//    }
//    int getxValue() {
//        return xValue;
//    }
//    int getyValue() {
//        return yValue;
//    }
//    float getxScale() {
//        return this->xScale;
//    }
//    float getyScale() {
//        return this->yScale;
//    }
//    void interfire(Sprite& goblin) {
//        if (goblin.getPosition().y >= this->spriteb.getPosition().y && goblin.getPosition().y <= this->spriteb.getPosition().y + 100/*this->getyValue()*/ && goblin.getPosition().x <= this->getSprite().getPosition().x + this->getxValue()) {
//            goblin.setPosition(this->getSprite().getPosition().x + 100, goblin.getPosition().y);
//        }
//    }
//
//    //void intergoblin(Goblin& goblin, bool& onGround) {
//    //    if (goblin.getSprite().getPosition().y + goblin.getHeight() - 20 > this->spriteb.getPosition().y && goblin.getSprite().getPosition().y < this->spriteb.getPosition().y + this->getyValue() /*this->getTexture().getSize() this->getyValue()*/ && this->getSprite().getPosition().x + this->getxValue() >= goblin.getSprite().getPosition().x && this->getSprite().getPosition().x <= goblin.getSprite().getPosition().x + goblin.getWidth()) {
//
//    //        if (dirg1 == 1 && Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//    //            goblin.getSprite().move(-15, 0);
//    //            return;
//    //        }
//    //        if (dirg1 == 0)
//
//    //            goblin.getSprite().setPosition(this->getSprite().getPosition().x + this->getxValue(), goblin.getSprite().getPosition().y);
//
//    //        if (dirg1 == 1)
//
//    //            goblin.getSprite().setPosition(this->getSprite().getPosition().x - goblin.getWidth(), goblin.getSprite().getPosition().y);
//
//    //        //cout << "help" << endl;
//
//    //    }
//    //    else
//    //        onGround = false;
//    //}
//
//    void intergoblin(Goblin& goblin, bool& onGround) {
//        if (goblin.getSprite().getPosition().y + goblin.getHeight() - 20 > this->spriteb.getPosition().y && goblin.getSprite().getPosition().y < this->spriteb.getPosition().y + this->getyValue() /*this->getTexture().getSize() this->getyValue()*/ && this->getSprite().getPosition().x + this->getxValue() >= goblin.getSprite().getPosition().x && this->getSprite().getPosition().x <= goblin.getSprite().getPosition().x + goblin.getWidth()) {
//
//            if (dirg1 == 1 && Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                goblin.getSprite().move(-15, 0);
//                return;
//            }
//            if (dirg1 == 0 && goblin.getSprite().getPosition().y < this->getSprite().getPosition().y + this->getyValue() - 15) {
//                cout << 0 << endl;
//                goblin.getSprite().setPosition(this->getSprite().getPosition().x + this->getxValue(), goblin.getSprite().getPosition().y);
//            }
//
//            if (dirg1 == 1 && goblin.getSprite().getPosition().y < this->getSprite().getPosition().y + this->getyValue() - 15) {
//                cout << 1 << endl;
//                goblin.getSprite().setPosition(this->getSprite().getPosition().x - goblin.getWidth(), goblin.getSprite().getPosition().y);
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::W) && goblin.getSprite().getPosition().y >= this->getSprite().getPosition().y + this->getyValue() - 5) {
//                goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, this->getSprite().getPosition().y + this->getyValue() - 5);
//                //goblin.getSprite().move(0, 5);
//            }
//            goblin.getSprite().move(0, 5);
//            //cout << "help" << endl;
//
//        }
//
//        else
//
//            onGround = false;
//    }
//
//    /*void intergoblin(Goblin& goblin, bool& onGround) {
//
//        if (goblin.getSprite().getPosition().x + goblin.getWidth() >= this->spriteb.getPosition().x && goblin.getSprite().getPosition().x <= this->spriteb.getPosition().x + getxValue()) {
//            if (((goblin.getSprite().getPosition().y + goblin.getHeight()) - this->spriteb.getPosition().y) <= 5 && ((goblin.getSprite().getPosition().x + goblin.getHeight()) - this->spriteb.getPosition().y) > 0)
//            {
//                goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, this->spriteb.getPosition().y - goblin.getHeight());
//                onGround = true;
//            }
//            if (((this->spriteb.getPosition().y + getyValue()) - goblin.getSprite().getPosition().y) <= 5 && ((this->spriteb.getPosition().y + getyValue()) - goblin.getSprite().getPosition().y) > 0)
//            {
//                goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, this->spriteb.getPosition().y + getyValue());
//                onGround = false;
//            }
//
//        }
//
//        if (goblin.getSprite().getPosition().y + goblin.getHeight() >= this->spriteb.getPosition().y && goblin.getSprite().getPosition().y<= this->spriteb.getPosition().y + getyValue()) {
//            if (((goblin.getSprite().getPosition().x + goblin.getWidth()) - this->spriteb.getPosition().x) <= 5 && ((goblin.getSprite().getPosition().x + goblin.getWidth()) - this->spriteb.getPosition().x)>0)
//            {
//                goblin.getSprite().setPosition(this->spriteb.getPosition().x - goblin.getWidth(), goblin.getSprite().getPosition().y);
//                cout << "sleva"<<endl;
//
//            }
//            if (((this->spriteb.getPosition().x+ getxValue()) - goblin.getSprite().getPosition().x) <= 5 && ((this->spriteb.getPosition().x + getxValue()) - goblin.getSprite().getPosition().x)>0)
//            {
//                goblin.getSprite().setPosition(this->spriteb.getPosition().x + getxValue(), goblin.getSprite().getPosition().y);
//                cout << "sprava" << endl;
//            }
//
//        }
//    }*/
//    void intergoblinjump(Goblin& goblin, bool& onGround, double& dy) {
//        if (dy < 0.005 and goblin.getSprite().getPosition().y < this->getSprite().getPosition().y + this->getyValue() && goblin.getSprite().getPosition().y > this->getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < this->getSprite().getPosition().x + this->getxValue() && goblin.getSprite().getPosition().x + goblin.getWidth() > this->getSprite().getPosition().x) {
//            onGround = true;
//            dy = 0;
//            //cout << "111" << endl;
//        }
//        else
//            onGround = false;
//    }
//
//    void fireunderblock(vector<fire>& bolls, block& block) {
//        for (int i = 0; i < bolls.size(); i++) {
//            auto fireblock = (this->getSprite().getPosition().x + this->getxValue() / 2 - bolls[i].spritef.getPosition().x) * (this->getSprite().getPosition().x + this->getxValue() / 2 - bolls[i].spritef.getPosition().x) + (this->getSprite().getPosition().y + this->getyValue() / 2 - bolls[i].spritef.getPosition().y) * (this->getSprite().getPosition().y + this->getyValue() / 2 - bolls[i].spritef.getPosition().y);
//            if (fireblock < block.getxValue() * block.getyValue()/1.5) {
//                bolls[i].spritef.setPosition(10000, 10000);
//            }
//        }
//    }
//
//};


//class HealthOfGoblin {
//private:
//    int NumberOfLives = 5;
//    bool IsBurn = false;
//    long int DurationOfBurning = 0;
//public:
//    void BurnGoblin() {
//        this->IsBurn = true;
//    }
//    void ExtinguishGoblin() {
//        this->IsBurn = false;
//    }
//    bool IsGoblinBurn() const {
//        return this->IsBurn;
//    }
//    long int GetDurationOfBurning() const {
//        return this->DurationOfBurning;
//    }
//    void KillDurationOfBurning() {
//        this->DurationOfBurning = 0;
//    }
//    void IncreaseDurationOfBurning() {
//        this->DurationOfBurning++;
//    }
//    int GetNumberOfLives() const {
//        return this->NumberOfLives;
//    }
//    void DecreaseNumberOfLives() {
//        this->NumberOfLives--;
//    }
//    void IncreaseNumberOfLives() {
//        this->NumberOfLives++;
//    }
//};

//class heart {
//private:
//    int width;
//    int height;
//    Texture Heart;
//    Sprite spriteh;
//public:
//    Sprite getSprite() {
//        return this->spriteh;
//    }
//    heart(int width, int height) {
//        Heart.loadFromFile("heart.png");
//        spriteh.setTexture(Heart);
//        this->width = width;
//        this->height = height;
//    }
//    int getWidth() const {
//        return this->width;
//    }
//    void setPositionOfHeart(float xPos, float yPos) {
//        spriteh.setPosition(xPos, yPos);
//    }
//};

sf::View viewForGoblin;
////sf::View viewForDragon;
//
View getGoblinCoordinatesForView(Vector2f vec) {
    viewForGoblin.setCenter(vec.x, 500);
    return viewForGoblin;
}

int main()
{
    //все для гоблина
    Goblin goblin(500, 500);
    //все для фаершаров
    vector<fire> bolls;
    //bolls.resize(100);
    RenderWindow win(VideoMode(1000, 1000), "SFML works!", Style::None);
    //viewForDragon.reset(sf::FloatRect(0, 0, 500,1000));
    viewForGoblin.reset(sf::FloatRect(0, 0, 1000, 1000));

    //все для таймера
    Font font;
    font.loadFromFile("font.ttf");
    Text text("", font, 40);
    //text.setColor(Color::Red);
    text.setStyle(Text::Bold);

    //все для хилинга гоблина
    Font fontForGoblin;
    fontForGoblin.loadFromFile("font.ttf");
    Text textForGoblin("", fontForGoblin, 45);
    textForGoblin.setFillColor(Color::Green);
    textForGoblin.setStyle(Text::Bold);
    int timeOfGoblinHealing = 0;
    int leftSecsOfGoblinHealing = 5;
    vector<string> secsOfGoblinHealing = { "0","1","2","3","4","5" };
    int durationOfSentenceForHealing = 0;
    int checkOutForScroll = 0;

    //все для дракона
    Texture tex;
    tex.loadFromFile("DraconProFile.png");

    Sprite sprite;
    sprite.setTexture(tex);
    sprite.setTextureRect(IntRect(0, 0, 140, 140));
    sprite.setScale(1.25, 1.25);

    int dragonReload = 0;

    float animationState = 0;
    float animationSpeed = 4;
    int dir = 0;
    Clock clcDrive;
    Clock clcAll;

    //все для аудиосопровождения

    Music music;//создаем объект музыки
    music.openFromFile("main_theme.wav");//загружаем файл
    music.play();

    //все для бэкграунда
    Texture cosmos;
    cosmos.loadFromFile("wallhaven.png");

    Sprite spritecosm;
    spritecosm.setTexture(cosmos);

    //все для блоков
    int numberOfBlocks = 15;
    block block1(1000, 970, 1, 3.125, 3.125, 200, 200);
    block block2(0, 600, 2, 1.5625, 1.5625, 100, 100);
    block block3(100, 600, 1, 2, 2, 128, 128);
    block block4(308, 561, 2, 3, 3, 192, 192);
    block block5(500, 561, 1, 1.5625, 1.5625, 100, 100);
    block block6(680, 700, 2, 1.5625, 1.5625, 100, 100);
    block block7(400, 280, 1, 1.5625, 1.5625, 100, 100);//преграда для дракона
    block block8(860, 650, 1, 3, 3, 64 * 3, 64 * 3);
    block block9(620, 950, 2, 1.5625, 1.5625, 64 * 1.5625, 64 * 1.5625);
    block block10(240, 950, 1, 1.5625, 1.5625, 64 * 1.5625, 64 * 1.5625);
    block block11(1142, 655, 2, 3, 3, 64 * 3, 64 * 3);
    block block12(1142 + 192, 655, 1, 1.5625, 1.5625, 100, 100);
    block block13(1549, 760, 2, 1, 1, 64, 64);
    block block14(1480, 100, 2, 3, 3, 64 * 3, 64 * 3);
    block block15(1700, 950, 1, 3, 3, 64 * 3, 64 * 3);
    
     //все для гаме-овера

    Texture gameover;
    gameover.loadFromFile("end.jpg");

    Sprite spritego;
    spritego.setTexture(gameover);
    spritego.setScale(2, 2);

    Music musicgo;//создаем объект музыки
    musicgo.openFromFile("game_over_theme.wav");//загружаем файл


    //все для виннинга

    Texture winning;
    winning.loadFromFile("winning.png");

    Sprite spritewi;
    spritewi.setTexture(winning);
    spritewi.setScale(2, 2);

    Music musicwi;//создаем объект музыки
    musicwi.openFromFile("winning_theme.wav");//загружаем файл



    float animationSpeedall = 6;
    float animationStateall = 0;

    win.setFramerateLimit(60);

    Clock clc;
    int circle_speed = 100;
    double dy = 0;
    bool drag = false;
    bool onGround = true;
    Vector2i click_offs;

    HealthOfGoblin gstate;

    getGoblinCoordinatesForView(goblin.getSprite().getPosition());

    Timer timer;

    while (win.isOpen())
    {
        goblin.getSprite().move(0, -dy);

        block1.intergoblin(goblin, onGround);
        block2.intergoblin(goblin, onGround);
        block3.intergoblin(goblin, onGround);
        block4.intergoblin(goblin, onGround);
        block5.intergoblin(goblin, onGround);
        block6.intergoblin(goblin, onGround);
        block7.intergoblin(goblin, onGround);
        block8.intergoblin(goblin, onGround);
        block9.intergoblin(goblin, onGround);
        block10.intergoblin(goblin, onGround);
        block11.intergoblin(goblin, onGround);
        block12.intergoblin(goblin, onGround);
        block13.intergoblin(goblin, onGround);
        block14.intergoblin(goblin, onGround);
        block15.intergoblin(goblin, onGround);

        block1.fireunderblock(bolls, block1);
        block2.fireunderblock(bolls, block2);
        block3.fireunderblock(bolls, block3);
        block4.fireunderblock(bolls, block4);
        block5.fireunderblock(bolls, block5);
        block6.fireunderblock(bolls, block6);
        block7.fireunderblock(bolls, block7);
        block8.fireunderblock(bolls, block8);
        block9.fireunderblock(bolls, block9);
        block10.fireunderblock(bolls, block10);
        block11.fireunderblock(bolls, block11);
        block12.fireunderblock(bolls, block12);
        block13.fireunderblock(bolls, block13);
        block14.fireunderblock(bolls, block14);
        block15.fireunderblock(bolls, block15);

        Event event;
        while (win.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                win.close();
        }
        if (gstate.GetNumberOfLives() > 0 and goblin.getSprite().getPosition().y <= 1000 and timer.getSeconds() >= 0) {
            auto elapsed = clc.restart().asMilliseconds();

            if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
                goblin.getSprite().move(circle_speed * elapsed / 500, 0);
                dirg1 = 1;
                if (goblin.getSprite().getPosition().x >= 500 and goblin.getSprite().getPosition().x <= 1277)
                    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
            }

            if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
                goblin.getSprite().move(-circle_speed * elapsed / 500, 0);
                dirg1 = 0;
                if (goblin.getSprite().getPosition().x >= 500 and goblin.getSprite().getPosition().x <= 1277)
                    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
            }

            if (goblin.getSprite().getPosition().y < 0)
            {
                goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, 0);
            }

            if (goblin.getSprite().getPosition().x < 0)
            {
                goblin.getSprite().setPosition(0, goblin.getSprite().getPosition().y);
            }


            if (goblin.getSprite().getPosition().x + goblin.getWidth() > 1777)
            {
                goblin.getSprite().setPosition(1777 - goblin.getWidth(), goblin.getSprite().getPosition().y);
            }

            //goto !(нельзя)
            block1.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block2.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block3.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block4.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block5.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block6.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block7.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block8.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block9.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block10.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block11.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block12.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block13.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block14.intergoblinjump(goblin, onGround, dy);
            if (onGround == true)
                goto linkAfterThisParagraph;
            block15.intergoblinjump(goblin, onGround, dy);

        linkAfterThisParagraph:

            if (Keyboard::isKeyPressed(Keyboard::Key::W) && onGround == true) {
                onGround = false;
                dy = 11;
            }

            if (onGround == false) {
                dy -= circle_speed * 0.005;
            }

            if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
                sprite.move(circle_speed * elapsed / 650, 0);
                dir = 0;
            }

            if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
                sprite.move(-circle_speed * elapsed / 650, 0);
                dir = 1;
            }
            if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
                sprite.move(0, circle_speed * elapsed / 650);
            }
            if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
                sprite.move(0, -circle_speed * elapsed / 650);
            }

            auto elapsed2 = clcDrive.restart().asSeconds();
            if (Keyboard::isKeyPressed(Keyboard::Key::A) || Keyboard::isKeyPressed(Keyboard::Key::D)) {
                animationState += elapsed2 * animationSpeed;
            }
            if (animationState >= 4) {
                animationState -= 4;
            }

            auto elapsedall = clcAll.restart().asSeconds();
            animationStateall += elapsedall * animationSpeedall;

            if (animationStateall >= 4) {
                animationStateall -= 4;
            }

            spritecosm.setPosition(0, 0);
            sprite.setTextureRect(IntRect(floor(animationStateall) * 140, dir * 140, 140, 140));
            goblin.getSprite().setTextureRect(IntRect(floor(animationState) * 85, dirg1 * 85, 85, 85));
            for (int i = 0; i < bolls.size(); i++) {
                bolls[i].spritef.setTextureRect(IntRect(floor(animationStateall) * 72, bolls[i].dirb * 72, 72, 72));
            }

            if (sprite.getPosition().x <= spritecosm.getPosition().x) {
                sprite.setPosition(spritecosm.getPosition().x, sprite.getPosition().y);
            }

            //1,25 - мастшаб дракона
            if (sprite.getPosition().x + (float)sprite.getTextureRect().width * 1.25 >= 1777) {
                sprite.setPosition(1777 - (float)sprite.getTextureRect().width * 1.25, sprite.getPosition().y);
            }

            if (sprite.getPosition().y <= 0) {
                sprite.setPosition(sprite.getPosition().x, 0);
            }

            fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
            dragonReload++;
            if (Keyboard::isKeyPressed(Keyboard::Key::RShift) && dragonReload == 1) {

                //firebollpush += 1;
                //this_thread::sleep_for(chrono::milliseconds(50));
                //cout << firebollpush;
                bolls.push_back(b);
                bolls[bolls.size() - 1].dirb = dir;

            }

            if (dragonReload == 10)
            {
                dragonReload = 0;
            }

            win.clear();
            win.draw(spritecosm);

            for (int i = 0; i < bolls.size(); i++) {
                if (bolls[i].dirb == 0) {
                    bolls[i].spritef.move(5, 5);
                }
                if (bolls[i].dirb == 1) {
                    bolls[i].spritef.move(-5, 5);
                }

                win.draw(bolls[i].getSprite());

            }

            for (int i = 0; i < bolls.size(); i++) {
                auto distfire = (goblin.getSprite().getPosition().x - bolls[i].spritef.getPosition().x) * (goblin.getSprite().getPosition().x - bolls[i].spritef.getPosition().x) + (goblin.getSprite().getPosition().y - bolls[i].spritef.getPosition().y) * (goblin.getSprite().getPosition().y - bolls[i].spritef.getPosition().y);
                if (distfire < 2500) {

                    gstate.BurnGoblin();
                    gstate.IncreaseDurationOfBurning();
                    bolls[i].spritef.setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);

                }
            }

            if (gstate.GetDurationOfBurning() > 250 && gstate.IsGoblinBurn()) {
                checkOutForScroll++;
                gstate.DecreaseNumberOfLives();
                gstate.KillDurationOfBurning();
                gstate.ExtinguishGoblin();
                for (int i = 0; i < bolls.size(); i++) {
                    if (bolls[i].spritef.getPosition() == goblin.getSprite().getPosition())
                        bolls[i].spritef.setPosition(1000, 1000);
                }
            }

            win.draw(sprite);
            win.draw(goblin.getSprite());
            win.draw(block1.getSprite());
            win.draw(block2.getSprite());
            win.draw(block3.getSprite());
            win.draw(block4.getSprite());
            win.draw(block5.getSprite());
            win.draw(block6.getSprite());
            win.draw(block7.getSprite());
            win.draw(block8.getSprite());
            win.draw(block9.getSprite());
            win.draw(block10.getSprite());
            win.draw(block11.getSprite());
            win.draw(block12.getSprite());
            win.draw(block13.getSprite());
            win.draw(block14.getSprite());
            win.draw(block15.getSprite());


            for (int i = 0; i < gstate.GetNumberOfLives(); i++)
            {
                heart PixelHeart(50, 47);
                PixelHeart.setPositionOfHeart(viewForGoblin.getCenter().x + 500 - PixelHeart.getWidth() * (i + 1), 5);
                win.draw(PixelHeart.getSprite());
            }

            timer.incrementCountOfCycles();
            text.setString(timer.getStringForDrawing(timer.getSeconds()));
            text.setPosition(viewForGoblin.getCenter().x - 490, viewForGoblin.getCenter().y - 510);
            win.draw(text);

            if (timer.getCountOfCycles() == timer.getLimitOfCycles()) {
                timer.setCountOfCycles(0);
                timer.decrementSeconds();
            }


            if (!(Keyboard::isKeyPressed(Keyboard::Key::D)) && !(Keyboard::isKeyPressed(Keyboard::Key::A)) && !(Keyboard::isKeyPressed(Keyboard::Key::W)))
            {
                if (Keyboard::isKeyPressed(Keyboard::Key::R))
                {
                    if (leftSecsOfGoblinHealing < 0) {
                        gstate.IncreaseNumberOfLives();
                        leftSecsOfGoblinHealing = 5;
                    }
                    else {
                        timeOfGoblinHealing++;
                        textForGoblin.setString(secsOfGoblinHealing[leftSecsOfGoblinHealing]);
                        textForGoblin.setPosition(goblin.getSprite().getPosition().x - textForGoblin.getCharacterSize() + goblin.getWidth(), goblin.getSprite().getPosition().y - goblin.getHeight());
                        win.draw(textForGoblin);
                        if (timeOfGoblinHealing == timer.getLimitOfCycles() and leftSecsOfGoblinHealing >= 0)
                        {
                            timeOfGoblinHealing = 0;
                            leftSecsOfGoblinHealing--;
                        }
                    }
                }
            }
            else
            {
                leftSecsOfGoblinHealing = 5;
            }

            if (gstate.GetNumberOfLives() <= 4 && checkOutForScroll >= 1 && durationOfSentenceForHealing <= 260) {
                durationOfSentenceForHealing++;
            }
            text.setString("Press R to heal a goblin while not moving");
            text.setPosition(viewForGoblin.getCenter().x - 500 + 2 * text.getCharacterSize(), viewForGoblin.getCenter().y + 500 - 2 * text.getCharacterSize());
            if (durationOfSentenceForHealing > 0 && durationOfSentenceForHealing < 260) {
                win.draw(text);
            }

            win.setView(viewForGoblin);
            win.display();

            if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
                break;
            }
        }
        else if ((gstate.GetNumberOfLives() <= 0 && timer.getSeconds() >= 0) || goblin.getSprite().getPosition().y > 1000)
        {
            music.pause();
            musicgo.play();
            spritego.setPosition(viewForGoblin.getCenter().x - 180, viewForGoblin.getCenter().y - 200);
            while (true)
            {
                win.clear();
                win.draw(spritecosm);
                win.draw(spritego);

                if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
                    break;
                }
                win.display();
            }
            break;
        }
        else {
            music.pause();
            musicwi.play();
            spritewi.setPosition(viewForGoblin.getCenter().x - 420, viewForGoblin.getCenter().y - 450);
            while (true)
            {
                win.clear();
                win.draw(spritecosm);
                win.draw(spritewi);

                if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
                    break;
                }
                win.display();
            }
            break;
        }

    }
    return 0;
}

//int main()
//{
//
//    Goblin goblin(500, 500);
//    block bll(500, 100, 0);
//
//    block bll1(10, 0, 1);
//
//    //bll.Block.loadFromFile("C:/Users/Влад/Desktop/block.png");
//    vector<fire> bolls;
//    //bolls.resize(100);
//    RenderWindow win(VideoMode(1000, 1000), "SFML works!", Style::None);
//    //viewForDragon.reset(sf::FloatRect(0, 0, 500,1000));
//    viewForGoblin.reset(sf::FloatRect(0, 0, 1000, 1000));
//
//    //все для таймера
//    Font font;
//    font.loadFromFile("font.ttf");
//    Text text("", font, 40);
//    //text.setColor(Color::Red);
//    text.setStyle(Text::Bold);
//
//    //все для хилинга гоблина
//    Font fontForGoblin;
//    fontForGoblin.loadFromFile("font.ttf");
//    Text textForGoblin("", fontForGoblin, 45);
//    textForGoblin.setFillColor(Color::Green);
//    textForGoblin.setStyle(Text::Bold);
//    int timeOfGoblinHealing = 0;
//    int leftSecsOfGoblinHealing = 5;
//    vector<string> secsOfGoblinHealing = { "0","1","2","3","4","5" };
//    int durationOfSentenceForHealing = 0;
//    int checkOutForScroll = 0;
//
//    //все для дракона
//    Texture tex;
//    tex.loadFromFile("DraconProFile.png");
//
//    Sprite sprite;
//    sprite.setTexture(tex);
//    sprite.setTextureRect(IntRect(0, 0, 140, 140));
//    sprite.setScale(1.25, 1.25);
//
//    int dragonReload = 0;
//
//    float animationState = 0;
//    float animationSpeed = 4;
//    int dir = 0;
//    Clock clcDrive;
//    Clock clcAll;
//
//    //все для аудиосопровождения
//
//    Music music;//создаем объект музыки
//    music.openFromFile("main_theme.wav");//загружаем файл
//    music.play();
//
//    //все для бэкграунда
//    Texture cosmos;
//    cosmos.loadFromFile("wallhaven.png");
//
//    Sprite spritecosm;
//    spritecosm.setTexture(cosmos);
//
//    //все для блоков
//    block block1(1000, 500, 1, 3.125, 3.125, 200, 200);
//    block block2(0, 600, 2, 1.5625, 1.5625, 100, 100);
//    block block3(100, 600, 1, 2, 2, 128, 128);
//    block block4(308, 650, 2, 3, 3, 192, 192);
//    block block5(580, 700, 1, 1.5625, 1.5625, 100, 100);
//    block block6(620, 700, 2, 1.5625, 1.5625, 100, 100);
//    block block7(500, 400, 1, 1.5625, 1.5625, 100, 100);//преграда для дракона
//    block block8(1280, 550, 2, 3, 3, 64 * 3, 64 * 3);
//    block block9(1280, 550, 2, 3, 3, 64 * 3, 64 * 3);
//    block block10(1280, 550, 2, 3, 3, 64 * 3, 64 * 3);
//    block block11(1280, 550, 2, 3, 3, 64 * 3, 64 * 3);
//    block block12(1280, 550, 2, 3, 3, 64 * 3, 64 * 3);
//    block block13(1280, 550, 2, 3, 3, 64 * 3, 64 * 3);
//    block block14(1280, 550, 2, 3, 3, 64 * 3, 64 * 3);
//    block block15(1500, 950, 2, 3, 3, 64 * 3, 64 * 3);
//
//
//
//
//
//
//    //все для гоблина 1
//    /*Texture goblin1;
//    goblin1.loadFromFile("C:/Users/Влад/Desktop/goblinpro1.png");
//    Sprite spriteg1;
//    spriteg1.setTexture(goblin1);
//    spriteg1.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteg1.setScale(0.75, 0.75);
//    spriteg1.setPosition(500, 500);*/
//
//
//    //все для гаме-овера
//
//    Texture gameover;
//    gameover.loadFromFile("end.jpg");
//
//    Sprite spritego;
//    spritego.setTexture(gameover);
//    /*spritego.setOrigin(spriteg1.getPosition().x, 300);
//    spritego.setPosition(0, 300);*/
//    spritego.setScale(2, 2);
//
//    Music musicgo;//создаем объект музыки
//    musicgo.openFromFile("game_over_theme.wav");//загружаем файл
//    //END
//
//    /*Texture end;
//    end.loadFromFile("C:/Users/Влад/Desktop/52.png");
//    Sprite spriteend;
//    spriteend.setTexture(end);
//    spriteend.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteend.setScale(25, 25);
//    spriteend.setPosition(-300, -300);*/
//
//
//    //fire f(sprite.getPosition().x, sprite.getPosition().y);
//    //f.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//    //fire fireboll(sprite.getPosition().x, sprite.getPosition().y);
//    float animationSpeedall = 6;
//    float animationStateall = 0;
//
//    win.setFramerateLimit(60);
//
//
//    //RectangleShape rectangle2(Vector2f(180.f, 200.f));
//    //rectangle2.setFillColor(Color(17, 180, 240));
//    //rectangle2.setPosition(200, 600);
//
//    Clock clc;
//    int c = 0;
//    int circle_speed = 100;
//    double dy = 0;
//    bool drag = false;
//    bool onGround = true;
//    Vector2i click_offs;
//
//    HealthOfGoblin gstate;
//
//    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//
//    Timer timer;
//
//    while (win.isOpen())
//    {
//        /*if (Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//            goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//        }*/
//        //goblin.getSprite().move(100, -dy);
//        goblin.getSprite().move(0, -dy);
//        //spriteg1.move(0,dy);
//        //block3.intergoblin(goblin, onGround);
//        block1.intergoblin(goblin, onGround);
//        block2.intergoblin(goblin, onGround);
//        block3.intergoblin(goblin, onGround);
//        block4.intergoblin(goblin, onGround);
//        block5.intergoblin(goblin, onGround);
//        block6.intergoblin(goblin, onGround);
//        block7.intergoblin(goblin, onGround);
//        block8.intergoblin(goblin, onGround);
//        block9.intergoblin(goblin, onGround);
//        block10.intergoblin(goblin, onGround);
//        block11.intergoblin(goblin, onGround);
//        block12.intergoblin(goblin, onGround);
//        block13.intergoblin(goblin, onGround);
//        block14.intergoblin(goblin, onGround);
//        block15.intergoblin(goblin, onGround);
//
//
//
//        block1.fireunderblock(bolls, block1);
//        block2.fireunderblock(bolls, block2);
//        block3.fireunderblock(bolls, block3);
//        block4.fireunderblock(bolls, block4);
//        block5.fireunderblock(bolls, block5);
//        block6.fireunderblock(bolls, block6);
//        block7.fireunderblock(bolls, block7);
//        block8.fireunderblock(bolls, block8);
//        block9.fireunderblock(bolls, block9);
//        block10.fireunderblock(bolls, block10);
//        block11.fireunderblock(bolls, block11);
//        block12.fireunderblock(bolls, block12);
//        block13.fireunderblock(bolls, block13);
//        block14.fireunderblock(bolls, block14);
//        block15.fireunderblock(bolls, block15);
//
//
//        /*if (Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//            goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//        }*/
//
//        //block2.intergoblin(spriteg1);
//        Event event;
//        while (win.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                win.close();
//        }
//        if (gstate.GetNumberOfLives() > 0 and goblin.getSprite().getPosition().y <= 1000 and timer.getSeconds() >= 0) {
//            auto elapsed = clc.restart().asMilliseconds();
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                goblin.getSprite().move(circle_speed * elapsed / 500, 0);
//                dirg1 = 1;
//                if (goblin.getSprite().getPosition().x >= 500 and goblin.getSprite().getPosition().x <= 1277)
//                    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
//                goblin.getSprite().move(-circle_speed * elapsed / 500, 0);
//                dirg1 = 0;
//                if (goblin.getSprite().getPosition().x >= 500 and goblin.getSprite().getPosition().x <= 1277)
//                    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//            }
//
//            if (goblin.getSprite().getPosition().y < 0)
//            {
//                goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, 0);
//            }
//
//            if (goblin.getSprite().getPosition().x < 0)
//            {
//                goblin.getSprite().setPosition(0, goblin.getSprite().getPosition().y);
//            }
//
//
//            if (goblin.getSprite().getPosition().x + goblin.getWidth() > 1777)
//            {
//                goblin.getSprite().setPosition(1777 - goblin.getWidth(), goblin.getSprite().getPosition().y);
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::W)/*&&dy==0*/) {
//                onGround = false;
//                dy = 5;
//                c = 0;
//            }
//
//            if (onGround == false) {
//                //spriteg1.move(0, -dy);
//                dy -= circle_speed * 0.005;
//            }
//            //if (goblin.getSprite().getPosition().y >= 550 && goblin.getSprite().getPosition().x < block1.getSprite().getPosition().x + block1.getxValue()) {
//            //    //spriteg1.move(0, 0);
//            //    dy = 0;
//            //}
//
//            // остановка при малой скорости у земли (1)
//            block1.intergoblinjump(goblin, onGround, dy);
//            block2.intergoblinjump(goblin, onGround, dy);
//            block3.intergoblinjump(goblin, onGround, dy);
//            block4.intergoblinjump(goblin, onGround, dy);
//            block5.intergoblinjump(goblin, onGround, dy);
//            block6.intergoblinjump(goblin, onGround, dy);
//            block7.intergoblinjump(goblin, onGround, dy);
//            block8.intergoblinjump(goblin, onGround, dy);
//            block9.intergoblinjump(goblin, onGround, dy);
//            block10.intergoblinjump(goblin, onGround, dy);
//            block11.intergoblinjump(goblin, onGround, dy);
//            block12.intergoblinjump(goblin, onGround, dy);
//            block13.intergoblinjump(goblin, onGround, dy);
//            block14.intergoblinjump(goblin, onGround, dy);
//            block15.intergoblinjump(goblin, onGround, dy);
//
//
//            //block3.intergoblinjump(goblin, onGround, dy);
//
//            /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block1.getSprite().getPosition().x + block1.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block1.getSprite().getPosition().x) {
//                onGround = true;
//                dy = 0;
//                cout << "111" << endl;
//            }
//            else
//                onGround = false;*/
//                // остановка при малой скорости у земли (2)
//                /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + goblin.getHeight() and goblin.getSprite().getPosition().x > block1.getSprite().getPosition().x + block1.getxValue()  + goblin.getWihgt()) {
//                    onGround = true;
//                    dy = 0;
//                    cout << "2222" << endl;
//                }*/
//                /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block2.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block2.getSprite().getPosition().x + block2.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block2.getSprite().getPosition().x) {
//                    onGround = true;
//                    dy = 0;
//                    cout << "2222" << endl;
//                }
//                else
//                    onGround = false;*/
//
//                    /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block3.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block3.getSprite().getPosition().x + block3.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block3.getSprite().getPosition().x) {
//                        onGround = true;
//                        dy = 0;
//                        cout << "3333" << endl;
//                    }
//                    else
//                        onGround = false;*/
//                        /*if (goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + goblin.getHeight()) {
//                            onGround = true;
//                            dy = 0;
//                        }*/
//
//                        //if ((goblin.getSprite().getPosition().x > block2.getSprite().getPosition().x + 50) && dy == 0) {
//                        //    //circle.move(0, 5);
//                        //    onGround = false;
//
//                        //}
//                        //if ((goblin.getSprite().getPosition().x == block2.getSprite().getPosition().x + 50) && (goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y - 50)) {
//                        //    // onGround = true;
//                        //    goblin.getSprite().setPosition(block2.getSprite().getPosition().x + 50, goblin.getSprite().getPosition().y);
//                        //    if (goblin.getSprite().getPosition().x <= block2.getSprite().getPosition().x + 50 && goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + 40) {
//                        //        onGround = true;
//                        //        dy = 0;
//                        //    }
//                        //}
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
//                sprite.move(circle_speed * elapsed / 650, 0);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x + circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//                dir = 0;
//                //getDragonCoordinatesForView(sprite.getPosition());
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
//                sprite.move(-circle_speed * elapsed / 650, 0);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x - circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//                dir = 1;
//                //getDragonCoordinatesForView(sprite.getPosition());
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
//                sprite.move(0, circle_speed * elapsed / 650);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y + circle_speed * elapsed / 650);
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
//                sprite.move(0, -circle_speed * elapsed / 650);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y - circle_speed * elapsed / 650);
//            }
//
//            /*if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
//                fire fireboll;
//                fireboll.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//                fireboll.spritef.move(circle_speed * elapsed / 1000, circle_speed * elapsed / 1000);
//                win.draw(fireboll.getSprite());
//            }*/
//
//            auto elapsed2 = clcDrive.restart().asSeconds();
//            if (Keyboard::isKeyPressed(Keyboard::Key::A) || Keyboard::isKeyPressed(Keyboard::Key::D)) {
//
//                animationState += elapsed2 * animationSpeed;
//
//            }
//            if (animationState >= 4) {
//                animationState -= 4;
//            }
//
//
//            auto elapsedall = clcAll.restart().asSeconds();
//            animationStateall += elapsedall * animationSpeedall;
//            if (animationStateall >= 4) {
//                animationStateall -= 4;
//            }
//            spritecosm.setPosition(0, 0);
//            sprite.setTextureRect(IntRect(floor(animationStateall) * 140, dir * 140, 140, 140));
//            goblin.getSprite().setTextureRect(IntRect(floor(animationState) * 85, dirg1 * 85, 85, 85));
//            //f.spritef.setTextureRect(IntRect(floor(animationStateall) * 72, 0, 72, 72));
//            //fireboll.spritef.setTextureRect(IntRect(floor(animationStateall) * 72, dir * 72, 72, 72));
//            for (int i = 0; i < bolls.size(); i++) {
//                bolls[i].spritef.setTextureRect(IntRect(floor(animationStateall) * 72, bolls[i].dirb * 72, 72, 72));
//            }
//
//            if (sprite.getPosition().x <= spritecosm.getPosition().x) {
//                sprite.setPosition(spritecosm.getPosition().x, sprite.getPosition().y);
//            }
//
//            //полет пули при нажатии конпки 
//            /*if (Keyboard::isKeyPressed(Keyboard::Key::LShift)) {
//                firebollpush += 1;
//                bolls[firebollpush].spritef.setPosition(sprite.getPosition().x + 50, sprite.getPosition().y + 65);
//                bolls[firebollpush].dirb = dir;
//            }*/
//
//
//            //////////////////////////////////////
//            fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
//            dragonReload++;
//            if (Keyboard::isKeyPressed(Keyboard::Key::RShift) && dragonReload == 1) {
//
//                //firebollpush += 1;
//                //this_thread::sleep_for(chrono::milliseconds(50));
//                //cout << firebollpush;
//                bolls.push_back(b);
//                bolls[bolls.size() - 1].dirb = dir;
//
//            }
//            if (dragonReload == 10)
//            {
//                dragonReload = 0;
//            }
//            //////////////////////////////////////
//
//
//            //fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
//
//
//            //thread t(firefunc,bolls,b,dir);
//
//
//            //if (Keyboard::isKeyPressed(Keyboard::Key::Q)) {
//            //    viewForGoblin.setViewport(sf::FloatRect(0, 0, 0.5f, 1));
//            //    //viewForDragon.setViewport(sf::FloatRect(0.5f, 0, 0.5f, 1));
//            //}
//
//
//
//
//            win.clear();
//            win.draw(spritecosm);
//
//            /*if (firebollpush >= 1) {*/
//                for (int i = 0; i < bolls.size(); i++) {
//                    if (bolls[i].dirb == 0) {
//                        bolls[i].spritef.move(5, 5);
//                    }
//                    if (bolls[i].dirb == 1) {
//                        bolls[i].spritef.move(-5, 5);
//                    }
//
//                    win.draw(bolls[i].getSprite());
//
//                }
//
//
//            //}
//
//
//            for (int i = 0; i < bolls.size(); i++) {
//                auto distfire = (goblin.getSprite().getPosition().x - bolls[i].spritef.getPosition().x) * (goblin.getSprite().getPosition().x - bolls[i].spritef.getPosition().x) + (goblin.getSprite().getPosition().y - bolls[i].spritef.getPosition().y) * (goblin.getSprite().getPosition().y - bolls[i].spritef.getPosition().y);
//                if (distfire < 2500) {
//
//                    gstate.BurnGoblin();
//                    gstate.IncreaseDurationOfBurning();
//                    bolls[i].spritef.setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//
//                }
//            }
//
//
//            if (gstate.GetDurationOfBurning() > 250 && gstate.IsGoblinBurn()) {
//                checkOutForScroll++;
//                gstate.DecreaseNumberOfLives();
//                gstate.KillDurationOfBurning();
//                gstate.ExtinguishGoblin();
//                for (int i = 0; i < bolls.size(); i++) {
//                    if (bolls[i].spritef.getPosition() == goblin.getSprite().getPosition())
//                        bolls[i].spritef.setPosition(1000, 1000);
//                }
//            }
//
//
//
//            win.draw(sprite);
//            //win.draw(block3.getSprite());
//            win.draw(goblin.getSprite());
//            win.draw(block1.getSprite());
//            win.draw(block2.getSprite());
//            win.draw(block3.getSprite());
//            win.draw(block4.getSprite());
//            win.draw(block5.getSprite());
//            win.draw(block6.getSprite());
//            win.draw(block7.getSprite());
//            win.draw(block8.getSprite());
//            win.draw(block9.getSprite());
//            win.draw(block10.getSprite());
//            win.draw(block11.getSprite());
//            win.draw(block12.getSprite());
//            win.draw(block13.getSprite());
//            win.draw(block14.getSprite());
//            win.draw(block15.getSprite());
//
//
//            //win.draw(block9.getSprite());
//
//            //win.draw(bll.getSprite());
//
//            for (int i = 0; i < gstate.GetNumberOfLives(); i++)
//            {
//                heart PixelHeart(50, 47);
//                PixelHeart.setPositionOfHeart(viewForGoblin.getCenter().x + 500 - PixelHeart.getWidth() * (i + 1), 5);
//                win.draw(PixelHeart.getSprite());
//            }
//
//            timer.incrementCountOfCycles();
//            text.setString(timer.getStringForDrawing(timer.getSeconds()));
//            text.setPosition(viewForGoblin.getCenter().x - 490, viewForGoblin.getCenter().y - 510);
//            win.draw(text);
//
//            if (timer.getCountOfCycles() == timer.getLimitOfCycles()) {
//                timer.setCountOfCycles(0);
//                timer.decrementSeconds();
//            }
//
//            /* win.setView(viewForGoblin);
//             win.display();*/
//
//            if (!(Keyboard::isKeyPressed(Keyboard::Key::D)) && !(Keyboard::isKeyPressed(Keyboard::Key::A)) && !(Keyboard::isKeyPressed(Keyboard::Key::W)))
//            {
//                if (Keyboard::isKeyPressed(Keyboard::Key::R))
//                {
//                    if (leftSecsOfGoblinHealing < 0) {
//                        gstate.IncreaseNumberOfLives();
//                        leftSecsOfGoblinHealing = 5;
//                    }
//                    else {
//                        timeOfGoblinHealing++;
//                        textForGoblin.setString(secsOfGoblinHealing[leftSecsOfGoblinHealing]);
//                        textForGoblin.setPosition(goblin.getSprite().getPosition().x - textForGoblin.getCharacterSize() + goblin.getWidth(), goblin.getSprite().getPosition().y - goblin.getHeight());
//                        win.draw(textForGoblin);
//                        if (timeOfGoblinHealing == timer.getLimitOfCycles() and leftSecsOfGoblinHealing >= 0)
//                        {
//                            timeOfGoblinHealing = 0;
//                            leftSecsOfGoblinHealing--;
//                        }
//                    }
//                }
//            }
//            else
//            {
//                leftSecsOfGoblinHealing = 5;
//            }
//
//            if (gstate.GetNumberOfLives() <= 4 && checkOutForScroll >= 1 && durationOfSentenceForHealing <= 260) {
//                durationOfSentenceForHealing++;
//            }
//            text.setString("Press R to heal a goblin while not moving");
//            text.setPosition(viewForGoblin.getCenter().x - 500 + 2 * text.getCharacterSize(), viewForGoblin.getCenter().y + 500 - 2 * text.getCharacterSize());
//            if (durationOfSentenceForHealing > 0 && durationOfSentenceForHealing < 260) {
//                win.draw(text);
//            }
//
//            win.setView(viewForGoblin);
//            win.display();
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
//                break;
//            }
//        }
//
//        else
//        {
//            music.pause();
//            musicgo.play();
//            spritego.setPosition(viewForGoblin.getCenter().x - 180, viewForGoblin.getCenter().y - 200);
//            while (true)
//            {
//                win.clear();
//                win.draw(spritecosm);
//                win.draw(spritego);
//
//                if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
//                    break;
//                }
//                win.display();
//            }
//            break;
//        }
//
//    }
//    //t.join();
//    return 0;
//
//}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include<SFML/Graphics.hpp>
//#include<SFML/Audio.hpp>
//#include<iostream>
//#include<cmath>
//#include<thread>
//#include<chrono>
////#include<D:\MyProjects\ConsoleApplication9\ConsoleApplication9\view.h>
//
//using namespace sf;
//using namespace std;
//int dirg1 = 0;
//int dirg2 = 0;
//int n = 1;
//int firebollpush = 1;
////все для огня
//class fire {
//private:
//    Texture Fire;
//public:
//    //int i = 0;
//    int dirb = 0;
//    Sprite spritef;
//
//    int getDerb() {
//        return dirb;
//    }
//
//    fire() {
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//    }
//
//    Sprite getSprite() {
//        return this->spritef;
//    }
//    fire(float x, float y) {
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//
//        spritef.setPosition(x, y);
//    }
//    fire(float x, float y, int dirb) {
//        this->dirb = dirb;
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//
//        spritef.setPosition(x, y);
//    }
//    void givefire(vector<fire>bolls, Sprite sprite,int dir) {
//        fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
//        if (Keyboard::isKeyPressed(Keyboard::Key::RShift)) {
//            this_thread::sleep_for(chrono::milliseconds(55));
//            if (!(Keyboard::isKeyPressed(Keyboard::Key::RShift))) {
//
//                //firebollpush += 1;
//                //this_thread::sleep_for(chrono::milliseconds(50));
//                //cout << firebollpush;
//                bolls.push_back(b);
//                bolls[bolls.size() - 1].dirb = dir;
//            }
//
//
//        }
//
//    }
//
//};
//
//class Goblin {
//private:
//    Texture goblin1;
//    float x;
//    float y;
//    float width;
//    float height;
//
//    //Sprite spriteg1;
//
//public:
//    double dy;
//    Sprite spriteg1;
//    Goblin(int setx, int sety) {
//        goblin1.loadFromFile("C:/Users/Bunakov Egor/Desktop/goblinpro1.png");
//        spriteg1.setTexture(goblin1);
//        spriteg1.setTextureRect(IntRect(0, 0, 85, 85));
//        this->x = setx;
//        this->y = sety;
//        spriteg1.setPosition(setx, sety);
//        spriteg1.setScale(0.75, 0.75);//63.75
//        this->width = 63.75;
//        this->height = 63.75;
//
//
//    }
//
//    Sprite& getSprite() {
//        return this->spriteg1;
//    }
//    Texture getTexture() const {
//        return this->goblin1;
//    }
//    float getWidth() {
//        return this->width;
//    }
//    float getHeight() {
//        return this->height;
//    }
//
//    //void flygoblin(block& block1, block& block2, bool onGround, double dy) {
//    //    // остановка при малой скорости у земли (1)
//    //    if (dy < 0.5 and this->getSprite().getPosition().y > block1.getSprite().getPosition().y - this->getHeight() and this->getSprite().getPosition().x < block2.getSprite().getPosition().x) {
//    //        onGround = true;
//    //        dy = 0;
//    //    }
//    //    // остановка при малой скорости у земли (2)
//    //    if (dy < 0.5 and this->getSprite().getPosition().y > block1.getSprite().getPosition().y + this->getHeight() and this->getSprite().getPosition().x > block2.getSprite().getPosition().x + 50) {
//    //        onGround = true;
//    //        dy = 0;
//    //    }
//
//};
//
//class block {
//private:
//    int xValue;
//    int yValue;
//    float xScale;
//    float yScale;
//public:
//    Texture Block;
//    Sprite spriteb;
//
//    /* block() {
//         spriteb.setTexture(Block);
//         this->xValue = 0;
//         this->yValue = 0;
//     };*/
//     /* block(int xValue, int yValue, int setx, int sety) {
//          spriteb.setTexture(Block);
//          this->xValue = xValue;
//          this->yValue = yValue;
//          this->spriteb.setPosition(setx, sety);
//      }*/
//      /* block(int setx, int sety) {
//
//           spriteb.setTexture(Block);
//           this->spriteb.setPosition(setx, sety);
//           this->xValue = 0;
//           this->yValue = 0;
//       }*/
//    block(int setx, int sety, int number) {
//        if (number == 2)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block2.png");
//        if (number == 1)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block1.png");
//        spriteb.setTexture(Block);
//        this->spriteb.setPosition(setx, sety);
//        this->xValue = 0;
//        this->yValue = 0;
//        //spriteb.setScale(5, 5);
//    }
//    block(int setx, int sety, int number, float xScale, float yScale, float xValue, float yValue) {
//        this->xScale = xScale;
//        this->yScale = yScale;
//        this->xValue = xValue;
//        this->yValue = yValue;
//        if (number == 2)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block2.png");
//        if (number == 1)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block1.png");
//
//        spriteb.setTexture(Block);
//        this->spriteb.setPosition(setx, sety);
//        spriteb.setScale(xScale, yScale);
//    }
//    //block(int setx, int sety, int number,float xScale,float yScale) {
//    //    if (number == 2)
//    //        this->Block.loadFromFile("C:/Users/Влад/Desktop/block2.png");
//    //    if (number == 1)
//    //        this->Block.loadFromFile("C:/Users/Влад/Desktop/block1.png");
//    //    spriteb.setTexture(Block);
//    //    spriteb.setScale(xScale, yScale);
//    //    this->spriteb.setPosition(setx, sety);
//    //    this->xValue = 0;
//    //    this->yValue = 0;
//    //    //spriteb.setScale(5, 5);
//    //}
//    Texture getTexture() {
//        return this->Block;
//    }
//    Sprite getSprite() {
//        return this->spriteb;
//    }
//    int getxValue() {
//        return xValue;
//    }
//    int getyValue() {
//        return yValue;
//    }
//    float getxScale() {
//        return this->xScale;
//    }
//    float getyScale() {
//        return this->yScale;
//    }
//    void interfire(Sprite& goblin) {
//        if (goblin.getPosition().y >= this->spriteb.getPosition().y && goblin.getPosition().y <= this->spriteb.getPosition().y + 100/*this->getyValue()*/ && goblin.getPosition().x <= this->getSprite().getPosition().x + this->getxValue()) {
//            goblin.setPosition(this->getSprite().getPosition().x + 100, goblin.getPosition().y);
//        }
//    }
//
//    //void intergoblin(Goblin& goblin, bool& onGround) {
//    //    if (goblin.getSprite().getPosition().y + goblin.getHeight() - 20 > this->spriteb.getPosition().y && goblin.getSprite().getPosition().y < this->spriteb.getPosition().y + this->getyValue() /*this->getTexture().getSize() this->getyValue()*/ && this->getSprite().getPosition().x + this->getxValue() >= goblin.getSprite().getPosition().x && this->getSprite().getPosition().x <= goblin.getSprite().getPosition().x + goblin.getWidth()) {
//
//    //        if (dirg1 == 1 && Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//    //            goblin.getSprite().move(-15, 0);
//    //            return;
//    //        }
//    //        if (dirg1 == 0)
//
//    //            goblin.getSprite().setPosition(this->getSprite().getPosition().x + this->getxValue(), goblin.getSprite().getPosition().y);
//
//    //        if (dirg1 == 1)
//
//    //            goblin.getSprite().setPosition(this->getSprite().getPosition().x - goblin.getWidth(), goblin.getSprite().getPosition().y);
//
//    //        //cout << "help" << endl;
//
//    //    }
//    //    else
//    //        onGround = false;
//    //}
//
//    void intergoblin(Goblin& goblin, bool& onGround) {
//        if (goblin.getSprite().getPosition().y + goblin.getHeight() - 20 > this->spriteb.getPosition().y && goblin.getSprite().getPosition().y < this->spriteb.getPosition().y + this->getyValue() /*this->getTexture().getSize() this->getyValue()*/ && this->getSprite().getPosition().x + this->getxValue() >= goblin.getSprite().getPosition().x && this->getSprite().getPosition().x <= goblin.getSprite().getPosition().x + goblin.getWidth()) {
//
//            if (dirg1 == 1 && Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                goblin.getSprite().move(-15, 0);
//                return;
//            }
//            if (dirg1 == 0 && goblin.getSprite().getPosition().y < this->getSprite().getPosition().y + this->getyValue()-15) {
//                cout << 0 << endl;
//                goblin.getSprite().setPosition(this->getSprite().getPosition().x + this->getxValue(), goblin.getSprite().getPosition().y);
//            }
//
//            if (dirg1 == 1 && goblin.getSprite().getPosition().y < this->getSprite().getPosition().y + this->getyValue()-15) {
//                cout << 1 << endl;
//                goblin.getSprite().setPosition(this->getSprite().getPosition().x - goblin.getWidth(), goblin.getSprite().getPosition().y);
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::W) && goblin.getSprite().getPosition().y >= this->getSprite().getPosition().y + this->getyValue() - 5){
//                goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, this->getSprite().getPosition().y + this->getyValue()-5);
//                //goblin.getSprite().move(0, 5);
//                cout << "down" << endl;
//            }
//            goblin.getSprite().move(0, 5);
//            //cout << "help" << endl;
//
//        }
//        
//        else
//            
//            onGround = false;
//    }
//
//    /*void intergoblin(Goblin& goblin, bool& onGround) {
//
//        if (goblin.getSprite().getPosition().x + goblin.getWidth() >= this->spriteb.getPosition().x && goblin.getSprite().getPosition().x <= this->spriteb.getPosition().x + getxValue()) {
//            if (((goblin.getSprite().getPosition().y + goblin.getHeight()) - this->spriteb.getPosition().y) <= 5 && ((goblin.getSprite().getPosition().x + goblin.getHeight()) - this->spriteb.getPosition().y) > 0)
//            {
//                goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, this->spriteb.getPosition().y - goblin.getHeight());
//                onGround = true;
//            }
//            if (((this->spriteb.getPosition().y + getyValue()) - goblin.getSprite().getPosition().y) <= 5 && ((this->spriteb.getPosition().y + getyValue()) - goblin.getSprite().getPosition().y) > 0)
//            {
//                goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, this->spriteb.getPosition().y + getyValue());
//                onGround = false;
//            }
//
//        }
//
//        if (goblin.getSprite().getPosition().y + goblin.getHeight() >= this->spriteb.getPosition().y && goblin.getSprite().getPosition().y<= this->spriteb.getPosition().y + getyValue()) {
//            if (((goblin.getSprite().getPosition().x + goblin.getWidth()) - this->spriteb.getPosition().x) <= 5 && ((goblin.getSprite().getPosition().x + goblin.getWidth()) - this->spriteb.getPosition().x)>0)
//            {
//                goblin.getSprite().setPosition(this->spriteb.getPosition().x - goblin.getWidth(), goblin.getSprite().getPosition().y);
//                cout << "sleva"<<endl;
//
//            }
//            if (((this->spriteb.getPosition().x+ getxValue()) - goblin.getSprite().getPosition().x) <= 5 && ((this->spriteb.getPosition().x + getxValue()) - goblin.getSprite().getPosition().x)>0)
//            {
//                goblin.getSprite().setPosition(this->spriteb.getPosition().x + getxValue(), goblin.getSprite().getPosition().y);
//                cout << "sprava" << endl;
//            }
//
//        }
//    }*/
//    void intergoblinjump(Goblin& goblin, bool& onGround, double& dy) {
//        if (dy < 0.005 and goblin.getSprite().getPosition().y < this->getSprite().getPosition().y + this->getyValue() && goblin.getSprite().getPosition().y > this->getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < this->getSprite().getPosition().x + this->getxValue() && goblin.getSprite().getPosition().x + goblin.getWidth() > this->getSprite().getPosition().x) {
//            onGround = true;
//            dy = 0;
//            //cout << "111" << endl;
//        }
//        else
//            onGround = false;
//    }
//
//    void fireunderblock(vector<fire>& bolls) {
//        for (int i = 0; i < bolls.size(); i++) {
//            auto fireblock = (this->getSprite().getPosition().x+this->getxValue()/2 - bolls[i].spritef.getPosition().x) * (this->getSprite().getPosition().x + this->getxValue() / 2 - bolls[i].spritef.getPosition().x) + (this->getSprite().getPosition().y + this->getyValue()/2- bolls[i].spritef.getPosition().y) * (this->getSprite().getPosition().y + this->getyValue() / 2 - bolls[i].spritef.getPosition().y);
//            if (fireblock < 2500) {
//                bolls[i].spritef.setPosition(10000, 10000);
//            }
//        }
//    }
//
//};
//
//
//class HealthOfGoblin {
//private:
//    int NumberOfLives = 5;
//    bool IsBurn = false;
//    long int DurationOfBurning = 0;
//public:
//    void BurnGoblin() {
//        this->IsBurn = true;
//    }
//    void ExtinguishGoblin() {
//        this->IsBurn = false;
//    }
//    bool IsGoblinBurn() const {
//        return this->IsBurn;
//    }
//    long int GetDurationOfBurning() const {
//        return this->DurationOfBurning;
//    }
//    void KillDurationOfBurning() {
//        this->DurationOfBurning = 0;
//    }
//    void IncreaseDurationOfBurning() {
//        this->DurationOfBurning++;
//    }
//    int GetNumberOfLives() const {
//        return this->NumberOfLives;
//    }
//    void DecreaseNumberOfLives() {
//        this->NumberOfLives--;
//    }
//    void IncreaseNumberOfLives() {
//        this->NumberOfLives++;
//    }
//};
//
//class heart {
//private:
//    int width;
//    int height;
//    Texture Heart;
//    Sprite spriteh;
//public:
//    Sprite getSprite() {
//        return this->spriteh;
//    }
//    heart(int width, int height) {
//        Heart.loadFromFile("C:/Users/Bunakov Egor/Desktop/heart.png");
//        spriteh.setTexture(Heart);
//        this->width = width;
//        this->height = height;
//    }
//    int getWidth() const {
//        return this->width;
//    }
//    void setPositionOfHeart(float xPos, float yPos) {
//        spriteh.setPosition(xPos, yPos);
//    }
//};
//
//sf::View viewForGoblin;
//////sf::View viewForDragon;
////
//View getGoblinCoordinatesForView(Vector2f vec) {
//    viewForGoblin.setCenter(vec.x, 500);
//    return viewForGoblin;
//}
//
////View getDragonCoordinatesForView(Vector2f vec) {
////    viewForDragon.setCenter(vec.x+100, vec.y);
////    return viewForDragon;
////}
//
//class Timer {
//private:
//    int limitOfCycles = 50;
//    int countOfCycles = 0;
//    int seconds = 120;
//    vector<string> countsString = { "0","1","2","3","4","5","6","7","8","9", ":" };
//public:
//    string getStringForDrawing(int number) const {
//        string temporaryString = "";
//        if (number >= 100)
//        {
//            temporaryString.append(countsString[number % 10]);
//            number = (number - number % 10) / 10;
//
//            temporaryString.append(countsString[number % 10]);
//            number = (number - number % 10) / 10;
//
//            temporaryString.append(countsString[number % 10]);
//        }
//        else if (number >= 10 and number <= 99)
//        {
//            temporaryString.append(countsString[number % 10]);
//            number = (number - number % 10) / 10;
//
//            temporaryString.append(countsString[number % 10]);
//        }
//        else
//        {
//            temporaryString.append(countsString[number]);
//        }
//        reverse(temporaryString.begin(), temporaryString.end());
//        return ("Time: " + temporaryString);
//    }
//
//    int getLimitOfCycles() const {
//        return this->limitOfCycles;
//    }
//
//    string getDvoetochie() {
//        return this->countsString[10];
//    }
//
//    void setCountOfCycles(int newCountOfCycles) {
//        this->countOfCycles = newCountOfCycles;
//    }
//
//    int getCountOfCycles() const {
//        return this->countOfCycles;
//    }
//
//    void decrementSeconds() {
//        this->seconds--;
//    }
//
//    int getSeconds() const {
//        return this->seconds;
//    }
//    void incrementCountOfCycles() {
//        this->countOfCycles++;
//    }
//};
//
//
//void firefunc(vector<fire> bolls,fire b,int dir) {
//    if (Keyboard::isKeyPressed(Keyboard::Key::RShift)) {
//        this_thread::sleep_for(chrono::milliseconds(55));
//        if (!(Keyboard::isKeyPressed(Keyboard::Key::RShift))) {
//
//            firebollpush += 1;
//            //this_thread::sleep_for(chrono::milliseconds(50));
//            //cout << firebollpush;
//            bolls.push_back(b);
//            bolls[bolls.size() - 1].dirb = dir;
//        }
//    }
//}
//
//
//int main()
//{
//
//    Goblin goblin(500, 500);
//    block bll(500, 100, 0);
//
//    block bll1(10, 0, 1);
//
//    //bll.Block.loadFromFile("C:/Users/Влад/Desktop/block.png");
//    vector<fire> bolls;
//    bolls.resize(10000);
//    set<fire> balls;
//    //bolls.resize(100);
//    RenderWindow win(VideoMode(1000, 1000), "SFML works!", Style::None);
//    //viewForDragon.reset(sf::FloatRect(0, 0, 500,1000));
//    viewForGoblin.reset(sf::FloatRect(0, 0, 1000, 1000));
//
//    //все для таймера
//    Font font;
//    font.loadFromFile("C:/Users/Bunakov Egor/Desktop/font.ttf");
//    Text text("", font, 40);
//    //text.setColor(Color::Red);
//    text.setStyle(Text::Bold);
//
//    //все для хилинга гоблина
//    Font fontForGoblin;
//    fontForGoblin.loadFromFile("C:/Users/Bunakov Egor/Desktop/font.ttf");
//    Text textForGoblin("", fontForGoblin, 45);
//    textForGoblin.setFillColor(Color::Green);
//    textForGoblin.setStyle(Text::Bold);
//    int timeOfGoblinHealing = 0;
//    int leftSecsOfGoblinHealing = 5;
//    vector<string> secsOfGoblinHealing = { "0","1","2","3","4","5" };
//    int durationOfSentenceForHealing = 0;
//
//    //все для дракона
//    Texture tex;
//    tex.loadFromFile("C:/Users/Bunakov Egor/Desktop/DraconProFile.png");
//
//    Sprite sprite;
//    sprite.setTexture(tex);
//    sprite.setTextureRect(IntRect(0, 0, 140, 140));
//    sprite.setScale(1.25, 1.25);
//
//    float animationState = 0;
//    float animationSpeed = 4;
//    int dir = 0;
//    Clock clcDrive;
//    Clock clcAll;
//
//    //все для аудиосопровождения
//
//    Music music;//создаем объект музыки
//    music.openFromFile("C:/Users/Bunakov Egor/Desktop/main_theme.wav");//загружаем файл
//    music.play();
//
//    //все для бэкграунда
//    Texture cosmos;
//    cosmos.loadFromFile("C:/Users/Bunakov Egor/Desktop/wallhaven.png");
//
//    Sprite spritecosm;
//    spritecosm.setTexture(cosmos);
//
//    //все для блока 1
//    //block block1(0, 500, 1, 3.125, 4.9,100,300);  
//    block block1(1000, 500, 1, 3.125, 3.125, 200, 200);
//
//
//    //все для блока 2
//    //block block2(200, 600, 2, 3.2, 3.2,180,200);
//    block block2(0, 600, 2, 1.5625, 1.5625, 100, 100);
//    //block block3(1000, 700, 2, 1.5625, 1.5625, 100, 100);
//    //block block3(300, 300, 2, 3.125, 3.125, 200, 200);
//
//
//    //все для гоблина 1
//    /*Texture goblin1;
//    goblin1.loadFromFile("C:/Users/Влад/Desktop/goblinpro1.png");
//    Sprite spriteg1;
//    spriteg1.setTexture(goblin1);
//    spriteg1.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteg1.setScale(0.75, 0.75);
//    spriteg1.setPosition(500, 500);*/
//
//
//    //все для гаме-овера
//
//    Texture gameover;
//    gameover.loadFromFile("C:/Users/Bunakov Egor/Desktop/end.jpg");
//
//    Sprite spritego;
//    spritego.setTexture(gameover);
//    /*spritego.setOrigin(spriteg1.getPosition().x, 300);
//    spritego.setPosition(0, 300);*/
//    spritego.setScale(2, 2);
//
//    Music musicgo;//создаем объект музыки
//    musicgo.openFromFile("C:/Users/Bunakov Egor/Desktop/game_over_theme.wav");//загружаем файл
//    //END
//
//    /*Texture end;
//    end.loadFromFile("C:/Users/Влад/Desktop/52.png");
//    Sprite spriteend;
//    spriteend.setTexture(end);
//    spriteend.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteend.setScale(25, 25);
//    spriteend.setPosition(-300, -300);*/
//
//
//    //fire f(sprite.getPosition().x, sprite.getPosition().y);
//    //f.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//    //fire fireboll(sprite.getPosition().x, sprite.getPosition().y);
//    float animationSpeedall = 6;
//    float animationStateall = 0;
//
//    win.setFramerateLimit(60);
//
//
//    //RectangleShape rectangle2(Vector2f(180.f, 200.f));
//    //rectangle2.setFillColor(Color(17, 180, 240));
//    //rectangle2.setPosition(200, 600);
//
//    Clock clc;
//    int c = 0;
//    int circle_speed = 100;
//    double dy = 0;
//    bool drag = false;
//    bool onGround = true;
//    Vector2i click_offs;
//
//    HealthOfGoblin gstate;
//
//    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//
//    Timer timer;
//
//    while (win.isOpen())
//    {
//        /*if (Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//            goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//        }*/
//        //goblin.getSprite().move(100, -dy);
//        goblin.getSprite().move(0, -dy);
//        //spriteg1.move(0,dy);
//        //block3.intergoblin(goblin, onGround);
//        block2.intergoblin(goblin, onGround);
//        block1.intergoblin(goblin, onGround);
//        block1.fireunderblock(bolls);
//        block2.fireunderblock(bolls);
//        /*if (Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//            goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//        }*/
//
//        //block2.intergoblin(spriteg1);
//        Event event;
//        while (win.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                win.close();
//        }
//        if (gstate.GetNumberOfLives() > 0 and goblin.getSprite().getPosition().y <= 1000 and timer.getSeconds() >= 0) {
//            auto elapsed = clc.restart().asMilliseconds();
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                goblin.getSprite().move(circle_speed * elapsed / 500, 0);
//                dirg1 = 1;
//                if (goblin.getSprite().getPosition().x >= 500 and goblin.getSprite().getPosition().x <= 1277)
//                    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
//                goblin.getSprite().move(-circle_speed * elapsed / 500, 0);
//                dirg1 = 0;
//                if (goblin.getSprite().getPosition().x >= 500 and goblin.getSprite().getPosition().x <= 1277)
//                    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//            }
//
//            if (goblin.getSprite().getPosition().y < 0)
//            {
//                goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, 0);
//            }
//
//            if (goblin.getSprite().getPosition().x < 0)
//            {
//                goblin.getSprite().setPosition(0, goblin.getSprite().getPosition().y);
//            }
//
//
//            if (goblin.getSprite().getPosition().x + goblin.getWidth() > 1777)
//            {
//                goblin.getSprite().setPosition(1777 - goblin.getWidth(), goblin.getSprite().getPosition().y);
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
//                onGround = false;
//                dy = 5;
//                c = 0;
//            }
//
//            if (onGround == false) {
//                //spriteg1.move(0, -dy);
//                dy -= circle_speed * 0.005;
//            }
//            //if (goblin.getSprite().getPosition().y >= 550 && goblin.getSprite().getPosition().x < block1.getSprite().getPosition().x + block1.getxValue()) {
//            //    //spriteg1.move(0, 0);
//            //    dy = 0;
//            //}
//
//            // остановка при малой скорости у земли (1)
//            block1.intergoblinjump(goblin, onGround, dy);
//            block2.intergoblinjump(goblin, onGround, dy);
//            //block3.intergoblinjump(goblin, onGround, dy);
//
//            /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block1.getSprite().getPosition().x + block1.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block1.getSprite().getPosition().x) {
//                onGround = true;
//                dy = 0;
//                cout << "111" << endl;
//            }
//            else
//                onGround = false;*/
//                // остановка при малой скорости у земли (2)
//                /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + goblin.getHeight() and goblin.getSprite().getPosition().x > block1.getSprite().getPosition().x + block1.getxValue()  + goblin.getWihgt()) {
//                    onGround = true;
//                    dy = 0;
//                    cout << "2222" << endl;
//                }*/
//                /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block2.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block2.getSprite().getPosition().x + block2.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block2.getSprite().getPosition().x) {
//                    onGround = true;
//                    dy = 0;
//                    cout << "2222" << endl;
//                }
//                else
//                    onGround = false;*/
//
//                    /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block3.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block3.getSprite().getPosition().x + block3.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block3.getSprite().getPosition().x) {
//                        onGround = true;
//                        dy = 0;
//                        cout << "3333" << endl;
//                    }
//                    else
//                        onGround = false;*/
//                        /*if (goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + goblin.getHeight()) {
//                            onGround = true;
//                            dy = 0;
//                        }*/
//
//                        //if ((goblin.getSprite().getPosition().x > block2.getSprite().getPosition().x + 50) && dy == 0) {
//                        //    //circle.move(0, 5);
//                        //    onGround = false;
//
//                        //}
//                        //if ((goblin.getSprite().getPosition().x == block2.getSprite().getPosition().x + 50) && (goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y - 50)) {
//                        //    // onGround = true;
//                        //    goblin.getSprite().setPosition(block2.getSprite().getPosition().x + 50, goblin.getSprite().getPosition().y);
//                        //    if (goblin.getSprite().getPosition().x <= block2.getSprite().getPosition().x + 50 && goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + 40) {
//                        //        onGround = true;
//                        //        dy = 0;
//                        //    }
//                        //}
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
//                sprite.move(circle_speed * elapsed / 650, 0);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x + circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//                dir = 0;
//                //getDragonCoordinatesForView(sprite.getPosition());
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
//                sprite.move(-circle_speed * elapsed / 650, 0);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x - circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//                dir = 1;
//                //getDragonCoordinatesForView(sprite.getPosition());
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
//                sprite.move(0, circle_speed * elapsed / 650);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y + circle_speed * elapsed / 650);
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
//                sprite.move(0, -circle_speed * elapsed / 650);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y - circle_speed * elapsed / 650);
//            }
//
//            /*if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
//                fire fireboll;
//                fireboll.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//                fireboll.spritef.move(circle_speed * elapsed / 1000, circle_speed * elapsed / 1000);
//                win.draw(fireboll.getSprite());
//            }*/
//
//            auto elapsed2 = clcDrive.restart().asSeconds();
//            if (Keyboard::isKeyPressed(Keyboard::Key::A) || Keyboard::isKeyPressed(Keyboard::Key::D)) {
//
//                animationState += elapsed2 * animationSpeed;
//
//            }
//            if (animationState >= 4) {
//                animationState -= 4;
//            }
//
//
//            auto elapsedall = clcAll.restart().asSeconds();
//            animationStateall += elapsedall * animationSpeedall;
//            if (animationStateall >= 4) {
//                animationStateall -= 4;
//            }
//            spritecosm.setPosition(0, 0);
//            sprite.setTextureRect(IntRect(floor(animationStateall) * 140, dir * 140, 140, 140));
//            goblin.getSprite().setTextureRect(IntRect(floor(animationState) * 85, dirg1 * 85, 85, 85));
//            
//
//            for (int i = 0; i < bolls.size(); i++) {
//                bolls[i].spritef.setTextureRect(IntRect(floor(animationStateall) * 72, bolls[i].dirb * 72, 72, 72));
//            }
//
//            if (sprite.getPosition().x <= spritecosm.getPosition().x) {
//                sprite.setPosition(spritecosm.getPosition().x, sprite.getPosition().y);
//            }
//
//            
//
//
//            //////////////////////////////////////
//            fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
//            
//            if (Keyboard::isKeyPressed(Keyboard::Key::RShift)) {
//                
//
//                    //firebollpush += 1;
//                    //this_thread::sleep_for(chrono::milliseconds(50));
//                    //cout << firebollpush;
//                
//                bolls.push_back(b);
//                  
//                bolls[bolls.size() - 1].dirb = dir;
//               
//
//
//            }
//            //////////////////////////////////////
//
//            /*fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
//            balls.insert(b);
//            auto it = balls.begin();
//            
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::RShift)) {
//               
//                for (int i = 0; i < bolls.size(); i++) {
//                    if (bolls[i].dirb == 0) {
//                        it->spritef.move(5, 5);
//                    }
//                    if (bolls[i].dirb == 1) {
//                        bolls[i].spritef.move(-5, 5);
//                    }
//
//                    win.draw(bolls[i].getSprite());
//
//                }
//
//
//            }
//
//
//*/
//
//
//            win.clear();
//            win.draw(spritecosm);
//
//            if (firebollpush >= 1) {
//                for (int i = 0; i < bolls.size(); i++) {
//                    if (bolls[i].dirb == 0) {
//                        bolls[i].spritef.move(5, 5);
//                    }
//                    if (bolls[i].dirb == 1) {
//                        bolls[i].spritef.move(-5, 5);
//                    }
//
//                    win.draw(bolls[i].getSprite());
//                    
//
//                }
//
//
//            }
//
//            /*for (int i = 0; i < bolls.size(); i++) {
//                if (bolls[i].getSprite().getPosition().x + bolls[i].getSprite().getPosition().y > 1000) {
//                    bolls.erase(bolls.begin() + i + 1);
//                    
//                    delete((&bolls[i]));
//                }
//            }*/
//
//            for (int i = 0; i < bolls.size(); i++) {
//                auto distfire = (goblin.getSprite().getPosition().x - bolls[i].spritef.getPosition().x) * (goblin.getSprite().getPosition().x - bolls[i].spritef.getPosition().x) + (goblin.getSprite().getPosition().y - bolls[i].spritef.getPosition().y) * (goblin.getSprite().getPosition().y - bolls[i].spritef.getPosition().y);
//                if (distfire < 2500) {
//
//                    gstate.BurnGoblin();
//                    gstate.IncreaseDurationOfBurning();
//                    bolls[i].spritef.setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//
//                }
//            }
//
//
//            if (gstate.GetDurationOfBurning() > 250 && gstate.IsGoblinBurn()) {
//                gstate.DecreaseNumberOfLives();
//                gstate.KillDurationOfBurning();
//                gstate.ExtinguishGoblin();
//                for (int i = 0; i < bolls.size(); i++) {
//                    if (bolls[i].spritef.getPosition() == goblin.getSprite().getPosition())
//                        //delete(&(bolls[i]));
//                        bolls[i].spritef.setPosition(1000, 1000);
//                }
//            }
//
//
//
//            win.draw(sprite);
//            win.draw(block2.getSprite());
//            //win.draw(block3.getSprite());
//            win.draw(goblin.getSprite());
//            win.draw(block1.getSprite());
//            //win.draw(bll.getSprite());
//
//            for (int i = 0; i < gstate.GetNumberOfLives(); i++)
//            {
//                heart PixelHeart(50, 47);
//                PixelHeart.setPositionOfHeart(viewForGoblin.getCenter().x + 500 - PixelHeart.getWidth() * (i + 1), 5);
//                win.draw(PixelHeart.getSprite());
//            }
//
//            timer.incrementCountOfCycles();
//            text.setString(timer.getStringForDrawing(timer.getSeconds()));
//            text.setPosition(viewForGoblin.getCenter().x - 490, viewForGoblin.getCenter().y - 510);
//            win.draw(text);
//
//            if (timer.getCountOfCycles() == timer.getLimitOfCycles()) {
//                timer.setCountOfCycles(0);
//                timer.decrementSeconds();
//            }
//
//            /* win.setView(viewForGoblin);
//             win.display();*/
//
//            if (!(Keyboard::isKeyPressed(Keyboard::Key::D)) && !(Keyboard::isKeyPressed(Keyboard::Key::A)) && !(Keyboard::isKeyPressed(Keyboard::Key::W)))
//            {
//                if (Keyboard::isKeyPressed(Keyboard::Key::R))
//                {
//                    if (leftSecsOfGoblinHealing < 0) {
//                        gstate.IncreaseNumberOfLives();
//                        leftSecsOfGoblinHealing = 5;
//                    }
//                    else {
//                        timeOfGoblinHealing++;
//                        textForGoblin.setString(secsOfGoblinHealing[leftSecsOfGoblinHealing]);
//                        textForGoblin.setPosition(goblin.getSprite().getPosition().x - textForGoblin.getCharacterSize() + goblin.getWidth(), goblin.getSprite().getPosition().y - goblin.getHeight());
//                        win.draw(textForGoblin);
//                        if (timeOfGoblinHealing == timer.getLimitOfCycles() and leftSecsOfGoblinHealing >= 0)
//                        {
//                            timeOfGoblinHealing = 0;
//                            leftSecsOfGoblinHealing--;
//                        }
//                    }
//                }
//            }
//            else
//            {
//                leftSecsOfGoblinHealing = 5;
//            }
//
//            if (durationOfSentenceForHealing < 260) {
//                durationOfSentenceForHealing++;
//                text.setString("Press R to heal a goblin while not moving");
//                text.setPosition(viewForGoblin.getCenter().x - 500 + 2 * text.getCharacterSize(), viewForGoblin.getCenter().y + 500 - 2 * text.getCharacterSize());
//                win.draw(text);
//            }
//
//            win.setView(viewForGoblin);
//            win.display();
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
//                break;
//            }
//        }
//
//        else
//        {
//            music.pause();
//            musicgo.play();
//            spritego.setPosition(viewForGoblin.getCenter().x - 180, viewForGoblin.getCenter().y - 200);
//            while (true)
//            {
//                win.clear();
//                win.draw(spritecosm);
//                win.draw(spritego);
//
//                if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
//                    break;
//                }
//                win.display();
//            }
//            break;
//        }
//
//    }
//    //t.join();
//    return 0;
//
//}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include<SFML/Graphics.hpp>
//#include<SFML/Audio.hpp>
//#include<iostream>
//#include<cmath>
//#include<thread>
//#include<chrono>
////#include<D:\MyProjects\ConsoleApplication9\ConsoleApplication9\view.h>
//
//using namespace sf;
//using namespace std;
//int dirg1 = 0;
//int dirg2 = 0;
//int n = 1;
//int firebollpush = 0;
////все для огня
//class fire {
//private:
//    Texture Fire;
//public:
//    //int i = 0;
//    int dirb = 0;
//    Sprite spritef;
//
//    fire() {
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//    }
//
//    Sprite getSprite() {
//        return this->spritef;
//    }
//    fire(float x, float y) {
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//
//        spritef.setPosition(x, y);
//    }
//    fire(float x, float y, int dirb) {
//        this->dirb = dirb;
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//
//        spritef.setPosition(x, y);
//    }
//
//};
//
//class Goblin {
//private:
//    Texture goblin1;
//    float x;
//    float y;
//    float wihdt;
//    float height;
//
//    //Sprite spriteg1;
//
//public:
//    double dy;
//    Sprite spriteg1;
//    Goblin(int setx, int sety) {
//        goblin1.loadFromFile("C:/Users/Bunakov Egor/Desktop/goblinpro1.png");
//        spriteg1.setTexture(goblin1);
//        spriteg1.setTextureRect(IntRect(0, 0, 85, 85));
//        this->x = setx;
//        this->y = sety;
//        spriteg1.setPosition(setx, sety);
//        spriteg1.setScale(0.75, 0.75);//63.75
//        this->wihdt = 63.75;
//        this->height = 63.75;
//
//
//    }
//
//    Sprite& getSprite() {
//        return this->spriteg1;
//    }
//    Texture getTexture() const {
//        return this->goblin1;
//    }
//    float getWihgt() {
//        return this->wihdt;
//    }
//    float getHeight() {
//        return this->height;
//    }
//
//    //void flygoblin(block& block1, block& block2, bool onGround, double dy) {
//    //    // остановка при малой скорости у земли (1)
//    //    if (dy < 0.5 and this->getSprite().getPosition().y > block1.getSprite().getPosition().y - this->getHeight() and this->getSprite().getPosition().x < block2.getSprite().getPosition().x) {
//    //        onGround = true;
//    //        dy = 0;
//    //    }
//    //    // остановка при малой скорости у земли (2)
//    //    if (dy < 0.5 and this->getSprite().getPosition().y > block1.getSprite().getPosition().y + this->getHeight() and this->getSprite().getPosition().x > block2.getSprite().getPosition().x + 50) {
//    //        onGround = true;
//    //        dy = 0;
//    //    }
//
//    //}
//
//};
//
//class block {
//private:
//    int xValue;
//    int yValue;
//    float xScale;
//    float yScale;
//public:
//    Texture Block;
//    Sprite spriteb;
//
//    /* block() {
//         spriteb.setTexture(Block);
//         this->xValue = 0;
//         this->yValue = 0;
//     };*/
//     /* block(int xValue, int yValue, int setx, int sety) {
//          spriteb.setTexture(Block);
//          this->xValue = xValue;
//          this->yValue = yValue;
//          this->spriteb.setPosition(setx, sety);
//      }*/
//      /* block(int setx, int sety) {
//
//           spriteb.setTexture(Block);
//           this->spriteb.setPosition(setx, sety);
//           this->xValue = 0;
//           this->yValue = 0;
//       }*/
//    block(int setx, int sety, int number) {
//        if (number == 2)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block2.png");
//        if (number == 1)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block1.png");
//        spriteb.setTexture(Block);
//        this->spriteb.setPosition(setx, sety);
//        this->xValue = 0;
//        this->yValue = 0;
//        //spriteb.setScale(5, 5);
//    }
//    block(int setx, int sety, int number, float xScale, float yScale, float xValue, float yValue) {
//        this->xScale = xScale;
//        this->yScale = yScale;
//        this->xValue = xValue;
//        this->yValue = yValue;
//        if (number == 2)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block2.png");
//        if (number == 1)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block1.png");
//
//        spriteb.setTexture(Block);
//        this->spriteb.setPosition(setx, sety);
//        spriteb.setScale(xScale, yScale);
//
//        //spriteb.setTextureRect(IntRect(0,0,xValue,yValue));
//
//        //spriteb.setScale(5, 5);
//    }
//    //block(int setx, int sety, int number,float xScale,float yScale) {
//    //    if (number == 2)
//    //        this->Block.loadFromFile("C:/Users/Влад/Desktop/block2.png");
//    //    if (number == 1)
//    //        this->Block.loadFromFile("C:/Users/Влад/Desktop/block1.png");
//    //    spriteb.setTexture(Block);
//    //    spriteb.setScale(xScale, yScale);
//    //    this->spriteb.setPosition(setx, sety);
//    //    this->xValue = 0;
//    //    this->yValue = 0;
//    //    //spriteb.setScale(5, 5);
//    //}
//    Texture getTexture() {
//        return this->Block;
//    }
//    Sprite getSprite() {
//        return this->spriteb;
//    }
//    int getxValue() {
//        return xValue;
//    }
//    int getyValue() {
//        return yValue;
//    }
//    float getxScale() {
//        return this->xScale;
//    }
//    float getyScale() {
//        return this->yScale;
//    }
//    //void interfire(Sprite a) {
//    //    if (a.getPosition().y >=this->spriteb.getPosition().y && a.getPosition().y <= this->spriteb.getPosition().y + 100/*this->getyValue()*/ && a.getPosition().x <= this->getSprite().getPosition().x + this->getxValue()) {
//    //        a.setPosition(this->getSprite().getPosition().x + 100, a.getPosition().y);
//    //    }
//    //}
//    void intergoblin(Goblin& a, bool& onGround) {
//        if (a.getSprite().getPosition().y + a.getHeight() - 20 > this->spriteb.getPosition().y && a.getSprite().getPosition().y < this->spriteb.getPosition().y + this->getyValue() /*this->getTexture().getSize() this->getyValue()*/ && this->getSprite().getPosition().x + this->getxValue() >= a.getSprite().getPosition().x && this->getSprite().getPosition().x <= a.getSprite().getPosition().x + a.getWihgt()) {
//
//            if (dirg1 == 1 && Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                a.getSprite().move(-15, 0);
//                return;
//            }
//            if (dirg1 == 0)
//
//                a.getSprite().setPosition(this->getSprite().getPosition().x + this->getxValue(), a.getSprite().getPosition().y);
//
//            if (dirg1 == 1)
//
//                a.getSprite().setPosition(this->getSprite().getPosition().x - a.getWihgt(), a.getSprite().getPosition().y);
//
//            cout << "help" << endl;
//
//        }
//        else
//            onGround = false;
//    }
//    void intergoblinjump(Goblin& goblin, bool& onGround, double& dy) {
//        if (dy < 0.005 and goblin.getSprite().getPosition().y < this->getSprite().getPosition().y + this->getyValue() && goblin.getSprite().getPosition().y > this->getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < this->getSprite().getPosition().x + this->getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > this->getSprite().getPosition().x) {
//            onGround = true;
//            dy = 0;
//            cout << "111" << endl;
//        }
//        else
//            onGround = false;
//    }
//
//};
//
//
//class HealthOfGoblin {
//private:
//    int NumberOfLives = 5;
//    bool IsBurn = false;
//    long int DurationOfBurning = 0;
//public:
//    void BurnGoblin() {
//        this->IsBurn = true;
//    }
//    void ExtinguishGoblin() {
//        this->IsBurn = false;
//    }
//    bool IsGoblinBurn() const {
//        return this->IsBurn;
//    }
//    long int GetDurationOfBurning() const {
//        return this->DurationOfBurning;
//    }
//    void KillDurationOfBurning() {
//        this->DurationOfBurning = 0;
//    }
//    void IncreaseDurationOfBurning() {
//        this->DurationOfBurning++;
//    }
//    int GetNumberOfLives() const {
//        return this->NumberOfLives;
//    }
//    void DecreaseNumberOfLives() {
//        this->NumberOfLives--;
//    }
//};
//
//class heart {
//private:
//    Texture Heart;
//    Sprite spriteh;
//public:
//    heart() {
//        Heart.loadFromFile("C:/Users/Bunakov Egor/Desktop/52.png");
//        spriteh.setTexture(Heart);
//        spriteh.setScale(1, 1);
//    }
//    Sprite getSprite() {
//        return this->spriteh;
//    }
//    heart(float x, float y) {
//        Heart.loadFromFile("C:/Users/Bunakov Egor/Desktop/52.png");
//        spriteh.setTexture(Heart);
//        spriteh.setScale(1, 1);
//        spriteh.setPosition(x, y);
//    }
//};
//
//sf::View viewForGoblin;
//////sf::View viewForDragon;
////
//View getGoblinCoordinatesForView(Vector2f vec) {
//    viewForGoblin.setCenter(vec.x, 500);
//    return viewForGoblin;
//}
//
////View getDragonCoordinatesForView(Vector2f vec) {
////    viewForDragon.setCenter(vec.x+100, vec.y);
////    return viewForDragon;
////}
//
//class Timer {
//private:
//    int limitOfCycles = 50;
//    int countOfCycles = 0;
//    int seconds = 120;
//    vector<string> countsString = { "0","1","2","3","4","5","6","7","8","9", ":" };
//public:
//    string getStringForDrawing(int number) const {
//        string temporaryString = "";
//        if (number >= 100)
//        {
//            temporaryString.append(countsString[number % 10]);
//            number = (number - number % 10) / 10;
//
//            temporaryString.append(countsString[number % 10]);
//            number = (number - number % 10) / 10;
//
//            temporaryString.append(countsString[number % 10]);
//        }
//        else if (number >= 10 and number <= 99)
//        {
//            temporaryString.append(countsString[number % 10]);
//            number = (number - number % 10) / 10;
//
//            temporaryString.append(countsString[number % 10]);
//        }
//        else
//        {
//            temporaryString.append(countsString[number]);
//        }
//        reverse(temporaryString.begin(), temporaryString.end());
//        return temporaryString;
//    }
//
//    int getLimitOfCycles() const {
//        return this->limitOfCycles;
//    }
//
//    string getDvoetochie() {
//        return this->countsString[10];
//    }
//
//    void setCountOfCycles(int newCountOfCycles) {
//        this->countOfCycles = newCountOfCycles;
//    }
//
//    int getCountOfCycles() const {
//        return this->countOfCycles;
//    }
//
//    void decrementSeconds() {
//        this->seconds--;
//    }
//
//    int getSeconds() const {
//        return this->seconds;
//    }
//    void incrementCountOfCycles() {
//        this->countOfCycles++;
//    }
//};
//
//int main()
//{
//
//    Goblin goblin(500, 500);
//    block bll(500, 100, 0);
//
//    block bll1(10, 0, 1);
//
//    //bll.Block.loadFromFile("C:/Users/Влад/Desktop/block.png");
//    vector<fire> bolls;
//    //bolls.resize(100);
//    RenderWindow win(VideoMode(1000, 1000), "SFML works!", Style::None);
//    //viewForDragon.reset(sf::FloatRect(0, 0, 500,1000));
//    viewForGoblin.reset(sf::FloatRect(0, 0, 1000, 1000));
//
//    //все для таймера
//    Font font;
//    font.loadFromFile("C:/Users/Bunakov Egor/Desktop/font.ttf");
//    Text text("", font, 60);
//    //text.setColor(Color::Red);
//    text.setStyle(Text::Bold);
//
//    //все для дракона
//    Texture tex;
//    tex.loadFromFile("C:/Users/Bunakov Egor/Desktop/DraconProFile.png");
//
//    Sprite sprite;
//    sprite.setTexture(tex);
//    sprite.setTextureRect(IntRect(0, 0, 140, 140));
//    sprite.setScale(1.25, 1.25);
//
//    float animationState = 0;
//    float animationSpeed = 4;
//    int dir = 0;
//    Clock clcDrive;
//    Clock clcAll;
//
//    //все для аудиосопровождения
//
//    Music music;//создаем объект музыки
//    music.openFromFile("C:/Users/Bunakov Egor/Desktop/main_theme.wav");//загружаем файл
//    music.play();
//
//    //все для бэкграунда
//    Texture cosmos;
//    cosmos.loadFromFile("C:/Users/Bunakov Egor/Desktop/wallhaven.png");
//
//    Sprite spritecosm;
//    spritecosm.setTexture(cosmos);
//
//    //все для блока 1
//    //block block1(0, 500, 1, 3.125, 4.9,100,300);  
//    block block1(200, 500, 1, 3.125,3.125, 200, 200);
//
//
//    //все для блока 2
//    //block block2(200, 600, 2, 3.2, 3.2,180,200);
//    block block2(0, 600, 2, 1.5625, 1.5625, 100, 100);
//    //block block3(1000, 700, 2, 1.5625, 1.5625, 100, 100);
//    //block block3(300, 300, 2, 3.125, 3.125, 200, 200);
//
//
//    //все для гоблина 1
//    /*Texture goblin1;
//    goblin1.loadFromFile("C:/Users/Влад/Desktop/goblinpro1.png");
//    Sprite spriteg1;
//    spriteg1.setTexture(goblin1);
//    spriteg1.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteg1.setScale(0.75, 0.75);
//    spriteg1.setPosition(500, 500);*/
//
//
//    //все для гаме-овера
//
//    Texture gameover;
//    gameover.loadFromFile("C:/Users/Bunakov Egor/Desktop/end.jpg");
//
//    Sprite spritego;
//    spritego.setTexture(gameover);
//    /*spritego.setOrigin(spriteg1.getPosition().x, 300);
//    spritego.setPosition(0, 300);*/
//    spritego.setScale(2, 2);
//
//    Music musicgo;//создаем объект музыки
//    musicgo.openFromFile("C:/Users/Bunakov Egor/Desktop/game_over_theme.wav");//загружаем файл
//    //END
//
//    Texture end;
//    end.loadFromFile("C:/Users/Bunakov Egor/Desktop/52.png");
//    Sprite spriteend;
//    spriteend.setTexture(end);
//    spriteend.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteend.setScale(25, 25);
//    spriteend.setPosition(-300, -300);
//
//
//    //fire f(sprite.getPosition().x, sprite.getPosition().y);
//    //f.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//    //fire fireboll(sprite.getPosition().x, sprite.getPosition().y);
//    float animationSpeedall = 6;
//    float animationStateall = 0;
//
//    win.setFramerateLimit(60);
//
//
//    RectangleShape rectangle1(Vector2f(200.f, 300.f));
//    rectangle1.setFillColor(Color(175, 180, 240));
//    rectangle1.setPosition(0, 500);
//
//    //RectangleShape rectangle2(Vector2f(180.f, 200.f));
//    //rectangle2.setFillColor(Color(17, 180, 240));
//    //rectangle2.setPosition(200, 600);
//
//    CircleShape circle;
//    circle.setRadius(50);
//    circle.setPosition(50, 450);
//    circle.setFillColor(Color(250, 0, 0));
//    //circle.setOrigin(50, 50);
//
//    Clock clc;
//    int c = 0;
//    int circle_speed = 100;
//    double dy = 0;
//    bool drag = false;
//    bool onGround = true;
//    Vector2i click_offs;
//
//    HealthOfGoblin gstate;
//
//    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//
//    Timer timer;
//
//    while (win.isOpen())
//    {
//        if (Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//            goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//        }
//        //goblin.getSprite().move(100, -dy);
//        goblin.getSprite().move(0, -dy);
//        //spriteg1.move(0,dy);
//        //block3.intergoblin(goblin, onGround);
//        block2.intergoblin(goblin, onGround);
//        block1.intergoblin(goblin, onGround);
//
//        if (Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//            goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//        }
//
//        //block2.intergoblin(spriteg1);
//        Event event;
//        while (win.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                win.close();
//        }
//        if (gstate.GetNumberOfLives() > 0 and goblin.getSprite().getPosition().y <= 1000 and timer.getSeconds() >= 0) {
//            auto elapsed = clc.restart().asMilliseconds();
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                goblin.getSprite().move(circle_speed * elapsed / 500, 0);
//                dirg1 = 1;
//                if (goblin.getSprite().getPosition().x >= 500 and goblin.getSprite().getPosition().x <= 1277)
//                    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//            }
//
//            if (goblin.getSprite().getPosition().y < 0)
//            {
//                goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, 0);
//            }
//
//            if (goblin.getSprite().getPosition().x < 0)
//            {
//                goblin.getSprite().setPosition(0, goblin.getSprite().getPosition().y);
//            }
//
//
//            if (goblin.getSprite().getPosition().x + goblin.getWihgt() > 1777)
//            {
//                goblin.getSprite().setPosition(1777 - goblin.getWihgt(), goblin.getSprite().getPosition().y);
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
//                goblin.getSprite().move(-circle_speed * elapsed / 500, 0);
//                dirg1 = 0;
//                if (goblin.getSprite().getPosition().x >= 500 and goblin.getSprite().getPosition().x <= 1277)
//                    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
//                onGround = false;
//                dy = 5;
//                c = 0;
//            }
//
//            if (onGround == false) {
//                //spriteg1.move(0, -dy);
//                dy -= circle_speed * 0.005;
//            }
//            //if (goblin.getSprite().getPosition().y >= 550 && goblin.getSprite().getPosition().x < block1.getSprite().getPosition().x + block1.getxValue()) {
//            //    //spriteg1.move(0, 0);
//            //    dy = 0;
//            //}
//
//            // остановка при малой скорости у земли (1)
//            block1.intergoblinjump(goblin, onGround, dy);
//            block2.intergoblinjump(goblin, onGround, dy);
//            //block3.intergoblinjump(goblin, onGround, dy);
//
//            /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block1.getSprite().getPosition().x + block1.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block1.getSprite().getPosition().x) {
//                onGround = true;
//                dy = 0;
//                cout << "111" << endl;
//            }
//            else
//                onGround = false;*/
//                // остановка при малой скорости у земли (2)
//                /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + goblin.getHeight() and goblin.getSprite().getPosition().x > block1.getSprite().getPosition().x + block1.getxValue()  + goblin.getWihgt()) {
//                    onGround = true;
//                    dy = 0;
//                    cout << "2222" << endl;
//                }*/
//                /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block2.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block2.getSprite().getPosition().x + block2.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block2.getSprite().getPosition().x) {
//                    onGround = true;
//                    dy = 0;
//                    cout << "2222" << endl;
//                }
//                else
//                    onGround = false;*/
//
//                    /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block3.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block3.getSprite().getPosition().x + block3.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block3.getSprite().getPosition().x) {
//                        onGround = true;
//                        dy = 0;
//                        cout << "3333" << endl;
//                    }
//                    else
//                        onGround = false;*/
//                        /*if (goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + goblin.getHeight()) {
//                            onGround = true;
//                            dy = 0;
//                        }*/
//
//                        //if ((goblin.getSprite().getPosition().x > block2.getSprite().getPosition().x + 50) && dy == 0) {
//                        //    //circle.move(0, 5);
//                        //    onGround = false;
//
//                        //}
//                        //if ((goblin.getSprite().getPosition().x == block2.getSprite().getPosition().x + 50) && (goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y - 50)) {
//                        //    // onGround = true;
//                        //    goblin.getSprite().setPosition(block2.getSprite().getPosition().x + 50, goblin.getSprite().getPosition().y);
//                        //    if (goblin.getSprite().getPosition().x <= block2.getSprite().getPosition().x + 50 && goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + 40) {
//                        //        onGround = true;
//                        //        dy = 0;
//                        //    }
//                        //}
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
//                sprite.move(circle_speed * elapsed / 650, 0);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x + circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//                dir = 0;
//                //getDragonCoordinatesForView(sprite.getPosition());
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
//                sprite.move(-circle_speed * elapsed / 650, 0);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x - circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//                dir = 1;
//                //getDragonCoordinatesForView(sprite.getPosition());
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
//                sprite.move(0, circle_speed * elapsed / 650);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y + circle_speed * elapsed / 650);
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
//                sprite.move(0, -circle_speed * elapsed / 650);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y - circle_speed * elapsed / 650);
//            }
//
//            /*if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
//                fire fireboll;
//                fireboll.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//                fireboll.spritef.move(circle_speed * elapsed / 1000, circle_speed * elapsed / 1000);
//                win.draw(fireboll.getSprite());
//            }*/
//
//            auto elapsed2 = clcDrive.restart().asSeconds();
//            if (Keyboard::isKeyPressed(Keyboard::Key::A) || Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                animationState += elapsed2 * animationSpeed;
//            }
//            if (animationState >= 4) {
//                animationState -= 4;
//            }
//
//
//            auto elapsedall = clcAll.restart().asSeconds();
//            animationStateall += elapsedall * animationSpeedall;
//            if (animationStateall >= 4) {
//                animationStateall -= 4;
//            }
//            spritecosm.setPosition(0, 0);
//            sprite.setTextureRect(IntRect(floor(animationStateall) * 140, dir * 140, 140, 140));
//            goblin.getSprite().setTextureRect(IntRect(floor(animationState) * 85, dirg1 * 85, 85, 85));
//            //f.spritef.setTextureRect(IntRect(floor(animationStateall) * 72, 0, 72, 72));
//            //fireboll.spritef.setTextureRect(IntRect(floor(animationStateall) * 72, dir * 72, 72, 72));
//            for (int i = 0; i < bolls.size(); i++) {
//                bolls[i].spritef.setTextureRect(IntRect(floor(animationStateall) * 72, bolls[i].dirb * 72, 72, 72));
//            }
//
//            if (sprite.getPosition().x <= spritecosm.getPosition().x) {
//                sprite.setPosition(spritecosm.getPosition().x, sprite.getPosition().y);
//            }
//
//            //полет пули при нажатии конпки 
//            /*if (Keyboard::isKeyPressed(Keyboard::Key::LShift)) {
//                firebollpush += 1;
//                bolls[firebollpush].spritef.setPosition(sprite.getPosition().x + 50, sprite.getPosition().y + 65);
//                bolls[firebollpush].dirb = dir;
//            }*/
//            fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
//            if (Keyboard::isKeyPressed(Keyboard::Key::RShift)) {
//
//                firebollpush += 1;
//                //this_thread::sleep_for(chrono::milliseconds(50));
//                //cout << firebollpush;
//                bolls.push_back(b);
//                bolls[bolls.size() - 1].dirb = dir;
//
//
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Q)) {
//                viewForGoblin.setViewport(sf::FloatRect(0, 0, 0.5f, 1));
//                //viewForDragon.setViewport(sf::FloatRect(0.5f, 0, 0.5f, 1));
//            }
//
//
//
//
//            win.clear();
//            win.draw(spritecosm);
//
//            if (firebollpush >= 1) {
//                for (int i = 0; i < bolls.size(); i++) {
//                    if (bolls[i].dirb == 0) {
//                        bolls[i].spritef.move(5, 5);
//                    }
//                    if (bolls[i].dirb == 1) {
//                        bolls[i].spritef.move(-5, 5);
//                    }
//
//                    win.draw(bolls[i].getSprite());
//
//                }
//
//
//            }
//
//
//            for (int i = 0; i < bolls.size(); i++) {
//                auto distfire = (goblin.getSprite().getPosition().x - bolls[i].spritef.getPosition().x) * (goblin.getSprite().getPosition().x - bolls[i].spritef.getPosition().x) + (goblin.getSprite().getPosition().y - bolls[i].spritef.getPosition().y) * (goblin.getSprite().getPosition().y - bolls[i].spritef.getPosition().y);
//                if (distfire < 2500) {
//
//                    gstate.BurnGoblin();
//                    gstate.IncreaseDurationOfBurning();
//                    bolls[i].spritef.setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//
//                }
//            }
//
//            if (gstate.GetDurationOfBurning() > 250 && gstate.IsGoblinBurn()) {
//                gstate.DecreaseNumberOfLives();
//                gstate.KillDurationOfBurning();
//                gstate.ExtinguishGoblin();
//                for (int i = 0; i < bolls.size(); i++) {
//                    if (bolls[i].spritef.getPosition() == goblin.getSprite().getPosition())
//                        bolls[i].spritef.setPosition(1000, 1000);
//                }
//            }
//
//
//
//            win.draw(sprite);
//            win.draw(block2.getSprite());
//            //win.draw(block3.getSprite());
//            win.draw(goblin.getSprite());
//            win.draw(block1.getSprite());
//            //win.draw(bll.getSprite());
//
//            for (int i = 0; i < gstate.GetNumberOfLives(); i++)
//            {
//                heart PixelHeart(viewForGoblin.getCenter().x + 450 - 45 * i, 5);
//                win.draw(PixelHeart.getSprite());
//            }
//
//            timer.incrementCountOfCycles();
//            text.setString(timer.getStringForDrawing(timer.getSeconds()));
//            text.setPosition(viewForGoblin.getCenter().x - 490, viewForGoblin.getCenter().y - 510);
//            win.draw(text);
//
//            if (timer.getCountOfCycles() == timer.getLimitOfCycles()) {
//                timer.setCountOfCycles(0);
//                timer.decrementSeconds();
//            }
//
//            win.setView(viewForGoblin);
//            win.display();
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
//                break;
//            }
//        }
//
//        else
//        {
//            music.pause();
//            musicgo.play();
//            spritego.setPosition(viewForGoblin.getCenter().x - 180, viewForGoblin.getCenter().y - 200);
//            while (true)
//            {
//                win.clear();
//                win.draw(spritecosm);
//                win.draw(spritego);
//
//                if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
//                    break;
//                }
//                win.display();
//            }
//            break;
//        }
//
//    }
//
//    return 0;
//
//}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//#include<SFML/Graphics.hpp>
//#include<SFML/Audio.hpp>
//#include<iostream>
//#include<cmath>
//#include<thread>
//#include<chrono>
////#include<D:\MyProjects\ConsoleApplication9\ConsoleApplication9\view.h>
//
//using namespace sf;
//using namespace std;
//int dirg1 = 0;
//int dirg2 = 0;
//int n = 1;
//int firebollpush = 0;
////все для огня
//class fire {
//private:
//    Texture Fire;
//public:
//    //int i = 0;
//    int dirb = 0;
//    Sprite spritef;
//
//    fire() {
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//    }
//
//    Sprite getSprite() {
//        return this->spritef;
//    }
//    fire(float x, float y) {
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//
//        spritef.setPosition(x, y);
//    }
//    fire(float x, float y, int dirb) {
//        this->dirb = dirb;
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//
//        spritef.setPosition(x, y);
//    }
//
//};
//
//class Goblin {
//private:
//    Texture goblin1;
//    float x;
//    float y;
//    float wihdt;
//    float height;
//
//    //Sprite spriteg1;
//
//public:
//    double dy;
//    Sprite spriteg1;
//    Goblin(int setx, int sety) {
//        goblin1.loadFromFile("C:/Users/Bunakov Egor/Desktop/ranger3.png");
//        spriteg1.setTexture(goblin1);
//        spriteg1.setTextureRect(IntRect(0, 0, 85, 85));
//        this->x = setx;
//        this->y = sety;
//        spriteg1.setPosition(setx, sety);
//        spriteg1.setScale(0.75, 0.75);//63.75
//        this->wihdt = 63.75;
//        this->height = 63.75;
//
//
//    }
//
//    Sprite& getSprite() {
//        return this->spriteg1;
//    }
//    Texture getTexture() const {
//        return this->goblin1;
//    }
//    float getWihgt() {
//        return this->wihdt;
//    }
//    float getHeight() {
//        return this->height;
//    }
//
//    //void flygoblin(block& block1, block& block2, bool onGround, double dy) {
//    //    // остановка при малой скорости у земли (1)
//    //    if (dy < 0.5 and this->getSprite().getPosition().y > block1.getSprite().getPosition().y - this->getHeight() and this->getSprite().getPosition().x < block2.getSprite().getPosition().x) {
//    //        onGround = true;
//    //        dy = 0;
//    //    }
//    //    // остановка при малой скорости у земли (2)
//    //    if (dy < 0.5 and this->getSprite().getPosition().y > block1.getSprite().getPosition().y + this->getHeight() and this->getSprite().getPosition().x > block2.getSprite().getPosition().x + 50) {
//    //        onGround = true;
//    //        dy = 0;
//    //    }
//
//    //}
//
//};
//
//class block {
//private:
//    int xValue;
//    int yValue;
//    float xScale;
//    float yScale;
//public:
//    Texture Block;
//    Sprite spriteb;
//
//    /* block() {
//         spriteb.setTexture(Block);
//         this->xValue = 0;
//         this->yValue = 0;
//     };*/
//     /* block(int xValue, int yValue, int setx, int sety) {
//          spriteb.setTexture(Block);
//          this->xValue = xValue;
//          this->yValue = yValue;
//          this->spriteb.setPosition(setx, sety);
//      }*/
//      /* block(int setx, int sety) {
//
//           spriteb.setTexture(Block);
//           this->spriteb.setPosition(setx, sety);
//           this->xValue = 0;
//           this->yValue = 0;
//       }*/
//    block(int setx, int sety, int number) {
//        if (number == 2)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block2.png");
//        if (number == 1)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block1.png");
//        spriteb.setTexture(Block);
//        this->spriteb.setPosition(setx, sety);
//        this->xValue = 0;
//        this->yValue = 0;
//        //spriteb.setScale(5, 5);
//    }
//    block(int setx, int sety, int number, float xScale, float yScale, float xValue, float yValue) {
//        this->xScale = xScale;
//        this->yScale = yScale;
//        this->xValue = xValue;
//        this->yValue = yValue;
//        if (number == 2)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block2.png");
//        if (number == 1)
//            this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block1.png");
//
//        spriteb.setTexture(Block);
//        this->spriteb.setPosition(setx, sety);
//        spriteb.setScale(xScale, yScale);
//        
//        //spriteb.setTextureRect(IntRect(0,0,xValue,yValue));
//
//        //spriteb.setScale(5, 5);
//    }
//    //block(int setx, int sety, int number,float xScale,float yScale) {
//    //    if (number == 2)
//    //        this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block2.png");
//    //    if (number == 1)
//    //        this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block1.png");
//    //    spriteb.setTexture(Block);
//    //    spriteb.setScale(xScale, yScale);
//    //    this->spriteb.setPosition(setx, sety);
//    //    this->xValue = 0;
//    //    this->yValue = 0;
//    //    //spriteb.setScale(5, 5);
//    //}
//    Texture getTexture() {
//        return this->Block;
//    }
//    Sprite getSprite() {
//        return this->spriteb;
//    }
//    int getxValue() {
//        return xValue;
//    }
//    int getyValue() {
//        return yValue;
//    }
//    float getxScale() {
//        return this->xScale;
//    }
//    float getyScale() {
//        return this->yScale;
//    }
//    //void interfire(Sprite a) {
//    //    if (a.getPosition().y >=this->spriteb.getPosition().y && a.getPosition().y <= this->spriteb.getPosition().y + 100/*this->getyValue()*/ && a.getPosition().x <= this->getSprite().getPosition().x + this->getxValue()) {
//    //        a.setPosition(this->getSprite().getPosition().x + 100, a.getPosition().y);
//    //    }
//    //}
//    void intergoblin(Goblin& a,bool& onGround) {
//        if (a.getSprite().getPosition().y + a.getHeight() - 20 > this->spriteb.getPosition().y && a.getSprite().getPosition().y < this->spriteb.getPosition().y + this->getyValue() /*this->getTexture().getSize() this->getyValue()*/ && this->getSprite().getPosition().x + this->getxValue() >= a.getSprite().getPosition().x && this->getSprite().getPosition().x <= a.getSprite().getPosition().x + a.getWihgt()) {
//            
//            if (dirg1 == 1 && Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                a.getSprite().move(-15, 0);
//                return;
//            }
//            if (dirg1 == 0)
//                
//                a.getSprite().setPosition(this->getSprite().getPosition().x + this->getxValue(), a.getSprite().getPosition().y);
//            
//            if (dirg1 == 1)
//                
//                a.getSprite().setPosition(this->getSprite().getPosition().x - a.getWihgt(), a.getSprite().getPosition().y);
//            
//            cout << "help" << endl;
//
//        }
//        else
//            onGround = false;
//    }
//    void intergoblinjump(Goblin& goblin, bool& onGround,double& dy) {
//        if (dy < 0.005 and goblin.getSprite().getPosition().y < this->getSprite().getPosition().y + this->getyValue()&&goblin.getSprite().getPosition().y > this->getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < this->getSprite().getPosition().x + this->getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > this->getSprite().getPosition().x) {
//            onGround = true;
//            dy = 0;
//            cout << "111" << endl;
//        }
//        else
//            onGround = false;
//    }
//
//};
//
//
//class HealthOfGoblin {
//private:
//    int NumberOfLives = 3;
//    bool IsBurn = false;
//    long int DurationOfBurning = 0;
//public:
//    void BurnGoblin() {
//        this->IsBurn = true;
//    }
//    void ExtinguishGoblin() {
//        this->IsBurn = false;
//    }
//    bool IsGoblinBurn() const {
//        return this->IsBurn;
//    }
//    long int GetDurationOfBurning() const {
//        return this->DurationOfBurning;
//    }
//    void KillDurationOfBurning() {
//        this->DurationOfBurning = 0;
//    }
//    void IncreaseDurationOfBurning() {
//        this->DurationOfBurning++;
//    }
//    int GetNumberOfLives() const {
//        return this->NumberOfLives;
//    }
//    void DecreaseNumberOfLives() {
//        this->NumberOfLives--;
//    }
//};
//
//class heart {
//private:
//    Texture Heart;
//    Sprite spriteh;
//public:
//    heart() {
//        Heart.loadFromFile("C:/Users/Bunakov Egor/Desktop/52.png");
//        spriteh.setTexture(Heart);
//        spriteh.setScale(1, 1);
//    }
//    Sprite getSprite() {
//        return this->spriteh;
//    }
//    heart(float x, float y) {
//        Heart.loadFromFile("C:/Users/Bunakov Egor/Desktop/52.png");
//        spriteh.setTexture(Heart);
//        spriteh.setScale(1, 1);
//        spriteh.setPosition(x, y);
//    }
//};
//
//sf::View viewForGoblin;
//////sf::View viewForDragon;
////
//View getGoblinCoordinatesForView(Vector2f vec) {
//    viewForGoblin.setCenter(vec.x, 500);
//    return viewForGoblin;
//}
//
////View getDragonCoordinatesForView(Vector2f vec) {
////    viewForDragon.setCenter(vec.x+100, vec.y);
////    return viewForDragon;
////}
//
//int main()
//{
//
//    Goblin goblin(500,500);
//    block bll(500, 100, 0);
//
//    block bll1(10, 0, 1);
//
//    //bll.Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block.png");
//    vector<fire> bolls;
//    //bolls.resize(100);
//    RenderWindow win(VideoMode(1000, 1000), "SFML works!", Style::None);
//    //viewForDragon.reset(sf::FloatRect(0, 0, 500,1000));
//    viewForGoblin.reset(sf::FloatRect(0, 0, 1000, 1000));
//
//    //все для дракона
//    Texture tex;
//    tex.loadFromFile("C:/Users/Bunakov Egor/Desktop/DraconProFile.png");
//
//    Sprite sprite;
//    sprite.setTexture(tex);
//    sprite.setTextureRect(IntRect(0, 0, 140, 140));
//    sprite.setScale(1.25, 1.25);
//
//    float animationState = 0;
//    float animationSpeed = 6;
//    int dir = 0;
//    Clock clcDrive;
//    Clock clcAll;
//
//    //все для аудиосопровождения
//
//    Music music;//создаем объект музыки
//    music.openFromFile("C:/Users/Bunakov Egor/Desktop/main_theme.wav");//загружаем файл
//    music.play();
//
//    //все для бэкграунда
//    Texture cosmos;
//    cosmos.loadFromFile("C:/Users/Bunakov Egor/Desktop/background.png");
//
//    Sprite spritecosm;
//    spritecosm.setTexture(cosmos);
//    spritecosm.setTextureRect(IntRect(0, 0, 1000, 1000));
//    spritecosm.setScale(1.7, 2.2);
//
//
//
//    //все для блока 1
//    
//    //block block1(200, 500, 1, 3.125, 4.9, 200, 300);
//    block block1(188, 550, 1, 3.125,3.125, 200, 200);
//
//
//    //все для блока 2
//    //block block2(200, 600, 2, 3.2, 3.2,180,200);
//    block block2(0, 500, 2, 3.125, 3.125, 200, 200);
//    block block3(800, 600, 2, 3.125, 3.125, 200, 200);
//
//
//    //все для гоблина 1
//    /*Texture goblin1;
//    goblin1.loadFromFile("C:/Users/Bunakov Egor/Desktop/goblinpro1.png");
//    Sprite spriteg1;
//    spriteg1.setTexture(goblin1);
//    spriteg1.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteg1.setScale(0.75, 0.75);
//    spriteg1.setPosition(500, 500);*/
//
//
//    //все для гаме-овера
//
//    Texture gameover;
//    gameover.loadFromFile("C:/Users/Bunakov Egor/Desktop/end.jpg");
//
//    Sprite spritego;
//    spritego.setTexture(gameover);
//    /*spritego.setOrigin(spriteg1.getPosition().x, 300);
//    spritego.setPosition(0, 300);*/
//    spritego.setScale(2, 2);
//
//    Music musicgo;//создаем объект музыки
//    musicgo.openFromFile("C:/Users/Bunakov Egor/Desktop/game_over_theme.wav");//загружаем файл
//    //END
//
//    Texture end;
//    end.loadFromFile("C:/Users/Bunakov Egor/Desktop/52.png");
//    Sprite spriteend;
//    spriteend.setTexture(end);
//    spriteend.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteend.setScale(25, 25);
//    spriteend.setPosition(-300, -300);
//
//
//    //fire f(sprite.getPosition().x, sprite.getPosition().y);
//    //f.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//    //fire fireboll(sprite.getPosition().x, sprite.getPosition().y);
//    float animationSpeedall = 6;
//    float animationStateall = 0;
//
//    win.setFramerateLimit(60);
//
//
//    RectangleShape rectangle1(Vector2f(200.f, 300.f));
//    rectangle1.setFillColor(Color(175, 180, 240));
//    rectangle1.setPosition(0, 500);
//
//    //RectangleShape rectangle2(Vector2f(180.f, 200.f));
//    //rectangle2.setFillColor(Color(17, 180, 240));
//    //rectangle2.setPosition(200, 600);
//
//    CircleShape circle;
//    circle.setRadius(50);
//    circle.setPosition(50, 450);
//    circle.setFillColor(Color(250, 0, 0));
//    //circle.setOrigin(50, 50);
//
//    Clock clc;
//    int c = 0;
//    int circle_speed = 100;
//    double dy = 0;
//    bool drag = false;
//    bool onGround = true;
//    Vector2i click_offs;
//
//    HealthOfGoblin gstate;
//
//    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//
//    while (win.isOpen())
//    {
//        if (Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//            goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//        }
//        //goblin.getSprite().move(100, -dy);
//        goblin.getSprite().move(0, -dy);
//        //spriteg1.move(0,dy);
//        block3.intergoblin(goblin, onGround);
//        block2.intergoblin(goblin,onGround);
//        block1.intergoblin(goblin,onGround);
//
//        if (Keyboard::isKeyPressed(Keyboard::Key::A) && Keyboard::isKeyPressed(Keyboard::Key::D)) {
//            goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//        }
//
//        //block2.intergoblin(spriteg1);
//        Event event;
//        while (win.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                win.close();
//        }
//        if (gstate.GetNumberOfLives() > 0 and goblin.getSprite().getPosition().y <= 1000) {
//            auto elapsed = clc.restart().asMilliseconds();
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                goblin.getSprite().move(circle_speed * elapsed / 500, 0);
//                dirg1 = 1;
//                if (goblin.getSprite().getPosition().x >= 500)
//                    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//            }
//
//            if (goblin.getSprite().getPosition().y < 0)
//            {
//                goblin.getSprite().setPosition(goblin.getSprite().getPosition().x, 0);
//            }
//
//            if (goblin.getSprite().getPosition().x < 0)
//            {
//                goblin.getSprite().setPosition(0, goblin.getSprite().getPosition().y);
//            }
//
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
//                goblin.getSprite().move(-circle_speed * elapsed / 500, 0);
//                dirg1 = 0;
//                if (goblin.getSprite().getPosition().x >= 500)
//                    getGoblinCoordinatesForView(goblin.getSprite().getPosition());
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
//                onGround = false;
//                dy = 5;
//                c = 0;
//            }
//            
//            /*if (Keyboard::isKeyPressed(Keyboard::Key::F)) {
//                circle.move(10, 0);
//            }
//            if (event.type == Event::KeyPressed) {
//                if (event.key.code == Keyboard::Key::U) {
//                    circle.setFillColor(Color::Magenta);
//
//                }
//            }*/
//            
//            if (onGround == false) {
//                //spriteg1.move(0, -dy);
//                dy -= circle_speed * 0.005;
//            }
//            //if (goblin.getSprite().getPosition().y >= 550 && goblin.getSprite().getPosition().x < block1.getSprite().getPosition().x + block1.getxValue())  {
//            //    //spriteg1.move(0, 0);
//            //    dy = 0;
//            //}
//
//            //эффект мяча
//            /*if (onGround == false and spriteg1.getPosition().y > block1.getSprite().getPosition().y - 50 and spriteg1.getPosition().x < block2.getSprite().getPosition().x) {
//                c++;
//                dy = -dy - 0.5 * c;
//            }
//
//            if (onGround == false and spriteg1.getPosition().y > block1.getSprite().getPosition().y + 50 and spriteg1.getPosition().x > block2.getSprite().getPosition().x + 50) {
//                c++;
//                dy = -dy - 0.5 * c;
//            }*/
//            //goblin.flygoblin(block1, block2, onGround, dy);
//            // остановка при малой скорости у земли (1)
//            block1.intergoblinjump(goblin,onGround,dy);
//            block2.intergoblinjump(goblin, onGround, dy);
//            block3.intergoblinjump(goblin, onGround, dy);
//
//            /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block1.getSprite().getPosition().x + block1.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block1.getSprite().getPosition().x) {
//                onGround = true;
//                dy = 0;
//                cout << "111" << endl;
//            }
//            else
//                onGround = false;*/
//            // остановка при малой скорости у земли (2)
//            /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + goblin.getHeight() and goblin.getSprite().getPosition().x > block1.getSprite().getPosition().x + block1.getxValue()  + goblin.getWihgt()) {
//                onGround = true;
//                dy = 0;
//                cout << "2222" << endl;
//            }*/
//            /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block2.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block2.getSprite().getPosition().x + block2.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block2.getSprite().getPosition().x) {
//                onGround = true; 
//                dy = 0;
//                cout << "2222" << endl;
//            }
//            else
//                onGround = false;*/
//
//            /*if (dy < 0.005 and goblin.getSprite().getPosition().y > block3.getSprite().getPosition().y - goblin.getHeight() and goblin.getSprite().getPosition().x < block3.getSprite().getPosition().x + block3.getxValue() && goblin.getSprite().getPosition().x + goblin.getWihgt() > block3.getSprite().getPosition().x) {
//                onGround = true;
//                dy = 0;
//                cout << "3333" << endl;
//            }
//            else
//                onGround = false;*/
//            /*if (goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + goblin.getHeight()) {
//                onGround = true;
//                dy = 0;
//            }*/
//
//            //if ((goblin.getSprite().getPosition().x > block2.getSprite().getPosition().x + 50) && dy == 0) {
//            //    //circle.move(0, 5);
//            //    onGround = false;
//
//            //}
//            //if ((goblin.getSprite().getPosition().x == block2.getSprite().getPosition().x + 50) && (goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y - 50)) {
//            //    // onGround = true;
//            //    goblin.getSprite().setPosition(block2.getSprite().getPosition().x + 50, goblin.getSprite().getPosition().y);
//            //    if (goblin.getSprite().getPosition().x <= block2.getSprite().getPosition().x + 50 && goblin.getSprite().getPosition().y > block1.getSprite().getPosition().y + 40) {
//            //        onGround = true;
//            //        dy = 0;
//            //    }
//            //}
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
//                sprite.move(circle_speed * elapsed / 650, 0);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x + circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//                dir = 0;
//                //getDragonCoordinatesForView(sprite.getPosition());
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
//                sprite.move(-circle_speed * elapsed / 650, 0);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x - circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//                dir = 1;
//                //getDragonCoordinatesForView(sprite.getPosition());
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
//                sprite.move(0, circle_speed * elapsed / 650);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y + circle_speed * elapsed / 650);
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
//                sprite.move(0, -circle_speed * elapsed / 650);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y - circle_speed * elapsed / 650);
//            }
//
//            /*if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
//                fire fireboll;
//                fireboll.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//                fireboll.spritef.move(circle_speed * elapsed / 1000, circle_speed * elapsed / 1000);
//                win.draw(fireboll.getSprite());
//            }*/
//
//            auto elapsed2 = clcDrive.restart().asSeconds();
//            if (Keyboard::isKeyPressed(Keyboard::Key::A) || Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                animationState += elapsed2 * animationSpeed;
//            }
//            if (animationState >= 4) {
//                animationState -= 4;
//            }
//
//
//            auto elapsedall = clcAll.restart().asSeconds();
//            animationStateall += elapsedall * animationSpeedall;
//            if (animationStateall >= 4) {
//                animationStateall -= 4;
//            }
//            spritecosm.setPosition(0, 0);
//            sprite.setTextureRect(IntRect(floor(animationStateall) * 140, dir * 140, 140, 140));
//            goblin.getSprite().setTextureRect(IntRect(floor(animationState) * 89, dirg1 * 89, 89, 89));
//            //f.spritef.setTextureRect(IntRect(floor(animationStateall) * 72, 0, 72, 72));
//            //fireboll.spritef.setTextureRect(IntRect(floor(animationStateall) * 72, dir * 72, 72, 72));
//            for (int i = 0; i < bolls.size(); i++) {
//                bolls[i].spritef.setTextureRect(IntRect(floor(animationStateall) * 72, bolls[i].dirb * 72, 72, 72));
//            }
//
//            if (sprite.getPosition().x <= spritecosm.getPosition().x) {
//                sprite.setPosition(spritecosm.getPosition().x, sprite.getPosition().y);
//            }
//
//            //полет пули при нажатии конпки 
//            /*if (Keyboard::isKeyPressed(Keyboard::Key::LShift)) {
//                firebollpush += 1;
//                bolls[firebollpush].spritef.setPosition(sprite.getPosition().x + 50, sprite.getPosition().y + 65);
//                bolls[firebollpush].dirb = dir;
//            }*/
//            fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
//            if (Keyboard::isKeyPressed(Keyboard::Key::RShift)) {
//
//                firebollpush += 1;
//                //this_thread::sleep_for(chrono::milliseconds(50));
//                //cout << firebollpush;
//                bolls.push_back(b);
//                bolls[bolls.size() - 1].dirb = dir;
//
//
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Q)) {
//                viewForGoblin.setViewport(sf::FloatRect(0, 0, 0.5f, 1));
//                //viewForDragon.setViewport(sf::FloatRect(0.5f, 0, 0.5f, 1));
//            }
//
//
//
//
//            win.clear();
//            win.draw(spritecosm);
//
//            if (firebollpush >= 1) {
//                for (int i = 0; i < bolls.size(); i++) {
//                    if (bolls[i].dirb == 0) {
//                        bolls[i].spritef.move(5, 5);
//                    }
//                    if (bolls[i].dirb == 1) {
//                        bolls[i].spritef.move(-5, 5);
//                    }
//
//                    win.draw(bolls[i].getSprite());
//
//                }
//
//
//            }
//
//
//            for (int i = 0; i < bolls.size(); i++) {
//                auto distfire = (goblin.getSprite().getPosition().x - bolls[i].spritef.getPosition().x) * (goblin.getSprite().getPosition().x - bolls[i].spritef.getPosition().x) + (goblin.getSprite().getPosition().y - bolls[i].spritef.getPosition().y) * (goblin.getSprite().getPosition().y - bolls[i].spritef.getPosition().y);
//                if (distfire < 2500) {
//
//                    gstate.BurnGoblin();
//                    gstate.IncreaseDurationOfBurning();
//                    bolls[i].spritef.setPosition(goblin.getSprite().getPosition().x, goblin.getSprite().getPosition().y);
//
//                }
//            }
//
//            if (gstate.GetDurationOfBurning() > 250 && gstate.IsGoblinBurn()) {
//                gstate.DecreaseNumberOfLives();
//                gstate.KillDurationOfBurning();
//                gstate.ExtinguishGoblin();
//                for (int i = 0; i < bolls.size(); i++) {
//                    if (bolls[i].spritef.getPosition() == goblin.getSprite().getPosition())
//                        bolls[i].spritef.setPosition(1000, 1000);
//                }
//            }
//
//
//            
//            win.draw(sprite);
//            win.draw(block2.getSprite());
//            win.draw(block3.getSprite());
//            win.draw(goblin.getSprite());
//            win.draw(block1.getSprite());
//            win.draw(bll.getSprite());
//
//            for (int i = 0; i < gstate.GetNumberOfLives(); i++)
//            {
//                if (goblin.getSprite().getPosition().x >= 500)
//                {
//                    heart PixelHeart(440 + goblin.getSprite().getPosition().x - 45 * i, 5);
//                    win.draw(PixelHeart.getSprite());
//                }
//                else
//                {
//                    heart PixelHeart(939 - 45 * i, 5);
//                    win.draw(PixelHeart.getSprite());
//                }
//            }
//            win.setView(viewForGoblin);
//            win.display();
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
//                break;
//            }
//        }
//
//        else
//        {
//            music.pause();
//            musicgo.play();
//            spritego.setPosition(goblin.getSprite().getPosition().x - 120, 300);
//            while (true)
//            {
//                win.clear();
//                win.draw(spritecosm);
//                win.draw(spritego);
//
//                if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
//                    break;
//                }
//                win.display();
//
//            }
//            break;
//        }
//
//    }
//    
//    return 0;
//
//}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//#include<SFML/Graphics.hpp>
//#include<SFML/Audio.hpp>
//#include<iostream>
//#include<cmath>
//#include<thread>
//#include<chrono>
////#include<D:\MyProjects\ConsoleApplication9\ConsoleApplication9\view.h>
//
//using namespace sf;
//using namespace std;
//int dirg1 = 0;
//int n = 1;
//int firebollpush = 0;
////все для огня
//class fire {
//private:
//    Texture Fire;
//public:
//    //int i = 0;
//    int dirb = 0;
//    Sprite spritef;
//
//    fire() {
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//    }
//
//    Sprite getSprite() {
//        return this->spritef;
//    }
//    fire(float x, float y) {
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//
//        spritef.setPosition(x, y);
//    }
//    fire(float x, float y, int dirb) {
//        this->dirb = dirb;
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//
//        spritef.setPosition(x, y);
//    }
//
//};
//
//class block {
//private:
//        int xValue ;
//        int yValue;
//        float xScale;
//        float yScale;
//    public:
//        Texture Block;
//        Sprite spriteb;
//        
//       /* block() {
//            spriteb.setTexture(Block);
//            this->xValue = 0;
//            this->yValue = 0;
//        };*/
//       /* block(int xValue, int yValue, int setx, int sety) {
//            spriteb.setTexture(Block);
//            this->xValue = xValue;
//            this->yValue = yValue;
//            this->spriteb.setPosition(setx, sety);
//        }*/
//       /* block(int setx, int sety) {
//            
//            spriteb.setTexture(Block);
//            this->spriteb.setPosition(setx, sety);
//            this->xValue = 0;
//            this->yValue = 0;
//        }*/
//        block(int setx, int sety,int number) {
//            if(number == 2)
//                this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block2.png");
//            if(number == 1)
//                this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block1.png");
//            spriteb.setTexture(Block);
//            this->spriteb.setPosition(setx, sety);
//            this->xValue = 0;
//            this->yValue = 0;
//            //spriteb.setScale(5, 5);
//        }
//        block(int setx, int sety, int number, float xScale, float yScale, float xValue,float yValue) {
//            this->xScale = xScale;
//            this->yScale = yScale;
//            this->xValue = xValue;
//            this->yValue = yValue;
//            if (number == 2)
//                this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block2.png");
//            if (number == 1)
//                this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block1.png");
//            
//            spriteb.setTexture(Block);
//            spriteb.setScale(xScale, yScale);
//            this->spriteb.setPosition(setx, sety);
//            //spriteb.setTextureRect(IntRect(0,0,xValue,yValue));
//            
//            //spriteb.setScale(5, 5);
//        }
//        //block(int setx, int sety, int number,float xScale,float yScale) {
//        //    if (number == 2)
//        //        this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block2.png");
//        //    if (number == 1)
//        //        this->Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block1.png");
//        //    spriteb.setTexture(Block);
//        //    spriteb.setScale(xScale, yScale);
//        //    this->spriteb.setPosition(setx, sety);
//        //    this->xValue = 0;
//        //    this->yValue = 0;
//        //    //spriteb.setScale(5, 5);
//        //}
//        Texture getTexture() {
//            return this->Block;
//        }
//        Sprite getSprite() {
//            return this->spriteb;
//        }
//        int getxValue() {
//            return xValue;
//        }
//        int getyValue() {
//            return yValue;
//        }
//        float getxScale() {
//            return this->xScale;
//        }
//        float getyScale() {
//            return this->yScale;
//        }
//        //void interfire(Sprite a) {
//        //    if (a.getPosition().y >=this->spriteb.getPosition().y && a.getPosition().y <= this->spriteb.getPosition().y + 100/*this->getyValue()*/ && a.getPosition().x <= this->getSprite().getPosition().x + this->getxValue()) {
//        //        a.setPosition(this->getSprite().getPosition().x + 100, a.getPosition().y);
//        //    }
//        //}
//        void intergoblin(Sprite& a) {
//            if (a.getPosition().y + 45> this->spriteb.getPosition().y && a.getPosition().y < this->spriteb.getPosition().y + this->getyValue()* this->getyScale() /*this->getTexture().getSize() this->getyValue()*/ && this->getSprite().getPosition().x + this->getxValue()*1.5+30 >= a.getPosition().x && this->getSprite().getPosition().x <= a.getPosition().x + 50) {
//                //a.setPosition(this->getSprite().getPosition().x + 500, a.getPosition().y); 
//                if(dirg1 == 0)
//                    a.setPosition(this->getSprite().getPosition().x + this->getxValue() * 1.5 + 30, a.getPosition().y);
//                if(dirg1 == 1)
//                    a.setPosition(this->getSprite().getPosition().x - 50, a.getPosition().y);
//                cout << "help" << endl;
//                
//            }
//        }
//    
//    };
//
//class HealthOfGoblin {
//private:
//    int NumberOfLives = 3;
//    bool IsBurn = false;
//    long int DurationOfBurning = 0;
//public:
//    void BurnGoblin() {
//        this->IsBurn = true;
//    }
//    void ExtinguishGoblin() {
//        this->IsBurn = false;
//    }
//    bool IsGoblinBurn() const {
//        return this->IsBurn;
//    }
//    long int GetDurationOfBurning() const {
//        return this->DurationOfBurning;
//    }
//    void KillDurationOfBurning() {
//        this->DurationOfBurning = 0;
//    }
//    void IncreaseDurationOfBurning() {
//        this->DurationOfBurning++;
//    }
//    int GetNumberOfLives() const {
//        return this->NumberOfLives;
//    }
//    void DecreaseNumberOfLives() {
//        this->NumberOfLives--;
//    }
//};
//
//class heart {
//private:
//    Texture Heart;
//    Sprite spriteh;
//public:
//    heart() {
//        Heart.loadFromFile("C:/Users/Bunakov Egor/Desktop/52.png");
//        spriteh.setTexture(Heart);
//        spriteh.setScale(1, 1);
//    }
//    Sprite getSprite() {
//        return this->spriteh;
//    }
//    heart(float x, float y) {
//        Heart.loadFromFile("C:/Users/Bunakov Egor/Desktop/52.png");
//        spriteh.setTexture(Heart);
//        spriteh.setScale(1, 1);
//        spriteh.setPosition(x, y);
//    }
//};
//
//sf::View viewForGoblin;
//////sf::View viewForDragon;
////
//View getGoblinCoordinatesForView(Vector2f vec) {
//    viewForGoblin.setCenter(vec.x, 500);
//    return viewForGoblin;
//}
//
////View getDragonCoordinatesForView(Vector2f vec) {
////    viewForDragon.setCenter(vec.x+100, vec.y);
////    return viewForDragon;
////}
//
//int main()
//{
//    cout << "hello" << endl;
//    block bll(500,100,0);
//
//    block bll1(10, 0, 1);
//    
//    //bll.Block.loadFromFile("C:/Users/Bunakov Egor/Desktop/block.png");
//    vector<fire> bolls;
//    //bolls.resize(100);
//    RenderWindow win(VideoMode(1000, 1000), "SFML works!", Style::None);
//    //viewForDragon.reset(sf::FloatRect(0, 0, 500,1000));
//    viewForGoblin.reset(sf::FloatRect(0, 0, 1000, 1000));
//
//    //все для дракона
//    Texture tex;
//    tex.loadFromFile("C:/Users/Bunakov Egor/Desktop/DraconProFile.png");
//
//    Sprite sprite;
//    sprite.setTexture(tex);
//    sprite.setTextureRect(IntRect(0, 0, 140, 140));
//    sprite.setScale(1.25, 1.25);
//
//    float animationState = 0;
//    float animationSpeed = 6;
//    int dir = 0;
//    Clock clcDrive;
//    Clock clcAll;
//
//    //все для аудиосопровождения
//
//    Music music;//создаем объект музыки
//    music.openFromFile("C:/Users/Bunakov Egor/Desktop/main_theme.wav");//загружаем файл
//    music.play();
//
//    //все для бэкграунда
//    Texture cosmos;
//    cosmos.loadFromFile("C:/Users/Bunakov Egor/Desktop/background.png");
//
//    Sprite spritecosm;
//    spritecosm.setTexture(cosmos);
//    spritecosm.setTextureRect(IntRect(0, 0, 1000, 1000));
//    spritecosm.setScale(1.7, 2.2);
//
//    
//    
//    //все для блока 1
//    //block block1(0, 500, 1, 3.125, 4.9,100,300);  
//    block block1(0, 500, 1, 3.125, 4.9,100,300);
//    
//
//    //все для блока 2
//    //block block2(200, 600, 2, 3.2, 3.2,180,200);
//    block block2(200, 600, 2, 3.2, 3.2,180,200);
//    
//    
//
//    //все для гоблина 1
//    Texture goblin1;
//    goblin1.loadFromFile("C:/Users/Bunakov Egor/Desktop/goblinpro1.png");
//    Sprite spriteg1;
//    spriteg1.setTexture(goblin1);
//    spriteg1.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteg1.setScale(0.75, 0.75);
//    spriteg1.setPosition(50, 444);
//    
//    
//    //все для гаме-овера
//
//    Texture gameover;
//    gameover.loadFromFile("C:/Users/Bunakov Egor/Desktop/end.jpg");
//
//    Sprite spritego;
//    spritego.setTexture(gameover);
//    /*spritego.setOrigin(spriteg1.getPosition().x, 300);
//    spritego.setPosition(0, 300);*/
//    spritego.setScale(2, 2);
//
//    Music musicgo;//создаем объект музыки
//    musicgo.openFromFile("C:/Users/Bunakov Egor/Desktop/game_over_theme.wav");//загружаем файл
//    //END
//
//    Texture end;
//    end.loadFromFile("C:/Users/Bunakov Egor/Desktop/52.png");
//    Sprite spriteend;
//    spriteend.setTexture(end);
//    spriteend.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteend.setScale(25, 25);
//    spriteend.setPosition(-300, -300);
//
//
//    //fire f(sprite.getPosition().x, sprite.getPosition().y);
//    //f.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//    //fire fireboll(sprite.getPosition().x, sprite.getPosition().y);
//    float animationSpeedall = 6;
//    float animationStateall = 0;
//
//    win.setFramerateLimit(60);
//
//
//    RectangleShape rectangle1(Vector2f(200.f, 300.f));
//    rectangle1.setFillColor(Color(175, 180, 240));
//    rectangle1.setPosition(0, 500);
//
//    //RectangleShape rectangle2(Vector2f(180.f, 200.f));
//    //rectangle2.setFillColor(Color(17, 180, 240));
//    //rectangle2.setPosition(200, 600);
//
//    CircleShape circle;
//    circle.setRadius(50);
//    circle.setPosition(50, 450);
//    circle.setFillColor(Color(250, 0, 0));
//    //circle.setOrigin(50, 50);
//
//    Clock clc;
//    int c = 0;
//    int circle_speed = 100;
//    double dy = 0;
//    bool drag = false;
//    bool onGround = true;
//    Vector2i click_offs;
//
//    HealthOfGoblin gstate;
//
//    getGoblinCoordinatesForView(spriteg1.getPosition());
//
//    while (win.isOpen())
//    {
//        block1.intergoblin(spriteg1);
//        //block2.intergoblin(spriteg1);
//        Event event;
//        while (win.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                win.close();
//        }
//        if (gstate.GetNumberOfLives() > 0) {
//            auto elapsed = clc.restart().asMilliseconds();
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                spriteg1.move(circle_speed * elapsed / 500, 0);
//                dirg1 = 1;
//                getGoblinCoordinatesForView(spriteg1.getPosition());
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
//                spriteg1.move(-circle_speed * elapsed / 500, 0);
//                dirg1 = 0;
//                getGoblinCoordinatesForView(spriteg1.getPosition());
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
//                onGround = false;
//                dy = 5;
//                c = 0;
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::F)) {
//                circle.move(10, 0);
//            }
//            if (event.type == Event::KeyPressed) {
//                if (event.key.code == Keyboard::Key::U) {
//                    circle.setFillColor(Color::Magenta);
//
//                }
//            }
//
//            if (onGround == false) {
//                spriteg1.move(0, -dy);
//                dy -= circle_speed * 0.005;
//            }
//            if (spriteg1.getPosition().y > 600) {
//                spriteg1.move(0, 0);
//            }
//
//            if (onGround == false and spriteg1.getPosition().y > block1.getSprite().getPosition().y - 50 and spriteg1.getPosition().x < block2.getSprite().getPosition().x) {
//                c++;
//                dy = -dy - 0.5 * c;
//            }
//
//            if (onGround == false and spriteg1.getPosition().y > block1.getSprite().getPosition().y + 50 and spriteg1.getPosition().x > block2.getSprite().getPosition().x + 50) {
//                c++;
//                dy = -dy - 0.5 * c;
//            }
//
//            // остановка при малой скорости у земли (1)
//            if (dy < 0.5 and spriteg1.getPosition().y < block1.getSprite().getPosition().y - 50 and spriteg1.getPosition().x < block2.getSprite().getPosition().x) {
//                onGround = true;
//                dy = 0;
//            }
//            // остановка при малой скорости у земли (2)
//            if (dy < 0.5 and spriteg1.getPosition().y < block1.getSprite().getPosition().y + 50 and spriteg1.getPosition().x < block2.getSprite().getPosition().x + 50) {
//                onGround = true;
//                dy = 0;
//            }
//
//            if ((spriteg1.getPosition().x > block2.getSprite().getPosition().x + 50) && dy == 0) {
//                //circle.move(0, 5);
//                onGround = false;
//
//            }
//            if ((spriteg1.getPosition().x == block2.getSprite().getPosition().x + 50) && (spriteg1.getPosition().y > block1.getSprite().getPosition().y - 50)) {
//                // onGround = true;
//                spriteg1.setPosition(block2.getSprite().getPosition().x + 50, spriteg1.getPosition().y);
//                if (spriteg1.getPosition().x <= block2.getSprite().getPosition().x + 50 && spriteg1.getPosition().y > block1.getSprite().getPosition().y + 40) {
//                    onGround = true;
//                    dy = 0;
//                }
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
//                sprite.move(circle_speed * elapsed / 650, 0);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x + circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//                dir = 0;
//                //getDragonCoordinatesForView(sprite.getPosition());
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
//                sprite.move(-circle_speed * elapsed / 650, 0);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x - circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//                dir = 1;
//                //getDragonCoordinatesForView(sprite.getPosition());
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
//                sprite.move(0, circle_speed * elapsed / 650);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y + circle_speed * elapsed / 650);
//            }
//            if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
//                sprite.move(0, -circle_speed * elapsed / 650);
//                //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y - circle_speed * elapsed / 650);
//            }
//
//            /*if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
//                fire fireboll;
//                fireboll.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//                fireboll.spritef.move(circle_speed * elapsed / 1000, circle_speed * elapsed / 1000);
//                win.draw(fireboll.getSprite());
//            }*/
//
//            auto elapsed2 = clcDrive.restart().asSeconds();
//            if (Keyboard::isKeyPressed(Keyboard::Key::A) || Keyboard::isKeyPressed(Keyboard::Key::D)) {
//                animationState += elapsed2 * animationSpeed;
//            }
//            if (animationState >= 4) {
//                animationState -= 4;
//            }
//
//
//            auto elapsedall = clcAll.restart().asSeconds();
//            animationStateall += elapsedall * animationSpeedall;
//            if (animationStateall >= 4) {
//                animationStateall -= 4;
//            }
//            spritecosm.setPosition(0, 0);
//            sprite.setTextureRect(IntRect(floor(animationStateall) * 140, dir * 140, 140, 140));
//            spriteg1.setTextureRect(IntRect(floor(animationState) * 85, dirg1 * 85, 85, 85));
//            //f.spritef.setTextureRect(IntRect(floor(animationStateall) * 72, 0, 72, 72));
//            //fireboll.spritef.setTextureRect(IntRect(floor(animationStateall) * 72, dir * 72, 72, 72));
//            for (int i = 0; i < bolls.size(); i++) {
//                bolls[i].spritef.setTextureRect(IntRect(floor(animationStateall) * 72, bolls[i].dirb * 72, 72, 72));
//            }
//
//            if (sprite.getPosition().x <= spritecosm.getPosition().x) {
//                sprite.setPosition(spritecosm.getPosition().x, sprite.getPosition().y);
//            }
//
//            //полет пули при нажатии конпки 
//            /*if (Keyboard::isKeyPressed(Keyboard::Key::LShift)) {
//                firebollpush += 1;
//                bolls[firebollpush].spritef.setPosition(sprite.getPosition().x + 50, sprite.getPosition().y + 65);
//                bolls[firebollpush].dirb = dir;
//            }*/
//            fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
//            if (Keyboard::isKeyPressed(Keyboard::Key::RShift)) {
//
//                firebollpush += 1;
//                //this_thread::sleep_for(chrono::milliseconds(50));
//                //cout << firebollpush;
//                bolls.push_back(b);
//                bolls[bolls.size() - 1].dirb = dir;
//
//
//            }
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Q)) {
//                viewForGoblin.setViewport(sf::FloatRect(0, 0, 0.5f, 1));
//                //viewForDragon.setViewport(sf::FloatRect(0.5f, 0, 0.5f, 1));
//            }
//            
//            
//            
//
//            win.clear();
//            win.draw(spritecosm);
//
//            if (firebollpush >= 1) {
//                for (int i = 0; i < bolls.size(); i++) {
//                    if (bolls[i].dirb == 0) {
//                        bolls[i].spritef.move(5, 5);
//                    }
//                    if (bolls[i].dirb == 1) {
//                        bolls[i].spritef.move(-5, 5);
//                    }
//
//                    win.draw(bolls[i].getSprite());
//
//                }
//
//
//            }
//
//
//            for (int i = 0; i < bolls.size(); i++) {
//                auto distfire = (spriteg1.getPosition().x - bolls[i].spritef.getPosition().x) * (spriteg1.getPosition().x - bolls[i].spritef.getPosition().x) + (spriteg1.getPosition().y - bolls[i].spritef.getPosition().y) * (spriteg1.getPosition().y - bolls[i].spritef.getPosition().y);
//                if (distfire < 2500) {
//
//                    gstate.BurnGoblin();
//                    gstate.IncreaseDurationOfBurning();
//                    bolls[i].spritef.setPosition(spriteg1.getPosition().x, spriteg1.getPosition().y);
//
//                }
//            }
//
//            if (gstate.GetDurationOfBurning() > 250 && gstate.IsGoblinBurn()) {
//                gstate.DecreaseNumberOfLives();
//                gstate.KillDurationOfBurning();
//                gstate.ExtinguishGoblin();
//                for (int i = 0; i < bolls.size(); i++) {
//                    if (bolls[i].spritef.getPosition() == spriteg1.getPosition())
//                        bolls[i].spritef.setPosition(1000, 1000);
//                }
//            }
//
//            
//
//            win.draw(sprite);
//            win.draw(block2.getSprite());
//            win.draw(spriteg1);
//            win.draw(block1.getSprite());
//            win.draw(bll.getSprite());
//            
//            for (int i = 0; i < gstate.GetNumberOfLives(); i++)
//            {
//                heart PixelHeart(440 + spriteg1.getPosition().x - 45 * i, 5);
//                win.draw(PixelHeart.getSprite());
//            }
//            win.setView(viewForGoblin);
//            win.display();
//
//            if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
//                break;
//            }
//        }
//
//        else
//        {
//            music.pause();
//            musicgo.play();
//            spritego.setPosition(spriteg1.getPosition().x - 120, 300);
//            while (true)
//            {
//                win.clear();
//                win.draw(spritecosm);
//                win.draw(spritego);
//                
//                if (Keyboard::isKeyPressed(Keyboard::Key::Escape)) {
//                    break;
//                }
//                win.display();
//
//            }
//            break;
//        }
//       
//    }
//    return 0;
//}
//#include <SFML/Graphics.hpp>
//#include<SFML/Audio.hpp>
//#include<iostream>
//#include<cmath>
//#include <thread>
//#include <chrono>
//using namespace sf;
//using namespace std;
//int n = 1;
//int firebollpush = 0;
////все для огня
//class fire {
//private:
//    Texture Fire;
//public:
//    //int i = 0;
//    int dirb = 0;
//    Sprite spritef;
//
//    fire() {
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//    }
//
//    Sprite getSprite() {
//        return this->spritef;
//    }
//    fire(float x,float y) {
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//       
//        spritef.setPosition(x , y );
//    }
//    fire(float x, float y, int dirb) {
//        this->dirb = dirb;
//        Fire.loadFromFile("C:/Users/Bunakov Egor/Desktop/firepro.png");
//        spritef.setTexture(Fire);
//        spritef.setTextureRect(IntRect(0, 0, 72, 72));
//
//        spritef.setPosition(x , y);
//    }
//    
//};
//class block {
//private:
//    Texture Block;
//    Sprite spriteb;
//    int xValue;
//    int yValue;
//
//public:
//    
//    block() {};
//    block(int xValue, int yValue, int setx, int sety) {
//        this->xValue = xValue;
//        this->yValue = yValue;
//        this->spriteb.setPosition(setx, sety);
//    }
//    block(int setx, int sety) {
//        this->spriteb.setPosition(setx, sety);
//    }
//
//    Sprite getsprite() {
//        return this->spriteb;
//    }
//    int getxValue() {
//        return xValue;
//    }
//    int getyValue() {
//        return yValue;
//    }
//    void interfire(Sprite a) {
//        if (a.getPosition().x <= this->getsprite().getPosition().x + this->getxValue()) {
//            a.setPosition(this->getsprite().getPosition().x + this->getxValue(), a.getPosition().y);
//        }
//    }
//
//};
//
//int main()
//{
//    /*Music music;
//    music.openFromFile("Music2.wav");
//    music.play();*/
//
//    vector<fire> bolls;
//    //bolls.resize(100);
//    RenderWindow win(VideoMode(1000, 1000), "SFML works!", Style::None);
//    //все для дракона
//    Texture tex;
//    tex.loadFromFile("C:/Users/Bunakov Egor/Desktop/DraconProFile.png");
// 
//    Sprite sprite;
//    sprite.setTexture(tex);
//    sprite.setTextureRect(IntRect(0, 0, 140, 140));
//    sprite.setScale(1.25, 1.25);
//
//    float animationState = 0;
//    float animationSpeed = 6;
//    int dir = 0;
//    Clock clcDrive;
//    Clock clcAll;
//
//
//    //все для бэкграунда
//    Texture cosmos;
//    cosmos.loadFromFile("C:/Users/Bunakov Egor/Desktop/background.png");
//
//    Sprite spritecosm;
//    spritecosm.setTexture(cosmos);
//    spritecosm.setTextureRect(IntRect(0, 0, 1000, 1000));
//    spritecosm.setScale(1.7, 2.2);
//
//    //все для блока 1
//    Texture block1;
//    block1.loadFromFile("C:/Users/Bunakov Egor/Desktop/block1.png");
//
//    Sprite spriteb1;
//    spriteb1.setTexture(block1);
//
//    spriteb1.setPosition(0, 500);
//    //spriteb1.setScale(0.8, 0.8);
//    spriteb1.setScale(3.125, 4.9);
//
//    //все для блока 2
//    Texture block2;
//    block2.loadFromFile("C:/Users/Bunakov Egor/Desktop/block.png");
//
//    Sprite spriteb2;
//    spriteb2.setTexture(block2);
//
//    spriteb2.setPosition(200, 600);
//    spriteb2.setScale(3.2,3.2);
//
//
//    //все для гоблина 1
//    Texture goblin1;
//    goblin1.loadFromFile("C:/Users/Bunakov Egor/Desktop/goblinpro1.png");
//    Sprite spriteg1;
//    spriteg1.setTexture(goblin1);
//    spriteg1.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteg1.setScale(0.75, 0.75);
//    spriteg1.setPosition(50, 444);
//    int dirg1 = 0;
//
//    //END
//
//    Texture end;
//    end.loadFromFile("C:/Users/Bunakov Egor/Desktop/52.png");
//    Sprite spriteend;
//    spriteend.setTexture(end);
//    spriteend.setTextureRect(IntRect(0, 0, 85, 85));
//    spriteend.setScale(25, 25);
//    spriteend.setPosition(-300, -300);
//
//   
//    //fire f(sprite.getPosition().x, sprite.getPosition().y);
//    //f.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//    //fire fireboll(sprite.getPosition().x, sprite.getPosition().y);
//    float animationSpeedall = 6;
//    float animationStateall = 0;
//
//    win.setFramerateLimit(60);
//
//
//    RectangleShape rectangle1(Vector2f(200.f, 300.f));
//    rectangle1.setFillColor(Color(175, 180, 240));
//    rectangle1.setPosition(0, 500);
//
//    //RectangleShape rectangle2(Vector2f(180.f, 200.f));
//    //rectangle2.setFillColor(Color(17, 180, 240));
//    //rectangle2.setPosition(200, 600);
//
//    CircleShape circle;
//    circle.setRadius(50);
//    circle.setPosition(50, 450);
//    circle.setFillColor(Color(250, 0, 0));
//    //circle.setOrigin(50, 50);
//
//    Clock clc;
//    int c = 0;
//    int circle_speed = 100;
//    double dy = 0;
//    bool drag = false;
//    bool onGround = true;
//    Vector2i click_offs;
//
//    
//    while (win.isOpen())
//
//    {
//
//        Event event;
//        while (win.pollEvent(event))
//        {
//            if (event.type == sf::Event::Closed)
//                win.close();
//        }
//
//        auto elapsed = clc.restart().asMilliseconds();
//
//        if (Keyboard::isKeyPressed(Keyboard::Key::D)) {
//            spriteg1.move(circle_speed * elapsed / 500, 0);
//            dirg1 = 1;
//        }
//
//        if (Keyboard::isKeyPressed(Keyboard::Key::A)) {
//            spriteg1.move(-circle_speed * elapsed / 500, 0);
//            dirg1 = 0;
//        }
//        if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
//            onGround = false;
//            dy = 5;
//            c = 0;
//        }
//        if (Keyboard::isKeyPressed(Keyboard::Key::F)) {
//            circle.move(10, 0);
//        }
//        if (event.type == Event::KeyPressed) {
//            if (event.key.code == Keyboard::Key::U) {
//                circle.setFillColor(Color::Magenta);
//
//            }
//        }
//
//        if (onGround == false) {
//            spriteg1.move(0, -dy);
//            dy -= circle_speed * 0.005;
//        }
//        if (spriteg1.getPosition().y > 600) {
//            spriteg1.move(0, 0);
//        }
//
//        if (onGround == false and spriteg1.getPosition().y > spriteb1.getPosition().y - 50 and spriteg1.getPosition().x < spriteb2.getPosition().x) {
//            c++;
//            dy = -dy - 0.5 * c;
//        }
//        //nnnenfsjnn
//
//        if (onGround == false and spriteg1.getPosition().y > spriteb1.getPosition().y + 50 and spriteg1.getPosition().x > spriteb2.getPosition().x + 50) {
//            c++;
//            dy = -dy - 0.5 * c;
//        }
//
//        // остановка при малой скорости у земли (1)
//        if (dy < 0.5 and spriteg1.getPosition().y > spriteb1.getPosition().y - 50 and spriteg1.getPosition().x < spriteb2.getPosition().x) {
//            onGround = true;
//            dy = 0;
//        }
//        // остановка при малой скорости у земли (2)
//        if (dy < 0.5 and spriteg1.getPosition().y > spriteb1.getPosition().y + 50 and spriteg1.getPosition().x > spriteb2.getPosition().x + 50) {
//            onGround = true;
//            dy = 0;
//        }
//
//        if ((spriteg1.getPosition().x > spriteb2.getPosition().x + 50) && dy == 0) {
//            //circle.move(0, 5);
//            onGround = false;
//
//        }
//        if ((spriteg1.getPosition().x == spriteb2.getPosition().x + 50) && (spriteg1.getPosition().y > spriteb1.getPosition().y - 50)) {
//            // onGround = true;
//            spriteg1.setPosition(spriteb2.getPosition().x + 50, spriteg1.getPosition().y);
//            if (spriteg1.getPosition().x <= spriteb2.getPosition().x + 50 && spriteg1.getPosition().y > spriteb1.getPosition().y + 40) {
//                onGround = true;
//                dy = 0;
//            }
//        }
//
//
//
//
//
//        /* Vector2f circle_pos = circle.getPosition();
//         auto dist = (rectangle1.getPosition().x - circle_pos.x) * (rectangle1.getPosition().x - circle_pos.x) + (rectangle1.getPosition().y - circle_pos.y) * (rectangle1.getPosition().y - circle_pos.y);
//         if (dist < 25000) {
//             circle.setFillColor(Color(250, 150, 0));
//         }
//         else {
//             circle.setFillColor(Color(250, 0, 0));
//         }*/
//
//         /*if (c > 10) {
//             onGround = true;
//         }*/
//
//
//         /* Vector2f circle_pos = circle.getPosition();
//          Vector2i mouse_pos;
//          if (event.type == Event::MouseButtonPressed) {
//              if (event.mouseButton.button == Mouse::Left) {
//                  mouse_pos = Mouse::getPosition() - win.getPosition();
//
//                  auto dist = (mouse_pos.x - circle_pos.x) * (mouse_pos.x - circle_pos.x) + (mouse_pos.y - circle_pos.y) * (mouse_pos.y - circle_pos.y);
//                  if (dist < 2500) {
//                      drag = true;
//                      click_offs = Vector2i(circle_pos.x - mouse_pos.x, circle_pos.y - mouse_pos.y);
//                  }
//
//              }
//          }
//          if(drag)
//              circle.setPosition(mouse_pos.x + circle_pos.x , mouse_pos.y + circle_pos.y);*/
//
//
//              //Vector2i mouse_pos = Mouse::getPosition() - win.getPosition();
//              //Vector2f circle_pos = circle.getPosition();
//              //auto dist = (mouse_pos.x - circle_pos.x) * (mouse_pos.x - circle_pos.x) + (mouse_pos.y - circle_pos.y) * (mouse_pos.y - circle_pos.y);
//              //if (dist < 2500) {
//              //    circle.setFillColor(Color(250, 150, 0));
//              //}
//              //else {
//              //    circle.setFillColor(Color(250, 0, 0));
//              //}
//
//
//
//        if (Keyboard::isKeyPressed(Keyboard::Key::Right)) {
//            sprite.move(circle_speed * elapsed / 650, 0);
//            //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x + circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//            dir = 0;
//        }
//
//        if (Keyboard::isKeyPressed(Keyboard::Key::Left)) {
//            sprite.move(-circle_speed * elapsed / 650, 0);
//            //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x - circle_speed * elapsed / 650, fireboll.spritef.getPosition().y);
//            dir = 1;
//        }
//        if (Keyboard::isKeyPressed(Keyboard::Key::Down)) {
//            sprite.move(0, circle_speed * elapsed / 650);
//            //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y + circle_speed * elapsed / 650);
//        }
//        if (Keyboard::isKeyPressed(Keyboard::Key::Up)) {
//            sprite.move(0, -circle_speed * elapsed / 650);
//            //fireboll.spritef.setPosition(fireboll.spritef.getPosition().x, fireboll.spritef.getPosition().y - circle_speed * elapsed / 650);
//        }
//
//        /*if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
//            fire fireboll;
//            fireboll.spritef.setPosition(sprite.getPosition().x, sprite.getPosition().y);
//            fireboll.spritef.move(circle_speed * elapsed / 1000, circle_speed * elapsed / 1000);
//            win.draw(fireboll.getSprite());
//        }*/
//
//        auto elapsed2 = clcDrive.restart().asSeconds();
//        if (Keyboard::isKeyPressed(Keyboard::Key::A) || Keyboard::isKeyPressed(Keyboard::Key::D)) {
//            animationState += elapsed2 * animationSpeed;
//        }
//        if (animationState >= 4) {
//            animationState -= 4;
//        }
//
//
//        auto elapsedall = clcAll.restart().asSeconds();
//        animationStateall += elapsedall * animationSpeedall;
//        if (animationStateall >= 4) {
//            animationStateall -= 4;
//        }
//
//        sprite.setTextureRect(IntRect(floor(animationStateall) * 140, dir * 140, 140, 140));
//        spriteg1.setTextureRect(IntRect(floor(animationState) * 85, dirg1 * 85, 85, 85));
//        //f.spritef.setTextureRect(IntRect(floor(animationStateall) * 72, 0, 72, 72));
//        //fireboll.spritef.setTextureRect(IntRect(floor(animationStateall) * 72, dir * 72, 72, 72));
//        for (int i = 0; i < bolls.size(); i++) {
//            bolls[i].spritef.setTextureRect(IntRect(floor(animationStateall) * 72, bolls[i].dirb * 72, 72, 72));
//        }
//
//
//
//        //полет пули при нажатии конпки 
//        /*if (Keyboard::isKeyPressed(Keyboard::Key::LShift)) {
//            firebollpush += 1;
//            bolls[firebollpush].spritef.setPosition(sprite.getPosition().x + 50, sprite.getPosition().y + 65);
//            bolls[firebollpush].dirb = dir;
//        }*/
//        fire b(sprite.getPosition().x + 60, sprite.getPosition().y + 60);
//        if (Keyboard::isKeyPressed(Keyboard::Key::LShift)) {
//           
//            firebollpush += 1;
//            //this_thread::sleep_for(chrono::milliseconds(50));
//            cout << "AAAAA" << endl;
//            //cout << firebollpush;
//            bolls.push_back(b);
//            bolls[bolls.size() - 1].dirb = dir;
//            
//            
//        }
//
//        
//        win.clear();
//        win.draw(spritecosm);
//        
//        
//        if (firebollpush >=1) {
//            for (int i = 0; i < bolls.size(); i++) {
//                if (bolls[i].dirb == 0) {
//                    bolls[i].spritef.move(5, 5);
//                }
//                if (bolls[i].dirb == 1) {
//                    bolls[i].spritef.move(-5, 5);
//                }
//                
//                win.draw(bolls[i].getSprite());
//                
//            }
//            
//            
//        }
//        
//
//        for (int i = 0; i < bolls.size(); i++) {
//            auto distfire = (spriteg1.getPosition().x - bolls[i].spritef.getPosition().x) * (spriteg1.getPosition().x - bolls[i].spritef.getPosition().x) + (spriteg1.getPosition().y - bolls[i].spritef.getPosition().y) * (spriteg1.getPosition().y - bolls[i].spritef.getPosition().y);
//            if (distfire < 2500) {
//
//                //win.draw(spriteend);
//
//                bolls[i].spritef.setPosition(spriteg1.getPosition().x, spriteg1.getPosition().y);
//
//            }
//        }
//        
//        //win.draw(circle);
//       
//        win.draw(sprite);
//        win.draw(spriteb2);
//        //win.draw(rectangle1);
//        win.draw(spriteg1);
//        win.draw(spriteb1);
//        //win.draw(f.getSprite());
//        //win.draw(fireboll.getSprite());
//        //win.draw(spriteend);
//       // win.draw(rectangle2);
//        win.display();
//    }
//
//    return 0;
//}