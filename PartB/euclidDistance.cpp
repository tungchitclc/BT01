#include <iostream>
#include<math.h>

using namespace std;

double euclidDistance ( int x1, int y1, int x2 , int y2)
{
    int a = x2 - x1;
    int b = y2 - y1;
    double res = sqrt(a*a + b*b);

    return res;
}

int main()
{
    int x1 , y1 , x2 , y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << euclidDistance(x1,y1,x2,y2) << endl;
    return 0;
}
