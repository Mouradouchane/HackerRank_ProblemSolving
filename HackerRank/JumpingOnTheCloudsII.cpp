#include <iostream>
#include <vector>

using namespace std;

// problem : https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
// solution O(n-1) =============================================================
unsigned int jumpingOnClouds(vector<int> c) {
    unsigned int jumps = 0;
   
	// just a normal loop over all element O(n-1)
    for(unsigned int i = 0 ; i < c.size()-1 ; i += 1){
	// if element i & i+2 are the same that mean we can
	// do a long jump
        if(c[i] != 1 && c[i+2] != 1){
            jumps += 1;
            i += 1;
        } // else , that mean we do a normal jump
        else  jumps += 1;

    }
    
    return jumps;
}
// =============================================================================