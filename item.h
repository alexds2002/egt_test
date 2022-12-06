#ifndef ITEM_H
#define ITEM_H

#include <string>

class Item
{
public:
    Item() = default;
    Item(std::string name, float price); 

    float GetPrice() const;
    std::string GetName() const;
private:
    // mandatory
    std::string m_name;
    float m_price;
};

#endif /* ITEM_H */
