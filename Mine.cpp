#include "Mine.h"
void Mine::ChangePlayerMoney(Player& player, int value) 
{
    player.AddPlayerMoney(value);
}

void Mine::PrintText(Player& player)
{
    std::string letter;
    std::cout << R"(Type "M" to mine or "E" to exit.)" << std::endl;
    std::cin >> letter;
    if (letter == "m" || letter == "M")
    {
        DealDamage(player);
    }
    else if(letter == "E" || letter == "e")
    {
        return;
    }
    else
    {
        std::cout << "huh?" << std::endl;
        return;
    }
}
    
void Mine::DealDamage(Player& player)
{
    ChangePlayerMoney(player, player.GetPlayerDamage());
    std::cout << "You just mined " << player.GetPlayerDamage() << "$." << std::endl;
}

void Mine::AddMoney(Player& player, int value)
{
    ChangePlayerMoney(player, value);
}