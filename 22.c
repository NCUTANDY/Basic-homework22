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
    printf("請輸入有幾個工讀生:");
    scanf("%d", &num);
    for(num1=0;num1<num;++num1){
        printf("這是第%d筆資料\n\n", num1+1);
        printf("請輸入 ID:");
        scanf("%s", sertivor[num1].ID);
        printf("請輸入姓名:");
        scanf("%s", sertivor[num1].name);
        printf("請輸入時薪: ");
        scanf("%d", &sertivor[num1].salary);
        printf("請輸入工作時數:");
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
    printf("\n\n%s的資料---------\n",show->name);
    printf("ID:%s\n",show->ID);
    printf("姓名:%s\n",show->name);
    printf("時薪:%d\n",show->salary);
    printf("時數:%d\n",show->hours);
    printf("薪水:%d\n",show->income);
    printf("-------------\n");
}

