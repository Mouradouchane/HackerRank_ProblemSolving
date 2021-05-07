
// problem : https://www.hackerrank.com/challenges/halloween-sale/problem
// solution O(n) ========================================================
int howManyGames(int price , int discount , int lastdiscount , int budget) {
    int total = 0;
    
	// while budget greather or equal price , we keep going & selling games :)
    while(budget >= price){
	// count new game
        total += 1;
	// sub current price from budget 
        budget -= price;
	// new price will be the biggest price :)
        price = std::max(price-discount , lastdiscount);
    }
	// last step return total games we are buying 
    return total;
}
// ======================================================================