Q74: Find the transpose of a matrix.

*
Sample Test Cases:
Input 1:
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*

input:

#include <stdio.h>
int main() {
    int x[50][50]={0};
    int y[50][50]={0};
    int i,j,row,col;
    
    //taking rows and comlumn value
    printf("enter the amount of rows and column: ");
    scanf("%d %d ",&row,&col);
    
    //enter no  in the array
     for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        scanf("%d",&x[i][j]);
    }
    printf("\n\n");
    for (i=0;i<row;i++)
    {
        for (j=0;j<col;j++)
        printf("%4d ",x[i][j]);
        printf("\n");
    }
    printf("\n\n");
    //putting value for transpose
    for (i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        y[j][i]=x[i][j];
    }

      for (i=0;i<col;i++)
    {
        for (j=0;j<row;j++)
        printf("  %4d",y[i][j]);
        printf("\n");
    }


}
