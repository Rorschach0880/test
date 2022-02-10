#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

int main()
{
    h=(struct student*)malloc(LEN);
    h->next=NULL;
    r=h;
    headhello();
    int i;
    while(1){
        head();
        while(scanf("%d",&i)!=1||i>8||i<0){
            printf("\n您的输不正确,请重新输入操作:");
            fflush(stdin);
            continue;
        }
        printf("\n");
        if(i==0){
            filesave();
            break;
        }
        switch(i){

            case 1:add();           //增加
                break;
            case 2:fix();           //修改
                break;
            case 3:outputs();       //显示
                break;
            case 4:
                   seekhead();
                   seek();          //查询
                break;
            case 5:del();           //删除
                break;
            case 6:sort();          //排序
                break;
            case 7:system("cls");
                break;
            case 8:filesave();
                break;
        }
    }


    endhello();
    return 0;
}
