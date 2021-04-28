#include <bits/stdc++.h>
using namespace std;

// problem : https://www.hackerrank.com/challenges/circular-array-rotation/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
// soutlion O(n) ===========================================================================
vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
	// array of queries indexes
    std::vector<int> qk;
	// for each query as q :)
    for(int q : queries){
	// we get the correct index by using this magic fomula -_-
	// ( ( size - ( k % size) + q ) % size ) 
        qk.push_back( a[(a.size() - (k%a.size()) + q) % a.size()] );
    }
    
	// return vector of answers :)
    return qk;
}
// =========================================================================================
