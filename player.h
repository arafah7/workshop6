#ifndef PLAYER_H
#define PLAYER_H
#include<iostream>
#include<string>
using namespace std;
class Player{
    private:
    string name;
    int health;
    int damage;
    public:
    Player();
    Player(string input_name,int input_health,int input_damage);
    void attack(Player *opponent,int damage);
    void takeDamage(int damage);
    string get_name();
    void set_name(string input_name);

    int get_health();
    void set_health(int input_health);

    int get_damage();
    void set_damage(int input_damage);
    ~Player();
};
#endif

