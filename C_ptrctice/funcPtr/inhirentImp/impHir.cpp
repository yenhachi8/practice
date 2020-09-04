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
    base **picture = new base *[4];
    picture[0] = new circle();
    picture[1] = new rect();
    picture[2] = new circle();
    picture[3] = new circle();

    for (int i = 0; i < 4; i++)
    {
        picture[i]->draw();
    }
}
