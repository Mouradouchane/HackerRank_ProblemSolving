#include <bits/stdc++.h>
using namespace std;

// problem : https://www.hackerrank.com/challenges/flatland-space-stations/problem
// soultion O(n+nlog(n))========================================================
int flatlandSpaceStations(int n, vector<int> arr) {
	// sorting cites important for O(n) solution :)
    std::sort(arr.begin(),arr.end()); // O(n log(n))
	// maximum distance "will be from 0 to first distance" in sorted arr  
	// example => 0 -> 11
    int maxdist = arr[0];
	// variable use it to "count each distances & compared with max" distance that we found 
    int dist = 0;
    
	// loop over all distances we start form 1 -> arr[1]
    for(int i =1 ; i < arr.size() ; i += 1){ // O(n)
	// temporary distance will be (new distance - old distance) / 2
        dist = (arr[i] - arr[i-1]) /2;
	// in case that distance we found greather than maximum distance we found
	// we make this distance the new one ;)
        if(dist > maxdist) maxdist = dist;
    }
	// last step "important" calc last distance between last city in arr & n
	// example => arr[ 1 , 2 ... , 8 ] n = 12
	// 	      distance from 8 to 12
	// ldist "last distance" will be (length of cites 'n' - 1) - ( last city in arr)
    int ldist = (n-1) - arr[arr.size()-1];
	
	// as last step we return greather one "last distance" or last "max distance" we found
    return (ldist > maxdist) ? ldist : maxdist;"
}
// ==================================================================