#include<stdio.h>
int main()
{
    int age;
    float height;
    char gender;
    printf("enter your details \n");
    scanf("%d %f %c",&age,&height,&gender);
    printf(" your detail\n=%d\n %.2f\n %c\n",age,height,gender);
    return 0;
}
