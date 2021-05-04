#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

// problem : https://www.hackerrank.com/challenges/equality-in-a-array/problem?h_r=next-challenge&h_v=zen
// solution O(n) =========================================================================================
int equalizeArray(vector<int> arr) {
        //  ===== biggest mean most repeated value :) ======

    // map good for getting all element & how many times repeated in vector & then we get the biggest one :)
    /* 
        MAP structr ===> << key     , value >>
                    ===> << element , how many times in array >>
    */
    std::map<int, int> MAP;

    // when we store the biggest one :)
    int mx = 0;
        
        // loop over each element 
    for (int i = 0; i < arr.size(); i += 1) { // ==> O(n)

        // check if element in map += 1
        if (MAP.find(arr[i]) != MAP.end()) {
            MAP.at(arr[i]) += 1;
        }
        // else insert element with value 1
        else MAP.insert({ arr[i] , 1 });

        // check if current element in map greather than mx :)
        // if greather then we update mx
        if (MAP[arr[i]] > mx) mx = MAP[arr[i]];
    }
        // last step the minum will be the arr size() - biggest element in array 
    return (arr.size() - mx);
}
