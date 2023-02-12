#include <iostream>

using namespace std;
bool checksonguyen( int a , int b , int c)
{
    if( a == b && b == c && a == c ){
        return true;
    }
    return false;
}

int main()
{
    int a , b , c ;
    cin >> a >> b >> c;
    if(checksonguyen(a,b,c))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}
