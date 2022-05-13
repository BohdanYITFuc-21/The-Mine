#include "Player.h"

Player::Player(int d)
{
    damage = d;
    playerMoney = 0;
    currentPickaxe = "Fists";
}

void Player::SetPlayerMoney(int value)
{
    playerMoney = value;
}
void Player::AddPlayerMoney(int value)
{
    playerMoney += value;
}
void Player::SubtractPlayerMoney(int value)
{
    playerMoney -= value;
}
int  Player::SetPlayerDamage(int value)
{
    return damage = value;
}
std::string Player::SetPlayerPickaxe(std::string value)
{
    return currentPickaxe = value;
}
int Player::GetPlayerMoney() const
{
    return playerMoney;
}
int Player::GetPlayerDamage() const
{
    return damage;
}
std::string Player::GetPlayerPickaxe()
{
    return currentPickaxe;
}