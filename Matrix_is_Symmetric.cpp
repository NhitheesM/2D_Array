#include <bits/stdc++.h> 
bool isMatrixSymmetric(vector<vector<int>> matrix){
    int r=matrix.size();
    int c=matrix[0].size();
    
    if(r!=c){
        return false;
    }
    
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            if(matrix[i][j]!=matrix[j][i]){
                return false;
            }
    }
    }
    return true;
}