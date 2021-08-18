#include <vector>
#include <iostream>

// problem :https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list/problem
// soultion ========================================================

void printLinkedList(SinglyLinkedListNode* head) {
	// a simple copy of linked list "head/first"
    SinglyLinkedListNode* temp = head;

	// loop over all & print 
    while(temp != NULL){
        cout << temp->data << '\n';
	// going to the next one in linked list
        temp = temp->next;
    }

}

// =================================================================