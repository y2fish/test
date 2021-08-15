#include<stdio.h>
//找出三数最大值
int main(){
    int a,b,c;
    //依次输入三个待比较的数字
    printf("请输入依次三个数：\n");
    printf("a：");
    scanf("%d",&a);
    printf("b：");
    scanf("%d",&b);
    printf("c：");
    scanf("%d",&c);
    getchar();
    printf("三个数依次是：%d,%d,%d\n",a,b,c);

    //进行比较操作
    int temp;
    temp=(a>b?a:b);
    temp=(temp>c?temp:c);
    printf("三者最大是：%d\n",temp);

    return 0;
}
