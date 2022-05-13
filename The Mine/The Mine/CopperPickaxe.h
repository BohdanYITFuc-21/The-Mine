#pragma once
#include "PickaxeBase.h"
#include <string>

class CopperPickaxe : PickaxeBase
{
private:
    int buyPrice;
    int baseDamage;
public:
    CopperPickaxe();
    std::string name;
    int GetBuyPrice() const;
    int GetDamage() const;
    void SetBuyPrice(int price);
};
