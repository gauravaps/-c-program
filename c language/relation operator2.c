#include<stdio.h>
int main()
{
    int a,b,result;
    printf("note: 1=true and ,0=false \n");
    scanf("%d %d",&a,&b);
    result=a<b;
    printf("result:= %d",result);
    return 0;
}
