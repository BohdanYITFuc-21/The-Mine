#include "Shop.h"

Shop::Shop()
{
    number = "-1";
    price = "0";
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

    void Shop::ChangePlayerMoney(Player& player, int value) 
    {
        player.SubtractPlayerMoney(value);
    }

    void Shop::ChangePlayerPickaxe(Player& player, int value)
    {
        player.SetPlayerDamage(value);
    }
    
    void Shop::PrintListOfItems() const
    {
        std::cout << 1 << " => " << copperPickaxe.name << " " << this -> copperPickaxe.GetBuyPrice() << "$" << std::endl;
        std::cout << 2 << " => " << silverPickaxe.name << " " << this -> silverPickaxe.GetBuyPrice() << "$" << std::endl;
        std::cout << 3 << " => " << goldenPickaxe.name << " " << this -> goldenPickaxe.GetBuyPrice() << "$" << std::endl;
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
                BuyItem(player , iNumber);
            }
        }
        else
        {
            std::cout << "huh?" << std::endl;
        }
    }

    void Shop::BuyItem(Player& player, int itemID)
    {
        switch(itemID)
        {
        case 0:
                
            break;
            
        case 1:
            if(player.GetPlayerMoney() >= copperPickaxe.GetBuyPrice())
            {
                std::cout << "You bought " << copperPickaxe.name << " for " << copperPickaxe.GetBuyPrice() << "$" << std::endl;
                ChangePlayerMoney(player, copperPickaxe.GetBuyPrice());
                ChangePlayerPickaxe(player, copperPickaxe.GetDamage());
            }
            else if(player.GetPlayerMoney() < copperPickaxe.GetBuyPrice())
            {
                std::cout << "You do not have enough money." << std::endl;
                std::cout << "You have " << player.GetPlayerMoney() << "$" << std::endl; 
            }
            break;
            
        case 2:
            if(player.GetPlayerMoney() >= silverPickaxe.GetBuyPrice())
            {
                std::cout << "You bought " << silverPickaxe.name << " for " << silverPickaxe.GetBuyPrice() << "$" << std::endl;
                ChangePlayerMoney(player, silverPickaxe.GetBuyPrice());
                ChangePlayerPickaxe(player, silverPickaxe.GetDamage());
            }
            else if(player.GetPlayerMoney() < silverPickaxe.GetBuyPrice())
            {
                std::cout << "You do not have enough money." << std::endl;
                std::cout << "You have " << player.GetPlayerMoney() << "$" << std::endl;
            }
            break;
            
        case 3:
            if(player.GetPlayerMoney() >= goldenPickaxe.GetBuyPrice())
            {
                std::cout << "You bought " << goldenPickaxe.name << " for " << goldenPickaxe.GetBuyPrice() << "$" << std::endl;
                ChangePlayerMoney(player, goldenPickaxe.GetBuyPrice());
                ChangePlayerPickaxe(player, goldenPickaxe.GetDamage());
            }
            else if(player.GetPlayerMoney() < goldenPickaxe.GetBuyPrice())
            {
                std::cout << "You do not have enough money." << std::endl;
                std::cout << "You have " << player.GetPlayerMoney() << "$" << std::endl;
            }
            break;
        }
        
    }

    void Shop::BalanceCheck(Player& player)
    {
        std::cout << "You have " << player.GetPlayerMoney() << "$" << std::endl;
    }
    
    
    void Shop::SetDefault()
    {
        std::string answer;
        std::cout << "Enter Copper Pickaxe price: ";
        std::cin >> answer;
        if(CheckNumber(answer))
        {
            copperPickaxe.SetBuyPrice(std::stoi(answer));
        }
        else
        {
            std::cout << "huh?" << std::endl;
            return;
        }
        
        std::cout << "Enter Silver Pickaxe price: ";
        std::cin >> answer;
        if(CheckNumber(answer))
        {
            silverPickaxe.SetBuyPrice(stoi(answer));
        }
        else
        {
            std::cout << "huh?" << std::endl;
            return;
        }
        
        std::cout << "Enter Golden Pickaxe price: ";
        std::cin >> answer;
        if(CheckNumber(answer))
        {
            goldenPickaxe.SetBuyPrice(stoi(answer));
        }
        else
        {
            std::cout << "huh?" << std::endl;
            return;
        }
        PrintListOfItems();
    }