#pragma once
#include "Player.h"
#include <iostream>

class Mine
{
private:
    static void ChangePlayerMoney(Player& player, int value);
public:
    static void PrintText(Player& player);
    static void DealDamage(Player& player);
    static void AddMoney(Player& player, int value);
};