#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

void headhello()
{
    printf("*****************************************\n");
    printf("*************东北林业大学****************\n");
    printf("***********学生信息管理系统**************\n");
    printf("*****************************************\n");
    printf("*********************技术开发：程政哲****\n");
}

void head()
{
    printf("———————————————————————\n\n");
    printf("请按数字键选择要进行的操作\n");
    printf("1增加学生信息\n");
    printf("2修改某个学生信息\n");
    printf("3显示所有学生信息\n");
    printf("4查询某个学生信息\n");
    printf("5删除学生信息\n");
    printf("6对学生信息按条件进行排序\n");
    printf("7清屏\n");
    printf("8保存当前学生信息(保存在此系统根目录下的stu.txt文件中)\n");
    printf("0退出本系统\n\n");
    printf("您选择操作:");
}

void endhello()
{
    printf("———————————————————————\n\n");
    printf("欢迎再次使用本系统！\n");
}
