void spiralPrint(int **input, int nRows, int nCols)
{
    //Write your code here
    int k,i=0,j=0;
    for(k=0;k<nCols+nRows-1;k++){
        switch(k%4){
            case 0:
              for (j = k / 4; j < nCols - k / 4; j++) {
                cout << input[i][j] << " ";
              }
            j--;
            break;
            case 1:
            for(i=k/4+1;i<nRows-k/4;i++)
            cout<<input[i][j]<<" ";
            i--;
            break;
            case 2:
            for(j=nCols-2-k/4;j>=k/4;j--)
            cout << input[i][j] << " ";
            j++;
            break;
            case 3:
            for(i=nRows-2-k/4;i>k/4;i--)
            cout << input[i][j] << " ";
            i++;
            break;
        }
    }
}