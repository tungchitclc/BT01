#include <iostream>

using namespace std;

int Findmax ( int n , int a[100])
{
    int Max = a[0];
      for( int i = 1 ; i < n ;i++)
      {
          if( Max < a[i])  Max = a[i];
      }
      return Max;

}

int trungbinh( int n, int a[100])
{
    int sum = 0;
   for( int i = 0; i < n ; i++)
   {
       sum += a[i];
   }

   return sum/n;

}

int Findmin( int n, int a[100])
{
    int MiN = a[0];
    for(int i = 1 ; i < n; i++)
    {
        if( MiN > a[i])  MiN = a[i];

    }
    return MiN;
}




int main()
{
    int n;
    cin>> n;
    int a[100];
    for( int i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    cout << trungbinh( n , a) << endl;
    cout << Findmax( n , a) << endl;
    cout << Findmin( n , a) << endl;

    return 0;
}
