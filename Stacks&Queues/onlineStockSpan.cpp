class StockSpanner {
public:
    vector<int> stocks;
    stack<int> st;
    int i =0;
    StockSpanner() {
        int x;
        next(x);
    }
    
  
       int next(int price) {
        stocks.push_back(price);
       
        int res = 0;
        
                while(st.size()>0 && stocks[st.top()]<=stocks[i])
                    st.pop();
                if(st.size()>0)
                    res=st.top();
                else
                    res=-1;
            //
            st.push(i);
        //
        i++;
        int ans;
        if(res!=-1)
            ans = stocks.size()-1-res;
        else
            ans= stocks.size()-1;
        return ans;
    }
}; 
   
/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */
