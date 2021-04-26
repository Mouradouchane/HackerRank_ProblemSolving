#include <bits/stdc++.h>
using namespace std;

// problem : https://www.hackerrank.com/challenges/repeated-string/problem
// soultion ==============================================================
long repeatedString(string s, long n) {
	// in case s = 'a'
    if(s.size() < 1 && s[0] == 'a') return n;
	// for store last substring important for correct calculating
    string S ="";
	// k => store last substring length
	// as => total a's 
    long k = 0 , as = 0;
	
	// first loop just for getting how many a's in s
    for(long i = 0; i < s.size();i+=1){
        if(s[i] == 'a') as+=1;
    }
	// if a's 0 return is 0 :)
    if(as == 0) return 0;
	
	// else we calculating how many a's in 'n' length 
	/*
	 for example : n = 10 & s = "aba"  
		       as = as * floor( n/s.size() ) => 2 * floor( 10 / 3 ) = 6 
	*/
    as = as * (floor(n/s.size()));
	
	// substring size is how many s in 'n' length 
	/*
	  for example : n = 10 & s.len is 3
		k = n - ( floor( n/s.size() ) * s.size() )
		k = 10 - (floor( 10/3 ) * 3) = 1
		
	*/ // soo substring length must be 1
    k = n - (floor(n/s.size()) * s.size());
	// S = substring we want for last operation
    S = s.substr(0,k);

	// last operation is get how many a's in substring & updating a's value
    for(long i = 0 ; i < S.size() ; i +=1){
        if(S[i] == 'a') as +=1;
    }

    return as;
}
// =======================================================================
