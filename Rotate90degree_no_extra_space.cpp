#include <bits/stdc++.h> 
void inplaceRotate(std::vector<std::vector<int>>& inputArray){
    int n=inputArray.size();
    int i=0;
    int j=0;    

    while(i<n){
        j=i;
        while(j<n){
            swap(inputArray[i][j],inputArray[j][i]);
            j++;
        }
        i++;
    }

    for(int i=0;i<n/2;i++){
        for(int j=0;j<n;j++){
            swap(inputArray[i][j],inputArray[n-1-i][j]);
        }
    }
    
}

