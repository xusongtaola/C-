#include<stdio.h>
void main(void)
{
	int i;
	printf("请输入正方形边长：");
	scanf("%d", &i);
	printf("正方形周长为：%d\n正方形面积为：%d", i*4,i*i); //"\n"表示换行
} 
