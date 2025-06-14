#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "Yes\n"
#define no cout << "No\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


void solve() {

    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int>taken(n, 0);
    for (int i = 0; i < n; i++) {
        if (s[i] == '1')
            continue;

        
        if (i > 0 and s[i-1] == '1' and taken[i-1] == 0) {
            taken[i-1] = 1;
        }
        else if (i < n-1 and s[i+1] == '1' and taken[i+1] == 0) {
            taken[i+1] = 1;
        }
        else {
            no;
            return;
        }
    }
    yes;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        solve();
    }
    return 0;
}
