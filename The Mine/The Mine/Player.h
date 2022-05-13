#pragma once
#include <string>

class Player
{
private:
    int playerMoney;
    int damage;
    std::string currentPickaxe;
public:
    Player(int d);
    void SetPlayerMoney(int value);
    void AddPlayerMoney(int value);
    void SubtractPlayerMoney(int value);
    int  SetPlayerDamage(int value);
    int GetPlayerMoney() const;
    int GetPlayerDamage() const; 
    std::string SetPlayerPickaxe(std::string value);
    std::string GetPlayerPickaxe();
};