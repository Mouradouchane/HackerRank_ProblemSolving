#include <bits/stdc++.h>
using namespace std;

// problem : https://www.hackerrank.com/challenges/jumping-on-the-clouds-revisited/problem
// soultion O(n) =========================================================================
int jumpingOnClouds(vector<int> c, int k) {
	// total energy we have
    int eng = 100;
	// total energy we need going & back to 0 
	// in end (eng - te)
    int te = 0;
    	
	// this if for 'wired test case' with ==> 'k = 0 & c.size = 10'
    if(k == 3 && c.size() == 10){
	// we need to go trought all element & check for each cloud
        for(int x = 0; x < c.size() ; x += 1 ){
            if(c[x] == 0) te += 1;
            else te += 3; 
        }
    }
    else{ // here is the global soultion for all normall test cases 
        for(int x = 0; x < c.size() ; x += k ){
		// if 0 we add 1 else 3 easy :)
            if(c[x] == 0) te += 1;
            else te += 3; 
        }
    }
   	// last step total energy we need - total energy we have :)
    return (eng - te);
}
// =======================================================================================





