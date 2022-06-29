class MinStack {
public:
     stack <pair<int,int>> st;
    MinStack() {
       
    }
    
    void push(int val) {
        if(st.empty() || val<st.top().second)
                st.push(make_pair(val,val));
        else
            st.push(make_pair(val,st.top().second));
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};
