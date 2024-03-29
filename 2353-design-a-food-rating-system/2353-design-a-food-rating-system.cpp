 struct ComparePairs
{
    bool operator()(const pair<int, string> &p1, const pair<int, string> &p2)
    {
        if (p1.first != p2.first)
            return p1.first < p2.first; // food with the highest rating will be at the top

        return p1.second > p2.second; // if rating is same, then food with that comes first in alphabetical order gets higher priority
    }
};

class FoodRatings
{
public:
    unordered_map<string, priority_queue<pair<int, string>, vector<pair<int, string>>, ComparePairs>> m;
    unordered_map<string, int> r;
    unordered_map<string, string> c;

    FoodRatings(vector<string> &foods, vector<string> &cuisines, vector<int> &ratings)
    {

        for (int i = 0; i < foods.size(); ++i)
        {
            c[foods[i]] = cuisines[i];
            m[cuisines[i]].push({ratings[i], foods[i]});
            r[foods[i]] = ratings[i];
        }
    }

    void changeRating(string food, int newr)
    {
        r[food] = newr;
        string cs = c[food];
        m[cs].push({newr, food});
    }

    string highestRated(string cuisine)
    {
        pair<int, string> p;
        while (1)
        {
            p = m[cuisine].top();

            if (r[p.second] != p.first)
                m[cuisine].pop();
            else
                return p.second;
        }
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */