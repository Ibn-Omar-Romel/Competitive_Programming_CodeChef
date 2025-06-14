#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


int minIncrementForUnique(vector<int>& nums) {
        
    int count = 0;
    int n = nums.size();

    if (n == 1)
        return 0;
    
 
    sort(nums.begin(), nums.end());
    vector<int>vec(n,0);
    vec[0] = nums[0];

    for(int i = 1; i < n ; i++) {

        if (nums[i] == nums[i-1]) {

            int value = vec[i-1]+1;
            count += value - nums[i];
            vec[i] = value;
        }
        else if ( vec[i-1] >= nums[i] ) {

            int value = vec[i-1]+1;
            count += value - nums[i];
            vec[i] = value;
        }
        else{
            vec[i] = nums[i];
        }
    }
    
    return count;
}


