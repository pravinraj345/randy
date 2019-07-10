#include<stdio.h>
int multiple(int x,int y);
int main()
{
    int num1=10,num2=20;
    int ans=0;
    ans=multiple(num1,num2);
    printf("Answer:%d\n",ans);
    return 0;
}
int multiple(int x,int y){
    return x*y;
}