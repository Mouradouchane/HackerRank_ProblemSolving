#include <bits/stdc++.h>

// problem :https://www.hackerrank.com/challenges/drawing-book/problem
// soultion ========================================================
int pageCount(int n, int p) {
    int minpage = 0;
    int minr = 0;
    
    // in case when request come as first or last page
    if(p == 0 || p == 1 || p == n ){
        return 0;
    }
    
    // calc form front to back
    if(p%2 == 0) minpage = p/2;
    else minpage = (p-1)/2;

    // calc from back to fromt
    if(p%2 == 0) minr = (n/2 - p/2);
    else minr = (n/2 - (p-1)/2);

    // take min step to get target page 
    return std::min(minpage,minr);
}
// =================================================================
