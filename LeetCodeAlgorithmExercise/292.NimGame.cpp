//#include<iostream>
//using namespace std;
//
//class Solution {
//public:
//    // 目标：两个人每轮把n减去1-3，先将n变成0的获胜。自己先执行，判断自己能否赢
//    bool canWinNim(int n) {
//        // 如果不是呢？
//        // 4 = 3 2 1 => 对面一定会赢
//        // 5 = 4 3 2 => 可以取到4，凭借上一步可知自己一定会赢
//        // 6 = 5 4 3 => 可以取到4，凭借上一步可知自己一定可以赢
//        // 7 = 6 5 4 => 取4
//        // 8 = 7 6 5 => 看上面三步可知对面一定可以赢
//        // 9 = 8 7 6 => 可以取到8，凭借上一步可知自己一定会赢
//        // 10、11同理，找到规律！！也就是被4整除就一定会输！！
//        return n % 4 != 0;
//
//    }
//};
//
//int main() {
//	return 0;
//}