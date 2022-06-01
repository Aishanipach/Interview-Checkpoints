class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for(int i=0;i<matrix.size();i++){
            
            if(matrix[i][0]==target){
                return true;
            }
            
            else if(i+1>=matrix.size()){
               
               break;
            }
            
            else if((matrix[i][0]<target) && (matrix[i+1][0]>target)){
                
                int k=0;
                while(k!=matrix[i].size()-1){
                    k++;
                    if(matrix[i][k]==target)
                        return true;
                }
            }
            
            
        }
        
        int n=matrix.size()-1;
        
        if(target>matrix[n][0]){
            
            int k=0;
                while(k!=matrix[n].size()-1){
                    k++;
                    if(matrix[n][k]==target)
                        return true;
                }
        }
        
        return false;
    }
};
