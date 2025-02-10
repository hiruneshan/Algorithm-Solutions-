class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        int reversedNum = 0;
        int originalNum = x;

        while (x != 0) {
            reversedNum = reversedNum * 10 + x % 10;
            x /= 10;
        }

        return reversedNum == originalNum;
    }
};
