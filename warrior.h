#ifndef WARRIOR_H
#define WARRIOR_H

#include "player.h"

class Warrior : public Player {
     private:
    string weapon;
     public:
    Warrior();
    Warrior(string name, int health, int damage, string weapon);
    void swingWeapon(Player* opponent);
    string get_weapon();
    void set_weapon(string w);
    ~Warrior();
};

#endif
