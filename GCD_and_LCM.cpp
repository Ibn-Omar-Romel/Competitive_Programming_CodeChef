#include<iostream>
#include<algorithm>

using namespace std;

int main ( ) {

    int t;
    cin >> t;

    while ( t-- ) {

        int a, b, k;
        cin >> a >> b >> k ;
        
        int count = 0 ; 

        while ( true ) {

            count++;
            
            int g = __gcd( a , b );
            
            if ( a >= b ) a = g;
            else b = g;
            
            
            int l = _lcm( a, b);
            
            if ( a >= b ) a = l;
            else b = l;

            
            if ( k == count ) break;
        }
        
        cout << a + b << '\n';
    }
}