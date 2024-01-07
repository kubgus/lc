// Remove Duplicates from Sorted Array II

#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
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
    ListNode* deleteDuplicates(ListNode* head) {
        while (head != nullptr && head->next != nullptr && head->val == head->next->val) {
            int temp = head->val;
            while (head != nullptr && head->val == temp) head = head->next;
        }
        ListNode* ptr = head;
        while (ptr != nullptr && ptr->next != nullptr && ptr->next->next != nullptr) {
            if (ptr->next->val == ptr->next->next->val) {
                int temp = ptr->next->val;
                while (ptr->next->next != nullptr && ptr->next->val == temp)
                    ptr->next = ptr->next->next;
                if (ptr->next->val == temp) ptr->next = nullptr;
            }
            if (ptr->next != nullptr &&
                ptr->next->next != nullptr &&
                ptr->next->val != ptr->next->next->val)
                ptr = ptr->next;
        }    
        return head;
    }
};

int main() {
    Solution solve;
    ListNode* head = new ListNode(1);
    head->next = new ListNode(1);
    head->next->next = new ListNode(2);
    head->next->next->next = new ListNode(3);
    ListNode* r = solve.deleteDuplicates(head);
    cout << r << endl;
}
