/*
https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1/
*/

bool detectLoop(Node* head)
{
    // your code here
    Node *slow, *fast;
    slow = head;
    fast = head;
    while(fast!=NULL && fast->next!= NULL)
    {
        fast= fast->next->next;
        slow= slow->next;
        if(slow == fast)
        {
            return 1;
        }
    }
    return 0;
}

