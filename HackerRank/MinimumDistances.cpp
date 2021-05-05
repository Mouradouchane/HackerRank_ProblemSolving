#include <iostream>
#include <vector>
#include <map>

using namespace std;

// problem : https://www.hackerrank.com/challenges/minimum-distances/problem
// solution O(n) ===========================================================
int minimumDistances(vector<int> arr) {
	/* 
	   dist ==> for storing minimum value we get 
	   value 9999 just for the abilitiy of compare & store the minimum value
	   so any big value like 9999 better than -1 
	*/
    int dist = 9999;
	/* 
	 MAP ==> for storing each "value as int" & each "indexed as vector" of int's
	*/
    std::map<int , std::vector<int> > MAP;

    // loop over all element in arr
    for(int a = 0 ; a < arr.size() ; a += 1){ // O(n)
	// if current element in map    // "push new index in vector"
        if(MAP.find(arr[a]) != MAP.end()) MAP[arr[a]].push_back(a); 
	// else that's mean a new element found 
	// soo we insert it to MAP with current index 
	// {a} ==> just vector with current index a 
        else MAP.insert( {arr[a],{a}} );  
        
	// after all that we check in same time 
        if( MAP[arr[a]].size() > 1){
	// if we found a distance <= 2 that mean we found the "minimum distance"
	// then we have to stop & returning "minimum distance"
            if(std::abs(MAP[arr[a]][0] - MAP[arr[a]][1]) <= 2){
                return std::abs(MAP[arr[a]][0] - MAP[arr[a]][1]);
            }
	// else we check if it the minimum one or not
            else{ // that's why we dist must be bigger in start beginning
                if(std::abs(MAP[arr[a]][0] - MAP[arr[a]][1]) < dist){
                    dist = std::abs(MAP[arr[a]][0] - MAP[arr[a]][1]);
                }   
            }
        } 
    }
    	// last step if dist equal to beginning value that's mean there's no minimum
	// soo we can return -1 directlly or we can make dist equal to -1
    if(dist == 9999) dist = -1;
	// otherwise return the minimum distance we found :)
    return dist;
}
// ======================================================================