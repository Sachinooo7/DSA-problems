class MinStack {
public:
        map<int,int>s;
        vector<int>arr;
    MinStack() {
        
    }
    
    void push(int val) {
        arr.push_back(val);
        s[val]++;
    }
    
    void pop() {
        int t=arr.back();
        arr.pop_back();
        s[t]--;
        if(s[t]==0) s.erase(t);
        
    }
    
    int top() {
        return arr.back();
    }
    
    int getMin() {
        auto t=s.begin();
        return t->first;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */