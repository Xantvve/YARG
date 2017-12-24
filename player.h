#pragma once
class Player{
      public:
             Player();
             void init(int level, int health, int attack, int defense, int experience);
             
             void getPosition(int &x, int &y);
             
      private:
              int level;
              int health;
              int attack;
              int defense;
              int experience;
              
              int x;
              int y;
              int z;
      };
