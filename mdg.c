#include<stdio.h>
int main()
{
    int n,m,a=0,b=0,c=0,d=0,e=0,f,g,h;
    scanf("%d",&n);
    scanf("%d",&m);
    a=n%100;
    c=n%10000;
    d=c/100;
    e=n/10000;
    b=m%100;
    f=m%10000;
    g=f/100;
    h=m/10000;
    if(a<b)
    {   if(d==12)
        {printf("%d ",(30-e)+h);
        printf("%d ",g-1);
        printf("%d",(a+1)%b);
    }else if(d!=12)
    {
        printf("%d ",(30-e)+h);
        printf("%d ",g-d+1);
        printf("%d",(a+1)%b);
    }
    }

   else
    {
        printf("EXP before MFG");
    }
return 0;
}
