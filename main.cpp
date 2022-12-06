#include "accounting.h"
#include <iostream>

int main()
{
    Account account;

    int opt = 0;
    while(1)
    {

        std::cout << "1. Add Item\n 2. RemveItem by id\n 3. Print Items " << std::endl;
        switch(opt)
        {
            case 1:
            {
                std::string name;
                float price;
                std::cout << "Name: \n";
                std::cout << "Price: \n";
                std::cin >> name >> price;
                
                account.AddItem(Item(name, price));
                break;

            }
            case 2:
            {
                unsigned int id = 0;
                std::cout << "Remove by id (for now)\n";
                std::cin >> id;
                account.RemoveItem(id);
                break;
            }
            case 3:
            {
                account.PrintItems();
                break;
            }
            default:
                return 0;
        }
    }
	return 0;
}

