#include "PickaxeBase.h"

PickaxeBase::PickaxeBase()
{
    baseDamage = 0;
    buyPrice = 0;
    name = "Fists";
}
int PickaxeBase::GetDamage() const
{
    return baseDamage;
}

int PickaxeBase::GetBuyPrice() const
{
    return buyPrice;
}

std::string PickaxeBase::GetName() const
{
    return name;
}
    
void PickaxeBase::SetBuyPrice(int price)
{
    buyPrice = price;
}