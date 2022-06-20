bool isSafe(int node, int color[], bool graph[101][101], int n, int col){
    for(int k=0;k<n;k++){
        if(k!=node && graph[k][node]==1 && color[k]== col)
            return false;
    }
    
    return true;
}

bool Solve(int node, int color[],bool graph [101][101], int m, int n ){
    
    if(node==n){
        return true;
    }
    
    for(int i=1; i<m;i++){
        if(isSafe(node, color, graph, n, i)){
            color[node]=i;
            if(Solve(node+1,color, graph, m+1, n)) 
                return true;
            color[node]=0;
            
        }
        
    }
    return false;
}
bool graphColoring(bool graph[101][101], int m, int n) {
    
    int color[n]={0};
    
    if (Solve(0, color, graph, m, n)) return true;
    return false;
}
