#include <bits/stdc++.h>

// problem : https://www.hackerrank.com/challenges/library-fine/problem
// soultion O(1) ======================================================
int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) {
        // unsigned just be sure to prevent all negative values :)
        // fine = 0 , default value for user 'no pay' :)
    unsigned int fine = 0;

        // in case user delivery 'y1' is greater than date delivery 'y2'
        // then the cost will be 10,000
    if(y1 > y2) return 10000;

        //  in case delivery date is greater in year & mouth 
        // then the user will pay for delay month  ==> ( 500 * ( delay month ) ) 
    if(m1 > m2 && y1 >= y2) return  500 * (m1 - m2);

        // in case delivery date is greater in year & mouth & day
        // then the user will pay for delay day ==> ( 500 * ( delay day ) ) 
    if(d1 > d2 && m1 >= m2 && y1 >= y2) return  15 * (d1 - d2);
    
        // else return will be 0 no pay :)
    return fine;
}
// ====================================================================