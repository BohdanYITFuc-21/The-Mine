#include "SilverPickaxe.h"

SilverPickaxe::SilverPickaxe()
{
    baseDamage = 10;
    buyPrice = 100;
    name = "Silver Pickaxe";
}
int SilverPickaxe::GetBuyPrice() const
{
    return buyPrice;
}
int SilverPickaxe::GetDamage() const
{
    return baseDamage;
}
        
void SilverPickaxe::SetBuyPrice(int price) 
{
    buyPrice = price;
}