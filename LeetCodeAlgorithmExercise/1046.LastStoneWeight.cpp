//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//
//class Solution {
//public:
//
//    // Ŀ�꣺ÿ��ѡ��������ʯͷ�������Ⱦ�ȫ����stones���޳����������ȣ�����stones�з���һ����1��-��2���ʯͷ
//    // Ҫ�󷵻����ʣ�µ�һ��ʯͷ�Ĵ�С����������ڷŻ�0
//    // ˼·��1 <= stones[i] <= 1000���������Ȼ����ÿ�β��������ֵ�����С��
//    // ���Ժ���Ȼ��Ȼ�ľ�Ӧ���뵽ʹ��һ�����鱣��ÿ��ʯͷ���������������ÿһ��ʯͷ����������0��ʯͷ
//    // �����������ҵ���һ��͵ڶ����ʯͷ�����ж������Ƿ���Ȳ���Ⱦ�������š�
//    // �ҵ�һ��ʯͷ��ʱ������±�Խ���˾ʹ����Ҳ���ʯͷ��ֱ�ӷ���0
//    // �ҵڶ���ʯͷʱ������±�Խ���˾ʹ����Ҳ����ڶ����ʯͷ��Ҳ����ֻʣ��Ψһ��ʯͷ�ˣ���ֱ�ӷ��ص�һ��ʯͷ�Ĵ�С
//    // ��ɣ���������Ϊ�ռ临�Ӷ�ΪO(1),��������һ��������Ȼд������������ǿռ临�Ӷ���O(n)
//    // ��һ��˼·�������϶�����ôд�ȽϺã���ʹ�ô󶥶������������Զ�������ʵֻҪ���ܹ��Զ���������ݽṹ���У�
//    // �������������󶥶Ѻ���Ȼ���������ݽ�����ʺϡ�
//    // ����������һ���󶥶ѣ���Ԫ�ض����ӽ�ȥ��Ĭ�Ϸ��ʵĶ���ͷ�������Ԫ�ء�
//    // дһ��whileѭ��ֻҪsize>1��ִ����������
//    // 1���õ�topԪ�أ�pop�����õ�topԪ�أ��������õ�����������ʯͷ��
//    // 2���Ƚ�����top�õ�Ԫ��ֵ�Ĵ�С���������Ⱦ��������в���һ����1��top-��2��top��ֵ
//    // ���д����ֵ�������ʱ�ѵ�size==0�ͷ���0�����򷵻ض�ͷԪ�ء���д����ȷʵ�����
//    int lastStoneWeight(vector<int>& stones) {
//        int arr[1000] = { 0 };
//        for (auto& i : stones) {
//            arr[i - 1]++;
//        }
//
//        for (int i = 999, j; 1;) {
//            while (i >= 0 && arr[i] == 0) {
//                i--;
//            }
//            if (i < 0) return 0; // �Ҳ�����ֱ�ӷ���0
//            arr[i]--;   // �ҵ��˾Ͱѵ�ǰ����-1
//            j = i;
//
//            while (j >= 0 && arr[j] == 0) { // ��ʼ�ҵڶ���ʯͷ
//                j--;
//            }
//
//            if (j < 0) return arr[i]; // �Ҳ����ڶ���ʹ���ֻʣ�µ�һ��
//            arr[j]--;
//
//            if (i != j) {
//                arr[i - j - 1]++; // ����һ����С�����ʯͷ
//            }
//
//        }
//
//        return 0;
//    }
//
//    // ʹ�ô󶥶�
//    int lastStoneWeight(vector<int>& stones) {
//        priority_queue<int> pq; // Ĭ�ϴ󶥶�
//        for (int& i : stones) {
//            pq.emplace(i);
//        }
//
//        while (pq.size() > 1) {
//            int first = pq.top();
//            pq.pop();
//            int second = pq.top();
//            pq.pop();
//
//            if (first != second) {
//                pq.emplace(first - second);
//            }
//        }
//        
//        return pq.size() == 0 ? 0 : pq.top();
//    }
//};
//
//int main() {
//	return 0;
//}