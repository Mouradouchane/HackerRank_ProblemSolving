#include <bits/stdc++.h>

using namespace std;

// problem : https://www.hackerrank.com/challenges/strange-advertising/problem
// soultion =================================================================
int viralAdvertising(int n) {
	// s ==> shared per day
    int s = 5;
	// likes per day
    int likes = std::floor(s/2);
	// total likes per all days 
    int tc = likes;
    
    	// we start from day 2 , because we calculated day 1 as first step :) 
    for(int d = 2 ; d <= n ; d += 1){
	// each new day viwers groing by (likes*3)
        s = likes *3;
        likes = std::floor(s/2); // new likes per day floor /2
        tc += likes; // total += new likes 
    }
    	// return total likes as tc
    return tc;
}
// ========================================================================
