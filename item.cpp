#include "item.h"

Item::Item(std::string name, float price) : m_name(name), m_price(price)
{
    
} 

float Item::GetPrice() const
{
    return m_price;
} 

std::string Item::GetName() const
{
    return m_name;
}
