#include <stdio.h>
#include <stdlib.h>
#include "stu.h"

int seek()
{
    if(n==0){
            printf("����������������������������������������������\n");
        printf("\n��ǰϵͳ����ѧ����Ϣ����������ѧ����Ϣ\n\n");
        return ;
    }
    int m,i=-1,f=0;
    while(scanf("%d",&m)!=1){
            printf("�������벻��ȷ,����������ѧ��:");
            fflush(stdin);
            continue;
        }
    if(m==0){
        printf("\n");
        return i;
    }
    p=h->next;
    for(i=0;i<n;i++){
        if(p->num==m){
            f++;
            printf("��ѧ����ϢΪ:\n");
            printf("\nѧ��       ����                �Ա� ���� �ɼ�1  �ɼ�2  �ɼ�3  ƽ����    �ܷ�   ����\n");
            output(p);
            printf("\n");
            break;
        }
        p=p->next;
    }
    printf("\n");
    if(f==0){
        i=-1;
        printf("����������������������������������������������\n\n");
        printf("ϵͳ��δ�ҵ���ѧ����Ϣ\n\n");
    }
    return i;
}

void seekhead()
{
    printf("����������������������������������������������\n\n");
    printf("��ӭ����ѧ����Ϣ��ѯ���棬������Ҫ���ҵ�ѧ��ѧ��(��0����������):");
}

