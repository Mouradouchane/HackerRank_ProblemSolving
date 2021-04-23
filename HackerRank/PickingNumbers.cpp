
// problem : https://www.hackerrank.com/challenges/picking-numbers/problem
// soultion ==============================================================
/*
#include <iostream>
int main() {
   int n,k,maxl = 0;
    std::cin>>n;
    int arr[100]= { 0 };
    
    for(int i = 0;i<n;i++){
        std::cin>>k;
        arr[k]++;
    }
    
    for(int i = 0;i<n-1;i++){
        if(arr[i]+arr[i+1]> maxl) maxl = arr[i]+arr[i+1];
    }
    std::cout << maxl;
    return 0;
}
*/
// ========================================================================
