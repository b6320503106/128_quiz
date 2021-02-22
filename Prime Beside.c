#include<stdio.h>
int main()
{
    int n,i,a=0,b=0;
    scanf("%d",&n);
    if(n%2==1)
    {
        if(n==3||n==7||n==11||n==13||n==17||n==19||n==23||n==29)
        printf("%d",n);
    }else{
    while(n%2==0)
    {
        a=n-i;
        b=n+i;
        if(a==3||a==7||a==11||a==13||a==17||a==19||a==23||a==29||b==3||b==7||b==11||b==13||b==17||b==19||b==23||b==29)
        {printf("%d %d",a,b);
        break;}
        i++;


 }
}
return 0;
}
