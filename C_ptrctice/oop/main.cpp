#include <iostream>
#include "airTicket.h"
using namespace std;
int main()
{
    airTicket tkt1;
    tkt1.setName("Julian Yang");
    tkt1.setMiles(25000);
    cout << tkt1.getName() << "pays" << tkt1.calculatePrice() << endl
}