#include <iostream>
#include <cstdlib>
using namespace std;
//做一個樣板Ｍ裡面有一個幽靈方法，沒東西
class base
{
public:
    virtual void draw() = 0;
};
class rect : public base
{
public:
    void draw()
    {
        cout << "rect!!" << endl;
    }
};
class circle : public base
{
public:
    void draw()
    {
        cout << "cir!!" << endl;
    }
};
int main()
{
    int **base = new int *[3];
    int a = 5, b = 10, c = 15;
    base[0] = &a;
    cout << *base[0] << endl;
}
