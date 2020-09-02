#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void printBin(int num)
{
    int mask = 1 << 7;
    cout << mask << endl;
    for (int i = 0; i < 8; ++i)
    {
        cout << (((mask & num) == 0) ? 0 : 1);
        mask >>= 1;
    }
    cout << endl;
}

int main()
{
    printBin(20);
    printBin(64);
    //int i = 0;
    //float mask = 1;
    //for (i = 0; i < 8; i++)
    //{
    //mask = 1 >> i;
    //cout << (mask) << endl;
    //}
    // cout << mask << endl;
}