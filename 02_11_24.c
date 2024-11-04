// Is Linked List Length Even?
bool isLengthEven(struct Node **head)
{
    struct Node *temp = *head; // Dereference to get the actual head node
    int count = 0;

    // Traverse the list and count nodes
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    // Check if count is even
    return count % 2 == 0;
}