//#include<iostream>
//#include<vector>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：K次取反后，求A的最大和。
//    // 思路：这道题不能按照普通思维分类讨论，因为太麻烦了。
//    // 可以对每次取反进行分析：最大限度地保证每轮取反都是A的最大和，这样进行K次后，就可以得到A的最大和
//    // 也就是贪心。很明显保证每次每一个数取反影响都尽可能的小，那这个值绝对就是最小值。
//    // 因为要重复K次，所以最小值可能发生变化。这里不可能每次取反完最小值就排序一次，再观察题目要求，
//    // -100 <= A[i] <= 100，所以这里应该用计数排序。
//    // 总结上面的思路：准备一个201容量的数组，遍历A中每一个元素，数组中的值就是数字存在的个数。
//    // 然后while循环执行K次，里面再写一个while循环跳过值为0的小标，根据题意（不用担心越界问题）。
//    // 当while循环退出时，i指向的就是最小值，这里需要这个最小值的数量-1，反转得到数的位置需要+1，然后继续下一轮循环
//    // 特别注意！并不需要每次从0开始遍历这个数组，用i记录上一次的最小值，这样下一轮就直接从这个最小值开始遍历
//    // 对于负数上面是可行的，而对于正数，也就是此时i>100时，需要把i = 200 - i。
//    int largestSumAfterKNegations(vector<int>& A, int K) {
//        int bucket[201] = { 0 };
//
//        for (auto& i : A) {
//            bucket[i + 100]++;
//        }
//
//        int index = 0;
//        while (K--) {
//            while (bucket[index] == 0) {
//                index++;
//            }
//
//            bucket[index]--;
//            bucket[200 - index]++;
//
//            if (index > 100) {
//                index = 200 - index;
//            }
//        }
//
//        int sum = 0;
//        for (int i = 0; i < 201; i++) {
//            sum += (i - 100) * bucket[i];
//        }
//
//        return sum;
//    }
//};
//
//int main() {
//	return 0;
//}
