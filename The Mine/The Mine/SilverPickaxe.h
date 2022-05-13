#pragma once
#include "PickaxeBase.h"
#include <string>

class SilverPickaxe  : public PickaxeBase
{
private:
    int buyPrice;
    int baseDamage;
public:
    std::string name;
    SilverPickaxe();
    int GetBuyPrice() const;
    int GetDamage() const;
        
    void SetBuyPrice(int price);
};