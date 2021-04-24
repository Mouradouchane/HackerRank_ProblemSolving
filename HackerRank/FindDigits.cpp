#include <bits/stdc++.h>

// problem : https://www.hackerrank.com/challenges/find-digits/problem
// soultion ==========================================================
int findDigits(int n) {
	// dt ==> save total valids digits we find 
	// temp ==> just temp for calculating & check 
    int dt = 0 , temp = 0;
	// converting number to string as first step
    std::string nstr = std::to_string(n);    
    	// loop on each char as number in string  
    for(int s = 0 ; s < nstr.length() ; s +=1 ){
	// converting char to int 
        temp = nstr[s] - '0';
	// check if 0 or mod != 0
        if(temp == 0 || n % temp != 0) continue;
	// else that mean the digit is valid
        else dt +=1;  
    }
    
    return dt;
}
// ===================================================================
