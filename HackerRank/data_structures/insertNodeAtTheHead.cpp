

// https://www.hackerrank.com/challenges/insert-a-node-at-the-head-of-a-linked-list/problem
// solution ============================================

SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* &llist, int data) {
	// in case head is null 'empty linked list'
	// return new node with data as new head	
	if(llist == NULL) return new SinglyLinkedListNode(data);
    
	// else : we made new node
    	SinglyLinkedListNode* newh = new SinglyLinkedListNode(data);
	// push old linked list to that new node
    	newh->next = llist;
    
	// return new linked list with new head
    	return newh;
}

// ======================================================