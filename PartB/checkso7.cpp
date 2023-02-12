#include <iostream>

using namespace std;
bool checkso( int a , int b )
{
    if(a % 7 == 0 && b % 7 == 0 )
    {
        return true;
    }
    return false;
}

int main()
{
    int a , b;
    cin >> a >> b;
    if(checkso(a , b))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
