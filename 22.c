#include<stdio.h>
struct Sertivor{
    char ID[20];
    char name[20];
    unsigned int  salary;
    unsigned int  hours;
    unsigned int  income;
};
int salc(struct Sertivor *);  
void show(struct Sertivor *);  
int main(void){
    int num;
    int num1;
    struct Sertivor sertivor[4];
    printf("�п�J���X�ӤuŪ��:");
    scanf("%d", &num);
    for(num1=0;num1<num;++num1){
        printf("�o�O��%d�����\n\n", num1+1);
        printf("�п�J ID:");
        scanf("%s", sertivor[num1].ID);
        printf("�п�J�m�W:");
        scanf("%s", sertivor[num1].name);
        printf("�п�J���~: ");
        scanf("%d", &sertivor[num1].salary);
        printf("�п�J�u�@�ɼ�:");
        scanf("%d", &sertivor[num1].hours);
        salc(&sertivor[num1]);
    }
    for(num1=0;num1<num;++num1){
    	show(&sertivor[num1]);
	}
	return 0;
}
int salc(struct Sertivor *ser){ 
    (ser->income)=(ser->salary)*(ser->hours);
    return ser->income;
}
void show(struct Sertivor *show){ 
    printf("\n\n%s�����---------\n",show->name);
    printf("ID:%s\n",show->ID);
    printf("�m�W:%s\n",show->name);
    printf("���~:%d\n",show->salary);
    printf("�ɼ�:%d\n",show->hours);
    printf("�~��:%d\n",show->income);
    printf("-------------\n");
}

