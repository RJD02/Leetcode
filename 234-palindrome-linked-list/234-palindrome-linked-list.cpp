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
    bool isPalindrome(ListNode* head) {
        string s = "";
        ListNode* temp = head;
        while(temp != NULL) {
            s += to_string(temp->val);
            temp = temp->next;
        }
        cout << s << endl;
        int first = 0, last = s.size() - 1;
        while(first < last) {
            if(s[first] != s[last])
                return false;
            first++;
            last--;
        }
        return true;
    }
};