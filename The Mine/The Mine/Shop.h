#pragma once
#include "CopperPickaxe.h"
#include "SilverPickaxe.h"
#include "GoldenPickaxe.h"
#include "Player.h"
#include <string>
#include <iostream>
#include <vector>

class Shop
{
private:
    std::vector<std::unique_ptr<PickaxeBase>> pickaxes;
    std::string number;
    std::string price;
    static void ChangePlayerStats(Player& player, int value);
    static void ChangePlayerStats(Player& player, int value, std::string name);
public:
    Shop();
    static bool CheckNumber(std::string str);
    static void BalanceCheck(Player& player);
    void PrintListOfItems() const;
    void PrintChoice(Player& player) ;
    void BuyItem(Player& player, int itemID) const;
    void SetDefault() const;
};
