#ifndef ACCOUNTING_H
#define ACCOUNTING_H

#include <unordered_map>
#include "item.h"
#include <iostream>

class Account
{
public:
    Account() { }

    void AddItem(const Item& item)
    {
        m_items[m_uniqueId++] = item;
    }
    
    static unsigned int m_uniqueId;
    void PrintItems() const
    {
        for(auto val : m_items)
        {
            std::cout << "Id:  " << val.first << " Name is: " << val.second.GetName() << " Price is: " << val.second.GetPrice() <<  std::endl;
        }
    }
    void RemoveItem(unsigned int id)
    {
        m_items.erase(id);
    }
private:
    std::unordered_map<unsigned int, Item> m_items; 
};
#endif /* ACCOUNTING_H */
