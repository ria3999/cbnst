#include<stdio.h>
void main()
{
    int i,j,k,n;
    float a[20][20],c,x[10],eq=0.0;
    printf("\nEnter the order of matrix: ");
    scanf("%d",&n);
    printf("\nEnter the elements of augmented matrix row-wise:\n\n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<(n+1); j++)
        {
            printf("a[%d][%d] : ", i,j);
            fflush(stdin);
            scanf("%f",&a[i][j]);
        }
    }
    for(j=0; j<n; j++)
    {
        for(i=0; i<n; i++)
        {
            if(i>j)
            {
                c=a[i][j]/a[j][j];
                for(k=0; k<n+1; k++)
                {
                    a[i][k]=a[i][k]-c*a[j][k];
                }
            }
        }
    }
    printf("\nUpper Triangular Matrix is:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n+1;j++)
        {
            printf("%f\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\nThe roots are:\n");
    x[n]=a[n][n+1]/a[n][n];
    for(i=n-1;i>=0;i--)
    {

        eq=0.0;
        for(j=i+1;j<n;j++)
        {
             eq=eq+(a[i][j]*x[j]);
        }
        x[i]=(a[i][n]-eq)/a[i][i];
        printf("%f\n",x[i]);

    }
}
