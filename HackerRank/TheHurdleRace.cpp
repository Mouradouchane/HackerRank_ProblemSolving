#include <bits/stdc++.h>

using namespace std;

// problem : https://www.hackerrank.com/challenges/the-hurdle-race/problem
// soultion ==============================================================
int hurdleRace(int k, vector<int> height) {
	// 'needed' for max power player need to jump all hurdles
	// max getting max 'hurdle height'
    int needed = 0 , max = 0;
    
	// just for getting max 
    for(int i = 0; i < height.size(); i+=1){
        if(height[i] > max) max = height[i];
    }
    
	// check if player cannot go to the end 
		// if then , we calculate the needed power  (max - k) = "needed power"
    if(max > k) needed = (max - k);
    
	// return needed power or 0
    return can;
}
// =======================================================================
