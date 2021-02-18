#include<stdio.h>
int main()
{
    int n,i=2;
    scanf("%d",&n);
    if(n==1)
        printf("1\n");

    while(n>1)
    {
        while(n%i!=0)

            i++;
        printf("%d\n",i);
        n=n/i;
    }
    printf("0");


}
