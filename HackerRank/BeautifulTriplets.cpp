#include <bits/stdc++.h>

// problem : https://www.hackerrank.com/challenges/beautiful-triplets/problem
// solution O(n log(n)*2) =================================================================
int beautifulTriplets(int d, std::vector<int> arr) {
	// counter of all beautiful triplets we found
    int counter = 0;
	// dd is just d * 2 we using it for finding k element in array
    int dd = d * 2;
    	
	// "is j found" for contain the confirmation of founding J in array or not
	// "is k found" the same :)
    bool isJfound = false , isKfound = false;
    
	// loop over all element in arr
    for(int i = 0 ; i < arr.size() ; i += 1){ // O(n)
	// we use 'binary search' to confirm if j value in arr or not
	// j value will be (arr[i] + d)
        isJfound = std::binary_search(arr.begin(),arr.end(),arr[i]+d); // O(n log(n))
	// in case "j not found" => isJfound == false we skip search over 'k' ==> "save execution time :)"
     if(isJfound){ // in case we found j we keep going and looking for 'k'
	// like j same concept 
        isKfound = std::binary_search(arr.begin(),arr.end(),arr[i]+dd); // O(n log(n))
	// in case k found that mean is a 'beautiful triplets' , we increment counter by 1
        if(isKfound){
            counter += 1;
        }
     }
    }
    	// return of how many 'beautiful triplets' in arr as last step :)
    return counter;
}
// =========================================================================