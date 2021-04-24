#include <iostream>
#include <vector>
#include <string>

using namespace std;

// problem : https://www.hackerrank.com/challenges/angry-professor/problem
// soultion ==============================================================
string angryProfessor(int k, vector<int> a) {
	// arv mean students come in time 
    int  arv = 0;
	// s ==> student :)
    for(int s = 0 ; s < a.size() ; s +=1){
	// if student <= 0 that mean he come in time
        if(a[s] <= 0) arv+=1;
    }
	
	// if all sutdents who comes in perfect time >= number of students professor want 
	// class not stop , then we reutrn 'NO' , else that mean class stop 'YES'
    return (arv >= k ? "NO" : "YES");
}
// =======================================================================
