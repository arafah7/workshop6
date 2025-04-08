#include<player.H>
#include<iostream>
using namespace std;
Player :: Player(){
    name = "not assigned";
    health = 0;
    damage = 0;
}
Player :: Player(string input_name,int input_health,int input_damage){
    this->name = input_name;
    this->health = input_health;
    this-> damage = input_damage;
}

void Player::attack(Player* opponent, int input_damage) {
    cout << name << " attacks " << opponent->get_name() << " for " << input_damage << " damage." << endl;
    opponent->takeDamage(input_damage);
}

void Player::takeDamage(int dmg) {
    health -= dmg;
    cout << name << " takes " << dmg << " damage. Remaining health: " << health << "\n";
}


string Player::get_name() {
    return name;
}

void Player::set_name(string input_name) {
    this->name = input_name;
}

int Player::get_health() {
    return health;
}

void Player::set_health(int input_health) {
    this->health = input_health;
}

int Player::get_damage() {
    return damage;
}

void Player::set_damage(int input_damage) {
    this->damage = input_damage;
}

Player::~Player() {}
