class RandomizedSet {
    unordered_map<int,int>hash;
    vector<int>v;
public:
    RandomizedSet() {
    }
    
    bool insert(int val) {
        if(hash.find(val)!=hash.end()) return false;
        v.push_back(val);
        hash[val]=v.size()-1;
        return true;
    }
    
    bool remove(int val) {
    if(hash.find(val)!=hash.end()){
        // v.erase(v.begin()+hash[val]);
        int l=v.size()-1;
        hash[v[l]]=hash[val];
        swap(v[l],v[hash[val]]);
        v.pop_back();
        hash.erase(val);
        return true;
    } 
    return false;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */