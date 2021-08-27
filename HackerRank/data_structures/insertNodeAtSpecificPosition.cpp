
// soultion : https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem?h_r=next-challenge&h_v=zen
// problem ====================================================

SinglyLinkedListNode* 
insertNodeAtPosition(SinglyLinkedListNode* &llist, int data, unsigned int position) {
    	// in case linked list is empty 
	if(llist == NULL) return new SinglyLinkedListNode(data);
    
	// i : counter in loop for detecting position where to insert
    int i = 1;
	// temp : for loop over all
    SinglyLinkedListNode* temp = llist;
    
	// loop over all
    while(temp != NULL){
	// in case we found position
        if(i == position){
		// cut linked list in half 
            SinglyLinkedListNode* ttemp = temp->next;
		// insert new node between tow halfs
            temp->next = new SinglyLinkedListNode(data);
		// combine linked list 
            temp->next->next = ttemp;
		// & stop
            break;
        }
        
	// else keep looking 
        temp = temp->next;
        i += 1;
        
   
    }
    
    
    return llist;
}
// ======================================================