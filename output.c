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
        printf("����������������������������������������������\n\n");
        printf("��ǰϵͳ����ѧ����Ϣ����������ѧ����Ϣ\n\n");
        return ;
    }
    else{
        printf("����������������������������������������������\n\n");
        printf("�����ѧ����Ϣ����:\n");
        printf("ѧ��       ����                �Ա� ���� �ɼ�1  �ɼ�2  �ɼ�3   ƽ����   �ܷ�   ����\n");
        int i;
        p=h->next;
        for(i=0;i<n;i++){
            output(p);
            p=p->next;
    }
    printf("\nѧ����Ϣ��ȫ�������ɣ�\n\n");
    }
}
