class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int s1 = INT_MAX, s2 = INT_MAX;
    for(auto p: prices){
        if(s1 > p) { s2 = s1; s1 = p; }
        else if(s2 >= p) { s2 = p; }
    }
    if(s1 + s2 <= money ) return money - (s1 + s2);
    return money;
    }
};