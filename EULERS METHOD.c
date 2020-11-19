# include<stdio.h>
float func(float x,float y)
{
    return ((x-y)/(x+y));
}
int main()
{
    int i,n;
    float x0,y0,h,xn,x,y;
    printf("\n\n***INPUT***\n\n");
    printf("enter x0,y0,h,xn\n");
    scanf("%f%f%f%f",&x0,&y0,&h,&xn);
    n=(xn-x0)/h+1;
    for(i=1;i<n;i++)
    {
        y=y0+h*func(x0,y0);
        x=x0+h;
        if(x<xn)
        {
            x0=x;
            y0=y;
        }
    }
    printf("\n\n***OUTPUT***\n\n");
    printf("Result is:\n");
    printf("x=%f y=%f",x0,y0);
    return 0;
}
