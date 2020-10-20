#include<stdio.h>
int main()
{
    int r,c;
    printf("Enter the number of rows and columns of the matrices:\n");
    scanf("%d%d",&r,&c);

    int M[r][c], N[r][c], sum[r][c], i, j, k;


    printf("Enter the elements of matrix M:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &M[i][j]);
        }
    }
    printf("Matrix M is:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\t%d",M[i][j]);
        }
     printf("\n");
    }



    printf("Enter the elements of matrix N:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            scanf("%d", &N[i][j]);
        }
    }
    printf("Matrix N is:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("\t%d",N[i][j]);
        }
     printf("\n");
    }


    printf("The resultant matrix is:\n");
    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
        sum[i][j] = M[i][j]-N[i][j];
          printf("\t%d", sum[i][j]);
        }
    printf("\n");
    }

    printf("\n\nThank you for using this program!");

    return 0;
}
