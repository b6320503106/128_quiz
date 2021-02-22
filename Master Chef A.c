#include<stdio.h>
int main()
{
    int n,i,j,a=0,b=0,c=0,d=0;
    scanf("%d",&n);
    int A[n][n-1],m[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        scanf("%d",&A[i][j]);

    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(j==0&&i!=0)
               {
                   a=a+A[i][j];
               }
           else if(j==n-2&&i!=n-1)
            {
                b=b+A[i][j];
            }
        else if(j==0&&i==0||j==1&&i!=1&&i!=0)
            {
                 c=c+A[i][j];
            }
            else if(j==n-2&&i==n-1||j==1&&i!=n-2&&i!=n-1)
                 d=d+A[i][j];
        }
    }
    if(a>b&&a>c&&a>d)
        printf("1");
    else if(b>c&&b>d&&b>a)
        printf("4");
    else if(c>d&&c>a&&c>b)
          printf("2");
        else if(d>a&&d>b&&d>c)
            printf("3");
}
