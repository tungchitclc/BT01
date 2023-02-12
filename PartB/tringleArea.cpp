#include <iostream>
#include<math.h>

using namespace std;
double tringleArea ( int a , int b , int c)
{
    double s = (a + b + c)/(double)2;
    double area = sqrt(s * (s - a) * (s - b)* (s - c));
    return area;
}

int main()
{
    int a , b , c;
    cin >> a >> b >> c;
    cout << tringleArea(a,b,c) << endl;
    return 0;
}
