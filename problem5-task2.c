#include<stdio.h>
int main()
{
    int F[20];
    int n;
    scanf("%d",&n);
    int i=0;
    F[0]=0;
    F[1]=1;
    for(i=2; i<=n; i++)
    {
        F[i]=F[i-1]+F[i-2];
    }
     for (int i = 0; i <n; i++)
        { printf("%d\n", F[i]);}

}

