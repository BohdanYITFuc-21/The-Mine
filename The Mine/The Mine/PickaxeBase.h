#pragma once
#include <string>

class PickaxeBase
{
protected:
    int baseDamage;
    int buyPrice;
    std::string name;
public:
    PickaxeBase();
    int GetDamage() const;
    int GetBuyPrice() const;
    void SetBuyPrice(int price);
    std::string GetName() const;
};
