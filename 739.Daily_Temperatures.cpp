class MyHashSet
{
private:
    vector<list<int>> hashSet;
    int size = 1e6 + 1;

public:
    MyHashSet()
    {
        hashSet.resize(size);
    }

    int hash(int key)
    {
        return key % size;
    }

    list<int>::iterator Search(int key)
    {
        int i = hash(key);
        return find(hashSet[i].begin(), hashSet[i].end(), key);
    }

    void add(int key)
    {
        if (contains(key))
            return;

        int i = hash(key);
        hashSet[i].push_back(key);
    }

    void remove(int key)
    {
        if (!contains(key))
            return;
        int i = hash(key);
        hashSet[i].erase(Search(key));
    }

    bool contains(int key)
    {
        int i = hash(key);

        if (Search(key) != hashSet[i].end())
            return true;
        return false;
    }
};

// class MyHashSet {
// private:
// vector<int> set;
// public:

//     MyHashSet() {
//         set.resize(1000001, false);
//     }

//     void add(int key) {
//         set[key] = true;
//     }

//     void remove(int key) {
//         set[key] = false;
//     }

//     bool contains(int key) {
//         return set[key];

//     }
// };

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */