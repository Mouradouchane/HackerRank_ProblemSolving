#include <iostream>

// problem : https://www.hackerrank.com/challenges/beautiful-days-at-the-movies/problem?h_r=next-challenge&h_v=zen
// soultion =====================================================================================

// this function just for reversing numbers '10 => 01' :)
int reversDigits(int num){
    int rev_num = 0;
    while (num > 0) {
	// kind of magic here :) :) :)
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

	// s => start
	// e => end
	// k => divisor
int beautifulDays(int s, int e, int k) {
	// BD shortcut for Beautiful Days 
    int BD = 0;
	// current reversed number
    int rd = 0;
    
	// while start not equal end we keep going 
    while(s <= e){

        // reversing first 
        rd = reversDigits(s);
	// then we check if beautiful day or not by using this formula from task descriptions :)
        if((BD - rd)%k == 0) BD +=1; 

        s += 1;
    }
    
    return BD;
}
// ==============================================================================================*  3. INTEGER k
