# include<stdio.h>
float func(float x)
{
    return(x*log10(x)-1.2);
}
float dfunc(float x)
{
    return(0.4343*(log(x)+1));
}
void main()
{
    float a,b,f1,f2,x0;
    printf("\n\n***INPUT***\n\n");
    printf("Enter the initial approximation");
    //it is 2.7 in this case
    scanf("%f",&x0);
    float d,c;
    c=x0;
    do
    {
        d=c;
        c=d-(func(d)/dfunc(d));

    }while(d!=c);
    printf("\n\n***OUTPUT***\n\n");
    printf("\nthe required root is %f \n",c);
}
