#include "wizard.h"
#include <iostream>
using namespace std;

Wizard::Wizard() : Player() {
    mana = 0;
}

        Wizard::Wizard(string name, int health, int damage, int input_mana)
    : Player(name, health, damage) {
    this->mana = input_mana;
}

void Wizard::castSpell(Player* opponent) {
      cout << name << " casts a spell on " << opponent->get_name() << " for " << damage << " damage.\n";
    opponent->takeDamage(damage);
}


     int Wizard::get_mana() {
    return mana;
}

               void Wizard::set_mana(int input_mana) {
    this->mana = input_mana;
}

Wizard::~Wizard() {}
