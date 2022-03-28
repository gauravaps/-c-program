
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,result;
    printf("note: 1= true and 0=false \n");
    scanf("%d %d %d %d" , &a,&b,&c,&d);
    e=a>b;
    f=c<d;
    result=e||f;
    printf("result: %d",result);
    return 0;

}
