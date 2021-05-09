#include <bits/stdc++.h>

using namespace std;
// problem : https://www.hackerrank.com/challenges/chocolate-feast/problem
// solution O(n) =========================================================

int chocolateFeast(int n, int c, int m) {
/*
total_choco hold the maximum number of chocos we can get after using trick
number of chocos he get without promotion will be budget / choco price  => n / c
*/
    int total_choco = std::floor(n/c);
	// trick equal to total 
    int trick = total_choco;
    
/* 
	in each time we use trick , trick will be decrease by 'm' 
	and we increase by '1' as new choco 
 	we keep this process until our trick become 1 or less than 1
*/
    while(trick >= 1){
        trick -= m; 
        trick += 1;
	// we increment the total only in case greather than 0 
        if(trick > 0) total_choco += 1; 
    }
    
    return total_choco;
}
// =========================================================================