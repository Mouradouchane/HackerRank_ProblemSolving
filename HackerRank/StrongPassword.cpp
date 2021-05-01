#include <bits/stdc++.h>

// problem :https://www.hackerrank.com/challenges/strong-password/problem
// solution =============================================================
unsigned int minimumNumber(int n,string pswd) {
    // needed keys for making password strong by default 0
    unsigned int needed = 0;
    
        // this 4 regex for checking every cases for giving right needed thing to make sure password strong
        // nums for detect is there a number or not 
    std::regex nums("[0-9]");
        // for detect is there lower case chars or not
    std::regex l_case("[a-z]");
        // for detect is there upper case chars or not
    std::regex u_case("[A-Z]");
        // for detect special chars => '\\-' only for calculating - as special char not regex so we use \\ :)
    std::regex s_chars("[!@#$%^&*()\\-+]");

        // check all previous regex one by one , any search gone with 'false' that mean it's a weakness in password
        // so we make neede += 1
    if(!std::regex_search(pswd,nums))    needed+=1;
    if(!std::regex_search(pswd,l_case))  needed+=1;
    if(!std::regex_search(pswd,u_case))  needed+=1;
    if(!std::regex_search(pswd,s_chars)) needed+=1;

        // in case the given needed still less than requeriment needed  we just fill needed to be 6 or up
        // -_-
    if(needed+n < 6) needed += 6 - (n+needed);
    
        // last step returning needed if it's 0 or else :)
    return needed;
}
// ======================================================================