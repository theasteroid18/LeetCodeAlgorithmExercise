//#include<iostream>
//#include<unordered_map>
//using namespace std;
//
//class Solution {
//public:
//    // һ��ʼ�����������..ϣ�������д�󣬿���һ�ι�
//    // �ðɣ�����һ��ϸ�ڣ���������ˣ����ˣ�������ֱ�ӹ���..
//    bool isIsomorphic(string s, string t) {
//        unordered_map<char, char> s2t;
//        unordered_map<char, char> t2s;
//        int len = s.length();
//        for (int i = 0; i < len; ++i) {
//            char x = s[i], y = t[i];
//            if ((s2t.count(x) && s2t[x] != y) || (t2s.count(y) && t2s[y] != x)) {
//                return false;
//            }
//            s2t[x] = y;
//            t2s[y] = x;
//        }
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}