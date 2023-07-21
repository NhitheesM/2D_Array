#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	int r=matrix.size();
	int c=matrix[0].size();
	int result[r][c];

	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			result[i][j]=matrix[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(matrix[i][j]==0){
				for(int k=0;k<r;k++){
					result[k][j]=0;
				}
				for(int k=0;k<c;k++){
					result[i][k]=0;
				}
			}
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			matrix[i][j]=result[i][j];
		}
	}
}
