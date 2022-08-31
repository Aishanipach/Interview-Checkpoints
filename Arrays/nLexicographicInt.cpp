
void ins(int k, int n, vector<int> &ans){

    ans.push_back(k);

    for(int i =0;i<=9;i++){
        int j=10*k+i;
        if (j > n) {
            break;
        } else {
            ins(j, n, ans);
        }

    }
}

vector<int> solve(int n) {
    vector<int> ans;
    int lim=9;
    if(n<9)
        lim=n;

    for(int i=1;i<=lim;i++)
        ins(i, n, ans);

    return ans;

}
