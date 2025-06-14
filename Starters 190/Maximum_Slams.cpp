#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin >> n;
	
	if (n >= 25)
	    cout << 0 << endl;
	else {
	    n = 25 - n;
	    cout << ceil(n / (double)4) << endl;
	}
}