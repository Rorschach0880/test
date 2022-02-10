#include <stdio.h>
#include <stdlib.h>
#include "stu.h"


void output(struct student *p)
{
    printf("%-10d %-20s %c   %d   %05.2f  %05.2f  %05.2f   %05.2f   %06.2f   %d\n",p->num,p->name,p->sex,p->age,p->score[0],p->score[1],p->score[2],p->avg,p->sum,p->ranking);
}


void outputs()
{
    if(n==0){
        printf("———————————————————————\n\n");
        printf("当前系统中无学生信息，请先输入学生信息\n\n");
        return ;
    }
    else{
        printf("———————————————————————\n\n");
        printf("输出的学生信息如下:\n");
        printf("学号       姓名                性别 年龄 成绩1  成绩2  成绩3   平均分   总分   排名\n");
        int i;
        p=h->next;
        for(i=0;i<n;i++){
            output(p);
            p=p->next;
    }
    printf("\n学生信息已全部输出完成！\n\n");
    }
}
