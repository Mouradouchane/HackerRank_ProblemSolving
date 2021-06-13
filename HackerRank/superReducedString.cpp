#include <iostream>
#include <string>

// problem : https://www.hackerrank.com/challenges/reduced-string/problem
// soultion =============================================================
string superReducedString(string s) {
	// normal looop over all char's in string
    for (int i = 0; i < s.size(); i += 1) { // O(n)
	// in case tow char's equal  
        if (s[i] == s[i + 1]) {
		// erase both of them 
            s.erase(i, 2);
		// and call function agian for starting from scartch
		// then store result in s and keep going :)
            s = superReducedString(s);
        }
    }
      // last step if empty we return "Empty..." else we return 's'
    return (s == "") ? "Empty String" : s;
}
// ======================================================================