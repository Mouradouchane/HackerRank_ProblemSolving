#include <bits/stdc++.h>

// problem : https://www.hackerrank.com/challenges/electronics-shop/problem
// soultion ===============================================================
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int spend = 0;
    
	// sorting keybords & drives for getting max prices
    std::sort(keyboards.begin(),keyboards.end());
    std::sort(drives.begin(),drives.end());

	// if budget less than low prices we reutrn -1 
    if(b < (keyboards[0] + drives[0])) return -1;

	// nested loop for check each value with others
	// we start from back that because we sorting prices from min to max  
    for(int k = keyboards.size() ; k >= 0 ; k -= 1){
        for(int d = drives.size() ; d >= 0 ; d -= 1){
		// in case current price greather than old or grather than or equal budget
		// we save it as new max value 
            if(b >= (keyboards[k] + drives[d]) && spend < (keyboards[k] + drives[d])){
                spend = (keyboards[k] + drives[d]);
            }
        }
    }

    return spend;
}
// ========================================================================
