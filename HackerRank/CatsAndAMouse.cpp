#include <bits/stdc++.h>

// problem : https://www.hackerrank.com/challenges/cats-and-a-mouse/problem
// soultion =========================================
string catAndMouse(int catA, int catB, int mouse) {
	// by default return will be "Mouse C"
    std::string rslt = "Mouse C";
	// calculating distance between cat A & mouse & cat B & mouse
	// std::abs just for switch value in case come negative :)
    int distanceA = std::abs(mouse - catA);
    int distanceB = std::abs(mouse - catB);

	// compare wichone closer to mouse  
    if(distanceA < distanceB) rslt = "Cat A";
    if(distanceB < distanceA) rslt = "Cat B";
    
    return rslt;
}
// ==================================================
