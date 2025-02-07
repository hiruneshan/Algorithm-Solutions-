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

#include <iostream>
#include "ListNode.h"
#include "add_two_numbers.h"

class Solution {
public:
    long long listToNumber(ListNode* head) {
        long long num = 0, place = 1;
        while (head) {
            num += head->val * place;
            place *= 10;
            head = head->next;
        }
        return num;
    }

    ListNode* numberToList(long long num) {
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;
        if (num == 0) return new ListNode(0);

        while (num > 0) {
            current->next = new ListNode(num % 10);
            num /= 10;
            current = current->next;
        }
        return dummy->next;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        long long num1 = listToNumber(l1);
        long long num2 = listToNumber(l2);
        long long sum = num1 + num2;
        return numberToList(sum);
    }
};
