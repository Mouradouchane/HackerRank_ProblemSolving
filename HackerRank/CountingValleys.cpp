
#include <iostream>
#include <string>

// problem : https://www.hackerrank.com/challenges/counting-valleys/problem
// soultion ===============================================================
int countingValleys(int steps, string path) {
	// number of total matched valleys :)
    int valleys = 0;
	// cp shortcut for "current position" just take for detecting if we are up to 0 or down 
	// we need it for detecting start point of each valley :) 
    int cp = 0;

	// hints !!!!!
	// ===> each U mean +1 , each D mean -1
	// ===> each valley 'start from 0 & end to 0'


	// check if first position U or D
    if(path[0] == 'U') cp +=1;
    else cp -=1;
        
	// looping over all position in path
    for(int c = 1; c <= path.size(); c += 1){

	// if cp -1 that mean "start of valley"
        if(cp == -1){
		// temp just for calculating width of valley
            int temp = cp;

		// loop for calculating
            for(int s = c ;s <= path.size() ; s +=1){
                if(temp == 0){ // if temp == 0 that mean the end of valley :)
                    valleys +=1;
                    cp = temp; // temp is a new position  
		// and c in main loop equal end of value , we need to jump all elements in path that why c = s
                    c = s; 
                    break;
                } 

		// if we are still in valley we keep calculating :)
                if(path[s] == 'U') temp +=1;
                else temp -=1; 
            }
        }

	// if we are not in valley we keep moving :)
        if(path[c] == 'U') cp +=1;
        else cp -=1;
    }
    
    return valleys;
}
// ========================================================================
