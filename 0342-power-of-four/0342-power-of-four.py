class Solution {
public:
    bool isPowerOfFour(int n) {
      int num = n;
      return num > 0 && (num&(num-1)) == 0 && (num & 0x55555555) != 0;
        
    }
};