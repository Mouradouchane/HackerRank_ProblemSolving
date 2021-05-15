#include<iostream>
#include<algorithm>
#include<vector>

// problem https://www.hackerrank.com/challenges/strange-code/problem
// solution O(n) ==========================================================
long strangeCounter(long t) {
	// value of "t time"
    long val = 0;
	
	// we start loop from time => 1 & value => 3 
	// each time we loop over timers until we get the target timer who contain the "t time"
	// s "second 'timer start'" => all time "s" contain "start of timer" , increase by "value"
	// v "value" => all time value power by 2 "v * 2" 
    for (long v = 3, s = 1; ;  s += v , v *= 2 ) {
        
	// that how we target if time "s" is containt "t time" or not
	// if t between or equal "s" & "s + v" 
	// that mean we found the target timer 
	// example t = 6 , v = 6 , s = 4
	if (t >= s && t <= (s + v)) {
	// value will be "v - (t - s)" example => " 6 - (6 - 4) = 4" 
            val = v - (t - s);
	// then we break this infinity loop 
            break;
        }
    }
    	// return value in "t time"
    return val;
}
// ==========================================================