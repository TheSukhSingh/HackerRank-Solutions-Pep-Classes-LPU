/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    int cnt=1;
    SinglyLinkedListNode *nptr = (SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    nptr->data = data;
    SinglyLinkedListNode *tmp;
    if(position==0)
    {
        nptr->next = head;
        head = nptr;
        return head;
    }
    tmp = head;
    while(cnt<position)
    {
        tmp=tmp->next;
        cnt++;
    }
    nptr->next=tmp->next;
    tmp->next = nptr;
    return head;
}