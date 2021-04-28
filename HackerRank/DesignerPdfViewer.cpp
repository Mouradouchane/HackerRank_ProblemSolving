

// problem : https://www.hackerrank.com/challenges/designer-pdf-viewer/problem
// soultion O(n*2) ===========================================================
int designerPdfViewer(vector<int> h, string word) {
	// for storing bigest value of 'x' char
    unsigned int maxValue = 0;
	// the idea is making map of all char with their value & then get the bigest one 
    std::string chars = "abcdefghijklmnopqrstuvwxyz";
	// map for our idea :)
    std::map<char,unsigned int> chars_map;
    	
	// first for-loop , for insert each char with value
    for(unsigned int i = 0 ; i < chars.size() ; i += 1){
        chars_map.insert({chars[i],h[i]});
    }
    	// second for-loop , for get begest value bettween all chars in map
    for(unsigned int i = 0 ; i < word.size() ; i +=1){
        if( chars_map[word[i]] > maxValue) maxValue = chars_map[word[i]];
    }
    	// return will be bigest * string size :)
    return (maxValue * word.size());
}
// ===========================================================================
