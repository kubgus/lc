// Remove Duplicates from Sorted List

#include <iostream>

using namespace std;

// singly linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
    ~ListNode() { delete next; }
};

ostream &operator<<(ostream& os, ListNode* sll) {
    if (sll == nullptr) {
        os << "[]";
        return os;
    }
    os << '[';
    while (sll->next != nullptr) {
        os << sll->val << ',';
        sll = sll->next;
    }
    os << sll->val << ']';
    return os;
}

class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
        ListNode *ptr = head;
        while (ptr != nullptr && ptr->next != nullptr) {
            if (ptr->val == ptr->next->val)
                ptr->next = ptr->next->next;
            else ptr = ptr->next;
        }
        return head;
    }
};

int main() {
    Solution solve;
    ListNode *head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    head->next->next->next->next = new ListNode(3);
    head->next->next->next->next->next = new ListNode(3);
    ListNode *final = solve.deleteDuplicates(head);
    cout << final << endl;
    delete head;
}
