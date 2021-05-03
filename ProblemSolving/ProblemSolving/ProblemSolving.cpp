#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

vector<int> permutationEquation(vector<int> p) {
    vector<int> vals;

    for (int i = 0; i < p.size(); i += 1) {
        int val = p[i];
        val = p[val-1];

        vector<int>::iterator it = p.begin();
        vector<int>::iterator end = p.end();
        int c = 1;

        while (it != end) {
            if (*it == val) {
                vals.push_back(c - 1); 
                break;
            }

             c += 1;
            it += 1;
        }

    }

    return vals;
}

int main() {
    vector<int> r = { 4 ,3 ,5 ,1 ,2 };

    for (int a : permutationEquation(r)) {
        cout << a << '\n';
    }
  
    return 0;
}

