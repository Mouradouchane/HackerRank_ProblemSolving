#include <iostream>
#include <vector>
#include <algorithm>

// problem : https://www.hackerrank.com/challenges/cut-the-sticks/problem
// solution O(n) ========================================================
std::vector<int> cutTheSticks(std::vector<int> arr) {
    int min = 0;
    std::vector<int> cuts = { (int)arr.size() };

    std::sort(arr.begin(), arr.end());
    for (int i = 1; i < arr.size(); i += 1) {
        if (arr[i] != arr[i - 1]) cuts.push_back(arr.size() - i);
    }

    return cuts;
}
// ======================================================================