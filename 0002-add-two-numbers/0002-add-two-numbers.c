/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    // Step 1: Initialize the linked list we will return

    struct ListNode* lSum = malloc(sizeof(struct ListNode));
    struct ListNode* cur1 = l1;
    struct ListNode* cur2 = l2;
    struct ListNode* curSum = lSum;

    int val1 = 0;
    int val2 = 0;
    int carry = 0;

    // Step 2: Parse through linked lists

    while (cur1 != NULL || cur2 != NULL || carry != 0) {

        val1 = (cur1 != NULL) ? cur1->val : 0;
        val2 = (cur2 != NULL) ? cur2->val : 0;

        curSum->val = (val1 + val2 + carry) % 10;
        carry = (val1 + val2 + carry) >= 10 ? 1 : 0;

        if (cur1 != NULL)
            cur1 = cur1->next;
        if (cur2 != NULL)
            cur2 = cur2->next;
        if (cur1 != NULL || cur2 != NULL || carry != 0) {
            struct ListNode* next = malloc(sizeof(struct ListNode));
            curSum->next = next;
            curSum = next;
        }
    }

    curSum->next = NULL;

    return lSum;
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna