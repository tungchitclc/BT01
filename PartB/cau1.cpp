#include <iostream>
#include <math.h>

using namespace std;

double khoangcach ( int x , int y )
{
               long long a = x*x + y*y;
               double res = sqrt(a);

               return res;
}

int main()
{
    int x , y;
    cout << "NHAP TOA DO X , Y :";
    cin >> x >> y;
    cout << khoangcach(x,y) << endl;
    return 0;
}
