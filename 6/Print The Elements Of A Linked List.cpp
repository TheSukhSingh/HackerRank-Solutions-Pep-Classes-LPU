void printLinkedList(SinglyLinkedListNode* head) {

if (head == NULL) {
        return;
    }
    
    cout << head->data << endl;
    printLinkedList(head->next);
}