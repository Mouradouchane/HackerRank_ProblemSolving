#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

//using namespace std;

template<typename t> class node {
public :
    node(){}
    t value;
    node* next = NULL;
};

template<typename t> class linkedList {
public:
    linkedList(){}
    node<t>* first = NULL;
    node<t>* last  = NULL;

    void push_back(t value) {;
        node<t>* newNode = new node<t>; 
                 newNode->value = value;

        if (first == NULL && last == NULL) {
            first = newNode;
            last = newNode;
            first->next = last;
            return;
        }
        else{
            last->next = newNode;
            last = newNode;
        }
    }

    void showAll(){
        node<t>* tempNode = first;
  
        while (tempNode != NULL){
            std::cout << tempNode->value << std::endl;
            tempNode = tempNode->next;
        } 
        
    }
};


int main() {
    
    linkedList<int> firstOne;

    firstOne.push_back(14);
    firstOne.push_back(16);




    firstOne.showAll();


    return 0;
}

