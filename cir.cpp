
#include <iostream>
#include <cstdlib>
using namespace std;
double computeArea(double, double);

int main()
{
    double result;
    result = computeArea(50, 10);
    cout << result << endl;
}
double computeArea(double length, double wide)
{
    double area;
    area = length * wide;
    return area;
}