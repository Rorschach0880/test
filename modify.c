#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stu.h"


void fixhead()
{
    printf("����������������������������������������������\n\n");
    printf("��ӭ����ѧ����Ϣ�޸Ľ���\n");
    printf("������Ҫ�޸ĵ�ѧ��ѧ��(0������������):");
}


void fix()
{
    if(n==0){
        printf("����������������������������������������������\n\n");
        printf("��ǰϵͳ����ѧ����Ϣ����������ѧ����Ϣ\n\n");
        return ;
    }
    loop1:fixhead();
    int i,m;
    m=seek();
    if(m==-1){
        //printf("\n");
        return ;
    }
    loop2:printf("����������������������������������������������\n\n");
    printf("�밴���ּ�ѡ�����\n");
    printf("1�޸ĸ�ѧ��������Ϣ\n");
    printf("0�������ϸ�����\n");
    printf("\n��ѡ�����:");
    loop:while(scanf("%d",&i)!=1||i>1||i<0){
            printf("\n�������벻��ȷ,����������ѡ��:");
            fflush(stdin);
            continue;
        }
        printf("\n");
    if(i==0) goto loop1;
    /*else if(i==1){
        printf("\n����������������������������������������������\n\n");
        printf("����������ѧ������Ϣ(0�������ϸ�����):\nѧ�� ���� �Ա� ���� �ɼ�1 �ɼ�2 �ɼ�3\n");
        if(input(p)==0){
            printf("\n");
            goto loop2;
        }
        printf("\n");
    }*/
    else if(i==1){
    printf("����������������������������������������������\n\n");
    printf("�밴���ּ�ѡ��Ҫ�޸ĵ���Ϣ\n");
    printf("1ѧ��\n");
    printf("2����\n");
    printf("3�Ա�\n");
    printf("4����\n5�ɼ�1\n6�ɼ�2\n7�ɼ�3\n0�������ϸ�����\n");
    printf("��ѡ�����:");
    while(scanf("%d",&i)!=1||i>7||i<0){
            printf("�������벻��ȷ,����������ѡ��:");
            fflush(stdin);
            continue;
        }
        printf("\n");
        printf("����������������������������������������������\n\n");
    switch(i)
    {
        case 0:goto loop2;
                break;
        case 1:printf("��ѡ�񽫸�ѧ����ѧ���޸�Ϊ:");
                scanf("%d",&p->num);
                break;
        case 2:printf("��ѡ�񽫸�ѧ���������޸�Ϊ:");
                scanf("%s",&p->name);
                break;
        case 3:printf("��ѡ�񽫸�ѧ�����Ա��޸�Ϊ:");
                scanf(" %c",&p->sex);
                break;
        case 4:printf("��ѡ�񽫸�ѧ���������޸�Ϊ:");
                scanf("%d",&p->age);
                break;
        case 5:printf("��ѡ�񽫸�ѧ���ĳɼ�1�޸�Ϊ:");
                scanf("%lf",&p->score[0]);
                break;
        case 6:printf("��ѡ�񽫸�ѧ���ĳɼ�2�޸�Ϊ:");
                scanf("%lf",&p->score[1]);
                break;
        case 7:printf("��ѡ�񽫸�ѧ���ĳɼ�2�޸�Ϊ:");
                scanf("%lf",&p->score[2]);
                break;
        }
    p->sum=0;
    p->sum=p->score[0]+p->score[1]+p->score[2];
    p->avg=p->sum/3;
    }
    else{
        printf("��������,����������ѡ��:");
        goto loop;
    }
    avgsort();
    printf("�޸ĳɹ���\n\n");
    goto loop1;
}
