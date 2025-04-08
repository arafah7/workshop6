#ifndef WIZARD_H
#define WIZARD_H

#include "player.h"

class Wizard : public Player {
     private:
    int mana;
    public:
    Wizard();
    Wizard(string name, int health, int damage, int mana);
    void castSpell(Player* opponent);
    int get_mana();
    void set_mana(int m);
    ~Wizard();
};

#endif
