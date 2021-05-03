#include <iostream>
#include <vector>
#include <algorithm>

// problem : https://www.hackerrank.com/challenges/cut-the-sticks/problem
// solution O(n*2) ========================================================
std::vector<int> cutTheSticks(std::vector<int> arr) {
        // when we store all cuts
    std::vector<int> cuts = { (int)arr.size() };
        
        // sorthing for good soultion O(n*2) , by using nice trick ;)
    std::sort(arr.begin(), arr.end());  // O(n)

        // just for over all sticks in array , we start form stick '1' :)
    for (int i = 1; i < arr.size(); i += 1) {  // O(n)

        // if stick i != pervious stick that mean we need to make cuts & push new size
        // but , when you use this trick we don't need to make any cuts
        // just new size will be arr.size - i 
        if (arr[i] != arr[i - 1]) cuts.push_back(arr.size() - i);
    }

        // return cuts 
    return cuts;
}
// ======================================================================