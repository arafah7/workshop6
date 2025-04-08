#include "warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior() : Player() {
    weapon = "";
}

Warrior::Warrior(string name, int health, int damage, string weapon)
    : Player(name, health, damage) {
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player* opponent) {
    cout << get_name << " swings their " << weapon << " at " << opponent->get_name() << "!\n";
    opponent->takeDamage(get_damage);
}

string Warrior::get_weapon() {
    return weapon;
}

void Warrior::set_weapon(string input_weapon) {
    this->weapon = input_weapon;
}

Warrior::~Warrior() {}
