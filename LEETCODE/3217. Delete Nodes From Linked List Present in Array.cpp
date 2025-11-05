class Solution
{
public:
    ListNode *modifiedList(vector<int> &nums, ListNode *head)
    {
        // Step 1: Store nums in a set for fast lookup
        unordered_set<int> st(nums.begin(), nums.end());

        // Step 2: Use dummy node to simplify head handling
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *prev = dummy;
        ListNode *curr = head;

        // Step 3: Traverse and remove unwanted nodes
        while (curr)
        {
            if (st.count(curr->val))
            {
                prev->next = curr->next; // remove node
            }
            else
            {
                prev = curr;
            }
            curr = curr->next;
        }

        // Step 4: Return modified list
        return dummy->next;
    }
};