#pragma once
#include "CopperPickaxe.h"
#include "SilverPickaxe.h"
#include "GoldenPickaxe.h"
#include "Player.h"
#include <string>
#include <iostream>

class Shop
{
private:
    CopperPickaxe copperPickaxe;
    SilverPickaxe silverPickaxe;
    GoldenPickaxe goldenPickaxe;
    std::string pickaxes[3] = {copperPickaxe.name, silverPickaxe.name, goldenPickaxe.name};
    std::string number;
    std::string price;
    static void ChangePlayerMoney(Player& player, int value);
    static void ChangePlayerPickaxe(Player& player, int value);
public:
    Shop();
    static bool CheckNumber(std::string str);
    void PrintListOfItems() const;
    void PrintChoice(Player& player) ;
    void BuyItem(Player& player, int itemID);
    static void BalanceCheck(Player& player);
    void SetDefault();
};