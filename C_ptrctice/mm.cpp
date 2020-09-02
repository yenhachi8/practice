#include <iostream>
#include "hhh.h"
using namespace std;
int main(int argc, char **argv)
{
    cout << test::pp << std::endl;
    cout << "argc=" << argc << endl;
    cout << "argv=" << argv << endl;

    cout << "*argv=" << *argv << endl;
    cout << "**argv=" << **argv << endl;
    int i;
    cout << "***************" << endl;
    for (i = 0; i < argc; i++)
    {

        cout << "argv=" << argv[i] << endl;
    }

    cout << "***************" << endl;
    for (i = 0; i < argc; i++)
    {

        cout << "*argv=" << (argv + i) << endl;
    }
}