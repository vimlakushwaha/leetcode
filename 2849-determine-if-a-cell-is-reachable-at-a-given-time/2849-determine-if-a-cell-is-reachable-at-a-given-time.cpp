class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx ==fx and sy==fy){
          return (t != 1);
        }
        fx-=sx;fy-=sy;
        fx = abs(fx);fy= abs(fy);
        int d = min(fx,fy);
        fx -=d;fy-=d;
        int ans = d+fx+fy;
        if (ans<=t){
           return true;
        }
        return false;
    }
};