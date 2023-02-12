#include <iostream>

using namespace std;

bool checkleapyear( int a)
{
    while( a > 0)
    {
        if(( a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    return false;

}

int main()
{
   int a ;
   cin >> a;
   if( checkleapyear(a))
   {
       cout << "true" << endl;
   }
   else
   {
       cout << "false" << endl;
   }
    return 0;
}
