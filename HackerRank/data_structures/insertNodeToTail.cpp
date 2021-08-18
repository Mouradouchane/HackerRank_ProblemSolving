#include <vector>
#include <iostream>

// problem : https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem?h_r=next-challenge&h_v=zen
// soultion ==============================

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int Data) {
	// in case head null we return new head with data
    if (head == NULL) {
        head = new SinglyLinkedListNode(Data);
        return head;
    }
	
	// else we make "a copy of head for loop" over all
    SinglyLinkedListNode* temp = head;
	
	// new pointer node with data for insert it tail of linked list
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(Data);
	
	// loop over all
    while (temp != NULL) {
	// in case next is null that mean we are in tail
        if (temp->next == NULL) {
		// push new node & break :)
            temp->next = newNode;
            break;
        }
	// else we keep going
        else temp = temp->next;
    }

	// return head represent the hole linked list 
    return head;
}

// =======================================