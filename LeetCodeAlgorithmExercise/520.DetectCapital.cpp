//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    /*
//    *   ֱ�ӿ��ٷ����ͣ�
//    *   ȫ����ĸ���Ǵ�д������"USA"��
//    *   ������������ĸ�����Ǵ�д������"leetcode"��
//    *   ������ʲ�ֻ����һ����ĸ��ֻ������ĸ��д�� ���� "Google"��
//    */
//    // �����������������ɴ�д��Сд������ĸ��ɵķǿյ��ʡ�
//    // ˼·��һ��forѭ���������м䰴�����������жϼ���    
//    bool detectCapitalUse(string word) {
//        // ����ʵ�֣�ֱ��ȥ��һ���ַ����ж��Ǵ�д����Сд
//        // ����Ǵ�д����ô���жϵڶ��ַ���
//        //      ����Ǵ�д����ô�������е��ַ���Ӧ�ô�д
//        //      �����Сд����ô������ַ�ȫӦ����Сд
//        // �����Сд������������ַ���Ӧ����Сд
//
//        // �����������
//        if (word.size() < 2) {
//            return true;
//        }
//       
//        // ���������˼��һһʵ�ּ���
//        for (int i = 1; i < word.size(); i++) {
//            if (word[0] <= 'Z') {
//                // ����ĸ��д
//                if (word[1] <= 'Z') {
//                    // �ڶ�����ĸ��д
//                    if (word[i] > 'Z') {
//                        return false;
//                    }
//                }
//                else {  // �ڶ�����ĸСд
//                    if (word[i] <= 'Z') {
//                        return false;
//                    }
//                }
//            }
//            else {
//                if (word[i] <= 'Z') {
//                    return false;
//                }
//            }
//        }
//
//        // Ĭ�Ϸ���true
//        return true;
//    }
//};
//
//int main() {
//	return 0;
//}