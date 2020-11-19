# include<stdio.h>
float func(float x)
{
    float temp;
    temp=1/(1+(x*x));
    return temp;
}
int main()
{
    float x0,xn,s=0,sum2=0,sum3=0,h;
    int n,i;
    printf("\n\n***INPUT***\n\n");
    printf("Enter value of x0,xn,n\n");
    scanf("%f%f%d",&x0,&xn,&n);
    s=func(x0)+func(xn);
    h=(xn-x0)/n;
    for(i=1;i<n;i++)
    {
        if(i%3==0)
            sum2=sum2+func(x0+i*h);
        else
            sum3=sum3+func(x0+i*h);
    }
    s=((s+3*(sum3)+2*(sum2))*3*h)/8;
    printf("\n\n***OUTPUT***\n\n");
    printf("Result is : %f",s);
    return 0;
}
