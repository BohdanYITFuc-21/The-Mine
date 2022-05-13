#include "GoldenPickaxe.h"

GoldenPickaxe::GoldenPickaxe()
{
    buyPrice = 150;
    baseDamage = 20;
    name = "Golden Pickaxe";
}
int GoldenPickaxe::GetBuyPrice() const
{
    return buyPrice;
}
int GoldenPickaxe::GetDamage() const
{
    return baseDamage;
}
        
void GoldenPickaxe::SetBuyPrice(int price) 
{
    buyPrice = price;
}