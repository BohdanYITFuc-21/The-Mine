#include "Shop.h"

Shop::Shop()
{
    number = "-1";
    price = "0";
    pickaxes.emplace_back(new CopperPickaxe());
    pickaxes.emplace_back(new SilverPickaxe());
    pickaxes.emplace_back(new GoldenPickaxe());
}

bool Shop::CheckNumber(std::string str)
    {
        for (char i : str)
        {
            if (isdigit(i) == false)
            {
                return false;
            }
        }
        return true;
    }

    void Shop::ChangePlayerStats(Player& player, int value) 
    {
        player.SubtractPlayerMoney(value);
    }
    
    void Shop::ChangePlayerStats(Player& player, int value, std::string name)
    {
        player.SetPlayerPickaxe(name);
        player.SetPlayerDamage(value);
    }
    
    void Shop::PrintListOfItems() const
    {
        for(int i = 0; i < pickaxes.size(); i++)
        std::cout << i + 1 << " => " << pickaxes[i]->GetName() << " " << this -> pickaxes[i]->GetBuyPrice() << "$" << std::endl;
    }

    void Shop::PrintChoice(Player& player) 
    {
        std::cout << "Type in a number of the wanted item to buy it or \"E\" to exit" << std::endl;
        std::cin >> number;
        if(CheckNumber(number))
        {
            int iNumber = stoi(number);
            if(iNumber < 0 || iNumber > size(pickaxes))
            {
                std::cout << "huh?" << std::endl;
            }
            else if(iNumber == 0)
            {
                return;
            }
            else
            {
                BuyItem(player, iNumber);
            }
        }
        else
        {
            std::cout << "huh?" << std::endl;
        }
    }

    void Shop::BuyItem(Player& player, int itemID) const
    {
        if(itemID == 0)
        {
            return;
        }
        else
        {
            int ID = itemID - 1;
            if(player.GetPlayerMoney() >= pickaxes[ID]->GetBuyPrice())
            {
                std::cout << "You bought " << pickaxes[ID]->GetName() << " for " << pickaxes[ID]->GetBuyPrice() << "$" << std::endl;
                ChangePlayerStats(player, pickaxes[ID]->GetBuyPrice());
                ChangePlayerStats(player, pickaxes[ID]->GetDamage(), pickaxes[ID]->GetName());
            }
            else
            {
                std::cout << "You do not have enough money." << std::endl;
                std::cout << "You have " << player.GetPlayerMoney() << "$" << std::endl;
            }
        }
    }

    void Shop::BalanceCheck(Player& player)
    {
        std::cout << "You have " << player.GetPlayerMoney() << "$" << std::endl;
    }
    
    
    void Shop::SetDefault() const
    {
        std::string answer;
        for(int i = 0; i < pickaxes.size(); i++)
        {
            std::cout << "Enter " << pickaxes[i]->GetName() << " price: ";
            std::cin >> answer;
            if(CheckNumber(answer))
            {
                pickaxes[i]->SetBuyPrice(std::stoi(answer));
            }
            else
            {
                std::cout << "huh?" << std::endl;
                return;
            }
        }
        PrintListOfItems();
    }
