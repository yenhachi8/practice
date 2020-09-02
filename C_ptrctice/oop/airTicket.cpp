#include <iostream>
#include "airTicket.h"
using namespace std;

airTicket::airTicket()
{
    name = "unKnown";
    miles = 0;
}
airTicket::~airTicket()
{
}
string airTicket::getName()
{
    return name;
}
void airTicket::setName(string inName)
{
    name = inName;
}
void airTicket::setMiles(int inMiles)
{
    miles = inMiles;
}
int airTicket::calculatePrice()
{
    int rPrice = 0;
    if (miles > 10000)
        rPrice = (int)(miles * 0.095);
    else
    {
        rPrice = (int)(miles * 0.1);
    }
    return rPrice;
}