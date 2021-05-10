#include <bits/stdc++.h>
using namespcae std;

// problem : https://www.hackerrank.com/challenges/lisa-workbook/problem
// solution O(n*k) =====================================================
int workbook(int  n, int k, vector<int> chp) {
	// total count of special problems 
    int special = 0;
	
    // page size => just "k" how many problems per page we need it for turn page 
    int pagesize = k;
    // page index => for checking if problem is special or not "index == page index"
    int pageindex = 1;
    
	// loop over all chapters :)
    for(int c = 0 ; c < chp.size() ; c += 1){ // O(n)

	// in each chapter we loop over all problems 1 => chop[c]
        for(int problem = 1 ; problem <= chp[c] ; problem += 1){ // O(k)
	    // if problem equal to k+1 that mean we need to turn page & increase k by pagesize
            if(problem == k+1){
		// increase by pagesize 
                k += pagesize;
		// turn page
                pageindex += 1;
            } 
	    // if problem equal to pageindex that mean the problem special :) ;)
            if(problem == pageindex){
		// we add 1 to special counter
                special += 1;
            }
        } // loop O(k) end

	// in each time we to increase k 
        k = pagesize;
	// in each time we need to turn page
	// to make sure not two chapters in same page 
        pageindex +=1;
    }
	
	// return special as last step
    return special;
}
// =============================================================