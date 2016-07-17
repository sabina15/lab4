#include<stdio.h>

int fact(int n)
{
   int x,y;
    if (n==0)
        return(1);
    x=n-1;
    y=fact(x);
    return(n*y);
}
int main ()
{
    int n;
    printf("Enter a no.\n");
    scanf("%d",&n);
    printf("%d",fact(n));
}
