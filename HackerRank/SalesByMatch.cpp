#include <bits/stdc++.h>

// problem : https://www.hackerrank.com/challenges/sock-merchant/
// soultion ====================================================================
int sockMerchant(int n, vector<int> ar) {
    int matchedSocks = 0;
    std::map<int , std::vector<int>> socks;
    for(auto &sock : ar){
        socks[sock].push_back(sock);
    }
    
    for(auto &socktype : socks){
        for(auto &pair : socktype.second){
            if(socktype.second.size() % 2 != 0) socktype.second.pop_back();
            else break;
        }
        matchedSocks += socktype.second.size()/2;
    }
    return matchedSocks;
}
// =============================================================================
