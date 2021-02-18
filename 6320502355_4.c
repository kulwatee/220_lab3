#include<stdio.h>
int main()
{
    long long a,i;
    int q;
    scanf("%lld",&a);
    for(a;a>=0;a--)
    {
        q=1;
        for(i=2;i<a;i++)
        {
            if(a%i==0)
            {
                q=0;
                break;
            }
        }
        if(q==1)
        {
            printf("%lld",a);
            break;
        }

    }
}










