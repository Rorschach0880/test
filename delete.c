#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

void delhead()
{
    printf("����������������������������������������������\n\n");
    printf("��ӭ����ѧ����Ϣɾ������\n");
    printf("������ѧ��ɾ����ѧ��(0������������):");
}

void del()
{
    if(n==0){
        printf("����������������������������������������������\n");
        printf("\n��ǰϵͳ����ѧ����Ϣ����������ѧ����Ϣ\n\n");
        return ;
    }
    loop:delhead();
    int no;
    while(scanf("%d",&no)!=1){
            printf("\n�������벻��ȷ,����������ѧ��:");
            fflush(stdin);
            continue;
        }
    if(no==0){
        printf("\n");
        return ;
    }
    int i;
    p=h;
    for(i=0;i<n;i++){
        if(p->next->num==no)
            break;
        p=p->next;
    }
    if(i==n){
        printf("\n��ѧ������ϵͳ�У���\n\n");
        goto loop;
    }
    struct student *t;
    t=p->next;
    p->next=p->next->next;
    if(t==r) r=p;
    free(t);
    printf("\nɾ���ɹ���\n\n");
    n=n-1;
    goto loop;
    avgsort();
}
