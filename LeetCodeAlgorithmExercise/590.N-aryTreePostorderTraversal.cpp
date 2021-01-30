//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Node {
//public:
//    int val;
//    vector<Node*> children;
//
//    Node() {}
//
//    Node(int _val) {
//        val = _val;
//    }
//
//    Node(int _val, vector<Node*> _children) {
//        val = _val;
//        children = _children;
//    }
//};
//
//class Solution {
//public:
//    // ������ĺ������..̫���ˣ�ֱ��һ�ι�..
//    vector<int> postorder(Node* root) {
//        vector<int> res;
//
//        dfs(root, res);
//
//        return res;
//    }
//
//    void dfs(Node* root, vector<int>& res) {
//        if (!root) {
//            return;
//        }
//
//        for (auto node : root->children) {
//            dfs(node, res);
//        }
//
//        res.push_back(root->val);
//    }
//};
//
//int main() {
//	return 0;
//}