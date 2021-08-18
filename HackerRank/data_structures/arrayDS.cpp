#include <vector>
#include <iostream>

// problem : https://www.hackerrank.com/challenges/arrays-ds/problem
// soultion ==============================
vector<int> reverseArray(vector<int> a) {
	// new empty vector for reverse
    vector<int> r_a;
    
	// loop from last 
    for(int i = a.size()-1 ; i >= 0 ; i -=1 ){

	// push reversed element to r_a vector
        r_a.push_back( a[i] );

	// cout for debug :)
        cout << a[i] << " ";
    }
    
	// return r_a vector with reversed elements
    return r_a; 
}

// =======================================