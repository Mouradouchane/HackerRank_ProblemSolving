#include <iostream>
#include <vector>

using namespace std;

// problem : https://leetcode.com/problems/two-sum/submissions/
// soultion O(n²) ===================================================
 vector<int> twoSum(vector<int>& nums, int target) {
        
	// for every number we need to loop over all others 
        for(int h = 0 ; h < nums.size() ; h +=1 ){ // O(n)
		
            for(int w = 0 ; w < nums.size() ; w +=1 ){ // O(n)
	// in case we get to numbers in nums[] equal to target we stop and
	// return tow indexes in vector 
                if(nums[h] + nums[w] == target && h != w) return {h,w};
            } 
        }
       
   	// in case not found we return an empty vector
    return {}; 
}	
// ==================================================================