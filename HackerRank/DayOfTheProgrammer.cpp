#include <bits/stdc++.h>

using namespace std;

// problem : https://www.hackerrank.com/challenges/day-of-the-programmer/problem
// soultion ====================================================================
string dayOfProgrammer(int year) {

    if(year == 1918){
        return "26.09.1918";
    }
    
    if(year <= 1917 && year % 4 == 0 || year % 4 == 0 && year % 100 != 0){
        return "12.09."+ std::to_string(year);
    }
    if(year >  1918 && year % 400 == 0 || year % 4 == 0 && year % 100 != 0){
        return "12.09."+ std::to_string(year);
    }
    
    return "13.09."+ std::to_string(year);        
    
}
// =============================================================================

