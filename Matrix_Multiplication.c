#include<stdio.h>
int main()
{
    int r1, c1, r2, c2;

    printf("Enter the number of rows and columns of Matrix M:\n");
    scanf("%d%d", &r1, &c1);

    printf("Enter the number of rows and columns of Matrix N:\n");
    scanf("%d%d", &r2, &c2);

    int M[r1][c1], N[r2][c2], multiply[r1][c2], i, j, k, sum=0;



    if(r2!=c1)
        printf("The multiplication isn't possible.");

    else
    {
        printf("Enter the elements of matrix M:\n");
        for(i=0; i<r1; i++)
            for(j=0; j<c1; j++)
            scanf("%d", &M[i][j]);


        printf("Matrix M is:\n");
        for(i=0; i<r1; i++){
            for(j=0; j<c1; j++)
            printf("\t%d",M[i][j]);
     printf("\n");}




    printf("Enter the elements of matrix N:\n");
    for(i=0; i<r2; i++)
        for(j=0; j<c2; j++)
        scanf("%d", &N[i][j]);


    printf("Matrix N is:\n");
    for(i=0; i<r2; i++){
        for(j=0; j<c2; j++)
        printf("\t%d",N[i][j]);
        printf("\n");}



    for (i=0;i<r1;i++){
        for (j=0;j<c2;j++){
        for (k=0;k<r2;k++){
          sum = sum + M[i][k]*N[k][j];
        }
        multiply[i][j] = sum;
        sum = 0;
      }
    }




   printf("The resultant matrix is:\n");

    for (i=0;i<r1;i++){
      for (j=0;j<c2;j++)
        printf("%d\t", multiply[i][j]);

      printf("\n");}
    }

  printf("\n\nThank you for using this program!");
  
  return 0;
}
