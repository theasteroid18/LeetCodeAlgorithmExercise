//#include<iostream>
//using namespace std;
//
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//    
//};
//
//class Solution {
//public:
//    // Ŀ�꣺���ظ���������ʾ���ֵ� ʮ����ֵ 
//    // ˼·��������������
//    int getDecimalValue(ListNode* head) {
//        int res = 0;
//        while (head) {
//            res <<= 1;
//            res += head->val;
//            head = head->next;
//        }
//
//        return res;
//    }
//};
//
//int main() {
//	return 0;
//}