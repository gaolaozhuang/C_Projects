//  Created by www.runoob.com on 15/11/9.
//  Copyright © 2015年 菜鸟教程. All rights reserved.
//
 
#include<stdio.h>
#define N 10
int main()
{
    int i,j,a[N],temp;
    printf("请输入 10 个数字：\n");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N-1;i++)
    {
        int min=i;
        for(j=i+1;j<N;j++)
            if(a[min]>a[j]) min=j;
        if(min!=i)
        {
            temp=a[min];
            a[min]=a[i];
            a[i]=temp;
        }
    }
    printf("排序结果是:\n");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}