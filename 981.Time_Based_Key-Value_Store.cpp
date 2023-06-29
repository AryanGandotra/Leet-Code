class TimeMap
{
public:
    // TimeMap() {
    //     unordered_map<string,vector<pair<string,int>>> map1;
    // }

private:
    unordered_map<string, vector<pair<string, int>>> map1;

public:
    void set(string key, string value, int timestamp)
    {
        map1[key].push_back({value, timestamp});
    }

    string get(string key, int timestamp)
    {
        int s = 0;
        int e = (map1[key].size()) - 1;
        int mid = s + (e - s) / 2;
        string res = "";

        while (s <= e)
        {

            mid = s + (e - s) / 2;

            if (map1[key][mid].second <= timestamp)
            {
                res = map1[key][mid].first;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        return res;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */