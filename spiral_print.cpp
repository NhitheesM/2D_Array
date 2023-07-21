void spiralPrint(int **input, int nRows, int nCols)
{
    int n=nRows*nCols;
    int result[n];

    int index=0;
    int rowMin=0;
    int colMin=0;
    int rowMax=nRows;
    int colMax=nCols;
    while(index<n){
      for (int i = colMin; i < colMax; i++) {
        result[index] = input[rowMin][i];
        index++;
      }
      
      for (int i=rowMin+1; i <rowMax; i++){
        result[index] = input[i][colMax-1];
        index++;
      }
      for(int i=colMax-2;i>=colMin;i--){
        result[index] = input[rowMax-1][i];
        index++;
      }
      for(int i=rowMax-2;i>rowMin;i--){
        result[index] = input[i][colMin];
        index++;
      }
      rowMin++;
      colMin++;
      rowMax--;
      colMax--;
      


    }
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
}
