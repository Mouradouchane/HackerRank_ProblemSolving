#include <iostream>
#include <vector>
//#include <bits/stdc++.h>

using namespace std;
// problem : https://www.hackerrank.com/challenges/bon-appetit/
// soultion ===============================================================
void bonAppetit(vector<int> bill, int k, int b) {
    int annaTotal = 0;
    int total = 0;

    for(int i = 0 ; i < bill.size() ; i += 1){
        if(i == k) continue;
        else{
            total+= bill[i];
        }
    }

    annaTotal = total / 2;

    if(annaTotal == b) std::cout << "Bon Appetit" << std::endl;
    else std::cout << b - annaTotal << std::endl;
}
//========================================================================
