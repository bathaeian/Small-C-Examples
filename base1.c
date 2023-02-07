#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int b=0;
    for(int a2=a,c=1;a2>0;a2=a2/2,c=c*10)   b=b+c*(a2%2);
    printf("decimal: %d\nbinary:%d\noctal:%o\nhex:%x\n",a,b,a,a);
    return 0;
}