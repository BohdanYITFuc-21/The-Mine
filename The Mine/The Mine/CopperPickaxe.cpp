#include "CopperPickaxe.h"

CopperPickaxe::CopperPickaxe()
{
    buyPrice = 20;
    baseDamage = 5;
    name = "Copper Pickaxe";
}

int CopperPickaxe::GetBuyPrice() const
{
    return buyPrice;
}
int CopperPickaxe::GetDamage() const
{
    return baseDamage;
}
void CopperPickaxe::SetBuyPrice(int price) 
{
    buyPrice = price;
}