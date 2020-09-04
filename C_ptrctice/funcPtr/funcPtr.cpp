
#include <iostream>

using namespace std;

int swa(int x, int y)
{
    int tmp;
    tmp = x;
    x = y;
    y = tmp;
}

int main()
{
    int a = 5, b = 8;
    int *ptr = swa(a, b);

    cout << swa;
}
