SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
 
 SinglyLinkedListNode *newN = new SinglyLinkedListNode(data);
 newN->next = llist;
 return newN;

}