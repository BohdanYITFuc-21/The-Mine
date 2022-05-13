#pragma once
#include "PickaxeBase.h"
#include <string>

class GoldenPickaxe  : public PickaxeBase
{
private:
    int buyPrice;
    int baseDamage;
public:
    std::string name;
    GoldenPickaxe();
    int GetBuyPrice() const;
    int GetDamage() const;
    void SetBuyPrice(int price);
};