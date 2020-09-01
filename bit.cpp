#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    cout << sizeof(int) << endl;
    int a = 0x7fffffff;
    int b = 0xffffffff;
    cout << "a=" << a + 1 << endl
         << "b=" << b << endl;
}