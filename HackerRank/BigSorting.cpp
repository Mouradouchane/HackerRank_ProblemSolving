// problem : https://www.hackerrank.com/challenges/big-sorting/problem
// help ==> https://github.com/kasparsklavins/bigint/tree/master/src

// soultion O(n log n) =======================================================
	// this code depeneding "Dodecahedron namespace" in link above

	// normal comaprison function for sorting depending Bigint in line
bool comp(string &a , string &b){
	// bigint & name space in link copying it & using it :) 
    Dodecahedron::Bigint A(a);
    Dodecahedron::Bigint B(b);
    
    return (A < B);
}
	// soultion is a normal & simple sorting & std::sort & big interges in comparison
vector<string> bigSorting(vector<string> unsorted) {
    std::sort(unsorted.begin(),unsorted.end(),comp); // sort o(n log n)
    return unsorted; // return sorted vector as last step :)
}
// ===========================================================================