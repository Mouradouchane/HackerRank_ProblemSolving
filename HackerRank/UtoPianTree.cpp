#include <bits/stdc++.h>
using namespace std;

// problem : https://www.hackerrank.com/challenges/utopian-tree/problem?h_r=next-challenge&h_v=zen
// soultion O(n) ===============================================================
int utopianTree(int n) {
	// if max periods 0 or 1 that mean total height is n+1 :)
    if(n <= 1) return n+1;
	
	// sc ==> total height of tree :)
    int sc = 1;
   // start loop & cheack if period % 2 that mean it's normal seasson else that mean speacial one so we double 
    for(int i = 1 ,p = 0; i <= n ; i += 1 , p += 1){
        if(i % 2 == 0) sc += 1;
        else sc *=2;
    }
    
    return sc;
}
// =============================================================================
