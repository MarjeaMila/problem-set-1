#include<stdio.h>
int Fibo(int n)
{
    if(n<=1)
    {
        return n;
    }
    else
    {
        return Fibo(n-1)+Fibo(n-2);
    }
}
int main()
{
    int n=0;
    int i;
    scanf ("%d",&i);
    for(n=0;n<=i;n++)
    {
        printf("Fibo series:%d\n",Fibo(n));
    }
    return 0;
}
