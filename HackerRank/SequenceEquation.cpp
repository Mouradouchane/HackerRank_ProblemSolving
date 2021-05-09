
// problem : https://www.hackerrank.com/challenges/permutation-equation/forum
// solution O(n²) ===========================================================
vector<int> permutationEquation(vector<int> p) {
    std::vector<int> indexes; // just vector hold all indexed we found
		
    	// in each time we go until we get the value equal to N+1
	// then we stop
    for(int N = 0 ; N < p.size() ; N += 1){ // O(n)
		
        for(int i = 0 ; i < p.size() ; i += 1){ // O(n)
	// in case p[ p[i] - 1 ] equal to N+1 
	// then we push it to vector & break loop
            if(p[p[i]-1] == N+1){
                indexes.push_back(i+1);
                break;
            }
						
        }
    }
    	// return indexes as last step :)
    return indexes;
}
// ==========================================================================