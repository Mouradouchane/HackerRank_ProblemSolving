#include <bits/stdc++.h>

using namespace std;

// problem : https://www.hackerrank.com/challenges/service-lane/problem
// solution O(n*k) ====================================================
	
// just normal function for getting min value instead of std::min
int getMin(std::vector<int> &w , int start , int end){  // O(k)
    int min = w[start];    
    for(int h = start ; h <= end ; h += 1){
        if(w[h] < min) min = w[h];
    }
    return min;
}

	// hint ==> you have to edit result variable in main()
	// and edit serviceLane function to get vector of width & vector of test cases
vector<int> serviceLane(vector<int> w, vector<vector<int>> cs){

    std::vector<int> minWidth; // when we store the all min widths in each test case :)
	
	// loop over all test case 
    for(int i = 0 ; i < cs.size() ; i += 1){ // O(n)
	// loop over widths form "cs->start" to "cs->end" & get min widths
	// push min width to "minWidth" vector :)
        minWidth.push_back( getMin(w,cs[i][0] , cs[i][1]) ); // O(k)
    }
    
	// return vector of min widths 
    return minWidth;
}
// ======================================================================