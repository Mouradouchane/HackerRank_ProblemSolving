#include <bits/stdc++.h>

using namespace std;

// problem : https://www.hackerrank.com/challenges/save-the-prisoner/problem?h_r=next-challenge&h_v=zen
// soultion ===========================================================================================
int saveThePrisoner(int prisoners, int sweets, int S) {
  	// just this magic formula is the soultion -_-
    return ((sweets+S-2)%prisoners)+1;
}
// ====================================================================================================
