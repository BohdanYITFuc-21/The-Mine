#include "Player.h"
#include "Mine.h"
#include "Shop.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
    Player player(2);
    Mine mine;
    Shop shop;
    for(;;)
    {
        string answer;
        cout << "Type \"1\" if you want to set prices yourself " << endl
        << "or \"2\" to proceed with default" << endl;
        cin >> answer;
        if(answer == "1")
        {
            shop.SetDefault();
            answer = "2";
        }
        if(answer == "2")
        {
            for(;;)
            {
                cout << "Type \"1\" to go mining" << endl
                << "Type \"2\" to go shopping " << endl
                << "Type \"3\" to check your balance" << endl;
                cin >> answer;
                if(answer == "1")
                {
                    mine.PrintText(player);
                }
                else if(answer == "2")
                {
                    shop.PrintListOfItems();
                    shop.PrintChoice(player);
                }
                else if(answer == "3")
                {
                    shop.BalanceCheck(player);
                }
                else if(answer == "4")
                {
                    mine.AddMoney(player, 5);   
                }
                else if(answer == "0")
                {
                    exit(0);
                }
                else
                {
                    cout << "huh?" << endl;
                }
            }
        }
        else if(answer == "0")
        {
            exit(0);
        }
        else
        {
            cout << "huh?" << endl;
        }
    }
}