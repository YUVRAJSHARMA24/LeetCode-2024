/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNodes(ListNode* head) {
        ListNode* curr = head;
        stack<ListNode*>st;

        while(curr != NULL)
        {
            while(!st.empty() && curr->val > st.top()->val) st.pop();
            
            st.push(curr);
            curr = curr->next;
        }

        ListNode* next = NULL;
        while(!st.empty())
        {
            curr = st.top();
            st.pop();

            curr->next = next;
            next = curr;
        }

        return curr;
    }
};
