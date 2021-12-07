/*
���α׷��� : â��������Ʈ I - China Ticket Purchase Agency Program
���α׷� ���� : �߱� Ƽ�� ���� ���� ���α׷�
������ : �߱���� 201711689 ������
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 987654
#define STRUCT_SIZE 100 
#define _CRT_SECURE_NO_WARNINGS

typedef struct buyer {
    char name[20], phone_num[20], email[20], date[20], spot_name[40];
    int person, order_num, total_price;
}BUYER;
typedef struct beijing {
	int bj_num;
	char bj_name[40];
	int bj_price;
}BEIJING;
typedef struct shanghai {
	int s_num;
	char s_name[40];
	int s_price;
}SHANGHAI;
typedef struct qingdao {
	int q_num;
	char q_name[40];
	int q_price;
}QINGDAO;
typedef struct hangsu {
	int h_num;
	char h_name[40];
	int h_price;
}HANGSU; 


int menu, city_num, place_num, cc_num, a, i, j, k, cnt=0, check;
BUYER b_list[STRUCT_SIZE] ={0};

BUYER s_add_list();
BUYER bj_add_list();
BUYER q_add_list();
BUYER h_add_list();

void mainmenu();
void set_city();
void set_check();
void menu1();
void menu2();
void shanghai_menu();
void beijing_menu();
void qingdao_menu();
void hangsu_menu();
void search_menu(BUYER* list, int cnt);
void correction_menu(BUYER* list, int cnt);
void cancle_menu(BUYER* list, int cnt);

int main(int argc, char *argv[]) {
	FILE *fp = fopen("order_info.txt","w");
	fclose(fp);
    while(1) {
        mainmenu();
        scanf("%d",&menu);
        system("cls");
        if(menu==3)
			break;
			
        switch(menu) {
            case 1:
            	set_city();
            	menu1();
                break;
            case 2:
            	set_check();
            	menu2();
            	break;
            default:
            	break;
        }
    }
    printf("���α׷��� ����Ǿ����ϴ�.");
    return 0;
}

BUYER s_add_list() {
	BUYER b;
	SHANGHAI s[] = {
					{1,"����Ϸ���",289},
					{2,"Ȳ����������",120},
					{3,"��Ʈ������",75},
					{4,"��Ƽ����2����������",35},
					{5,"������Ÿ��118��������",180},
					{6,"�������Ÿ��",220},
					{7,"â����ǿ���",135},
					{8,"����û��Ŀ��",158}
	};
	
	FILE *fp = fopen("order_info.txt","a+");
	srand((unsigned)time(NULL));
	b.order_num = 1+rand()%MAX;
	printf("\n");
	printf("STEP3. �ֹ� ���� �Է�\n");
	printf("�ֹ���ȣ : %d\n", b.order_num);
	printf("������ ��ȣ�� �Է��ϼ��� :");
	scanf("%d",&s[a].s_num);
	printf("!!!���� ����!!!\n");
	for(a=0; a<7; a++) {
    	if(s[a].s_num == 1) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = s[0].s_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
	}
		if(s[a].s_num == 2) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = s[1].s_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 3) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = s[2].s_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 4) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = s[3].s_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 5) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = s[4].s_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 6) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = s[5].s_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 7) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = s[6].s_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 8) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = s[7].s_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
	}
	printf("!!! �ֹ���ȣ�� ������ּ��� !!!\n");
	printf("1.���� 2.���\n");
	printf("�Է� : ");
	scanf("%d",&check); 
	if(check == 1){	
		fprintf(fp, "%d %s %s %s %s %s %d %d\n", b.order_num, b.spot_name, b.name, b.phone_num, b.email, b.date, b.person, b.total_price);
    	fclose(fp);
    	system("cls");
	}
	else {
		system("cls");
	}
    return b;
}
BUYER bj_add_list() {
	BUYER b;
	BEIJING bj[] = {
					{1,"�ݸ����",175},
					{2,"���(�̿�����)",200},
					{3,"��ũ�ι�ƽ��Ŀ��",252},
					{4,"�ڱݼ�",60},
					{5,"��Ǫ����(�����)",526},
					{6,"�����强�����",229},
					{7,"õ�ܰ���",34},
					{8,"���Ϲ��Ƚ�Ʃ���",418}
	};
	
	FILE *fp = fopen("order_info.txt","a+");
	srand((unsigned)time(NULL));
	b.order_num = 1+rand()%MAX;
	printf("\n");
	printf("STEP3. �ֹ� ���� �Է�\n");
	printf("�ֹ���ȣ : %d\n", b.order_num);
	printf("������ ��ȣ�� �Է��ϼ��� :");
	scanf("%d",&bj[a].bj_num);
	printf("!!!���� ����!!!\n");
	for(a=0; a<7; a++) {
    	if(bj[a].bj_num == 1) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = bj[0].bj_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 2) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = bj[1].bj_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 3) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = bj[2].bj_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 4) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = bj[3].bj_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 5) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = bj[4].bj_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 6) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = bj[5].bj_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 7) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = bj[6].bj_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 8) {
    		printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
    		b.total_price = bj[7].bj_price * b.person;
    		printf("���� : %d\n",b.total_price);
    		break;
		}
	}
	printf("!!! �ֹ���ȣ�� ������ּ��� !!!\n");
	printf("1.���� 2.���\n");
	printf("�Է� : ");
	scanf("%d",&check); 
	if(check == 1){		
		fprintf(fp, "%d %s %s %s %s %s %d %d\n", b.order_num, b.spot_name, b.name, b.phone_num, b.email, b.date, b.person, b.total_price);
    	fclose(fp);
    	system("cls");
	}
	else {
		system("cls");
	}
    return b;
}
BUYER q_add_list() {
	BUYER b;
	QINGDAO q[] = {
					{1,"�����÷���SEGA��Ƽ����",100},
					{2,"��â�������ǿ���",117},
					{3,"������Ʈ���ϵ����������",76},
					{4,"���ֹڹ���",90},
					{5,"��������",130},
					{6,"ũ��������ڿ�õ",217},
					{7,"û�����",190}
	};
	
	FILE *fp = fopen("order_info.txt","a+");
	srand((unsigned)time(NULL));
	b.order_num = 1+rand()%MAX;
	printf("\n");
	printf("STEP3. �ֹ� ���� �Է�\n");
	printf("�ֹ���ȣ : %d\n", b.order_num);
	printf("������ ��ȣ�� �Է��ϼ��� :");
	scanf("%d",&q[a].q_num);
	printf("!!!���� ����!!!\n");
	for(a=0; a<5; a++) {
		if(q[a].q_num == 1) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = q[0].q_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
		if(q[a].q_num == 2) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = q[1].q_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
		if(q[a].q_num == 3) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = q[2].q_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
		if(q[a].q_num == 4) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = q[3].q_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
		if(q[a].q_num == 5) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = q[4].q_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
		if(q[a].q_num == 6) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = q[5].q_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
	}
	printf("!!! �ֹ���ȣ�� ������ּ��� !!!\n");
	printf("1.���� 2.���\n");
	printf("�Է� : ");
	scanf("%d",&check); 
	if(check == 1){		
		fprintf(fp, "%d %s %s %s %s %s %d %d\n", b.order_num, b.spot_name, b.name, b.phone_num, b.email, b.date, b.person, b.total_price);
    	fclose(fp);
    	system("cls");
	}
	else {
		system("cls");
	}
    return b;
}
BUYER h_add_list() {
	BUYER b;
	HANGSU h[] = {
					{1,"������ �ѻ��",20},
					{2,"������ ����",55},
					{3,"������ ȣ��ž",80},
					{4,"������ �ۼ�������",300},
					{5,"������ �ۼ��׸���ũ",310},
					{6,"������ ������",75},
					{7,"������ �Ľ��� ����",20}
    };
	FILE *fp = fopen("order_info.txt","a+");
	srand((unsigned)time(NULL));
	b.order_num = 1+rand()%MAX;
	printf("\n");
	printf("STEP3. �ֹ� ���� �Է�\n");
	printf("�ֹ���ȣ : %d\n", b.order_num);
	for(a=0; a<7; a++) {
		printf("������ ��ȣ�� �Է��ϼ��� :");
		scanf("%d",&h[a].h_num);
		if(h[a].h_num == 1) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = h[0].h_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 2) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = h[1].h_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 3) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = h[2].h_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 4) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = h[3].h_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 5) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = h[4].h_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 6) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = h[5].h_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 7) {
	    	printf("�������� �Է��ϼ��� : ");
			scanf("%s", b.spot_name);
			printf("�ֹ����� �̸��� �Է��ϼ��� :");
			scanf("%s", b.name);
			printf("�ֹ����� ��ȭ��ȣ�� �Է��ϼ��� :");
			scanf("%s", b.phone_num);
			printf("�ֹ����� �̸����ּҸ� �Է��ϼ��� :");
			scanf("%s", b.email);
			printf("��¥�� �Է��ϼ��� (����:1��1��)) :");
			scanf("%s", b.date);
			printf("�ο� ���� �Է��ϼ��� (���ڸ� �Է�) :");
			scanf("%d",&b.person);
	    	b.total_price = h[6].h_price * b.person;
	    	printf("���� : %d\n",b.total_price);
	    	break;
		}
	}
	printf("!!! �ֹ���ȣ�� ������ּ��� !!!\n");
	printf("1.���� 2.���\n");
	printf("�Է� : ");
	scanf("%d",&check); 
	if(check == 1){		
		fprintf(fp, "%d %s %s %s %s %s %d %d\n", b.order_num, b.spot_name, b.name, b.phone_num, b.email, b.date, b.person, b.total_price);
    	fclose(fp);
    	system("cls");
	}
	else {
		system("cls");
	}
    return b;
}
void menu1() {
	scanf("%d", &city_num);
	system("cls");
	if(city_num == 1) {
    	shanghai_menu();
		b_list[cnt] = s_add_list();
		cnt++;
		system("cls");
		
	}
    else if(city_num == 2) {
    	beijing_menu();
        b_list[cnt] = bj_add_list();
        cnt++;
        system("cls");
        
	}
    else if(city_num == 3) {
    	qingdao_menu();
        b_list[cnt] = q_add_list();
        cnt++;
        system("cls");
        
	}
	else if(city_num == 4) {
		hangsu_menu();
        b_list[cnt] = h_add_list();
        cnt++;
        system("cls");
        
	}
	else if(city_num == 5) {
		mainmenu();
		system("cls");
	}
	else {
		printf("�߸��� �������� �ʱ�ȭ������ ���ƿɴϴ�.\n");
		cnt--;
	}
}
void menu2() {
	scanf("%d", &cc_num);
	system("cls");
	if(cc_num == 1) {
    	search_menu(b_list, cnt);
	}
    else if(cc_num == 2) {
    	correction_menu(b_list, cnt);
	}
    else if(cc_num == 3) {
    	cancle_menu(b_list, cnt);
	}
	else if(cc_num == 4) {
		mainmenu();
		system("cls");
	}
	else
		printf("�߸��� �������� �ʱ�ȭ������ ���ƿɴϴ�.\n");
}

void mainmenu() {
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
    printf("|                                                                        |\n");
    printf("|                  China Ticket Purchase Agent Program                   |\n");
    printf("|                                                                        |\n");   
    printf("|                        1. Ƽ�� �����ϱ�                                |\n");
    printf("|                                                                        |\n");
    printf("|                        2. ���� �ֹ� Ȯ��                               |\n");
    printf("|                                                                        |\n");
    printf("|                        3. ����                                         |\n");
    printf("|                                                                        |\n");
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
    printf("��ȣ�� �Է� : ");
}
void set_city() {
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
    printf("|                                                                        |\n");
    printf("|                        STEP1. ���� ����                                |\n");
    printf("|                                                                        |\n");   
    printf("|                        1. ������                                       |\n");
    printf("|                                                                        |\n");
    printf("|                        2. ����¡                                       |\n");
    printf("|                                                                        |\n");
    printf("|                        3. Ī����                                       |\n");
    printf("|                                                                        |\n");
    printf("|                        4. ������ & ������                              |\n");
    printf("|                                                                        |\n");
    printf("|                        5. �ǵ��ư���                                   |\n");
    printf("|                                                                        |\n");
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
    printf("���� ��ȣ �Է� : ");
}
void shanghai_menu() {
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
    printf("|                                                                        |\n");
    printf("|                STEP2. ���� ������ && ������ ����                       |\n");
    printf("|                                                                        |\n");   
    printf("|                 1. ����Ϸ���-289CNY                                   |\n");
    printf("|                                                                        |\n");
    printf("|                 2. Ȳ����������-120CNY                                 |\n");
    printf("|                                                                        |\n");
    printf("|                 3. ��Ʈ������-75CNY                                    |\n");
    printf("|                                                                        |\n");
    printf("|                 4. ��Ƽ����2����������-35CNY                           |\n");
    printf("|                                                                        |\n");   
    printf("|                 5. ������Ÿ��118��������-180CNY                        |\n");
    printf("|                                                                        |\n");
    printf("|                 6. �������Ÿ��-220CNY                                 |\n");
    printf("|                                                                        |\n");
    printf("|                 7. â����ǿ���-135CNY                                 |\n");
    printf("|                                                                        |\n");
    printf("|                 8. ����û��Ŀ��-158CNY                                 |\n");
    printf("|                                                                        |\n");
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
}

void beijing_menu() {
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
    printf("|                                                                        |\n");
    printf("|                STEP2. �ϰ� ������ && ������ ����                       |\n");
    printf("|                                                                        |\n");   
    printf("|                 1. �ݸ����-175CNY                                     |\n");
    printf("|                                                                        |\n");
    printf("|                 2. ���(�̿�����)-200CNY                               |\n");
    printf("|                                                                        |\n");
    printf("|                 3. ��ũ�ι�ƽ��Ŀ��(�������)-252CNY                   |\n");
    printf("|                                                                        |\n");
    printf("|                 4. �ڱݼ�-60CNY                                        |\n");
    printf("|                                                                        |\n");   
    printf("|                 5. ��Ǫ����(�����)-526CNY                             |\n");
    printf("|                                                                        |\n");
    printf("|                 6. �����强�����-229CNY                               |\n");
    printf("|                                                                        |\n");
    printf("|                 7. õ�ܰ���-34CNY                                      |\n");
    printf("|                                                                        |\n");
    printf("|                 8. ���Ϲ��Ƚ�Ʃ���-418CNY                             |\n");
    printf("|                                                                        |\n");
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
}

void qingdao_menu() {
	printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
    printf("|                                                                        |\n");
    printf("|                STEP2. û�� ������ && ������ ����                       |\n");
    printf("|                                                                        |\n"); 
    printf("|                 1. �����÷���SEGA��Ƽ ����-100CNY                      |\n");
    printf("|                                                                        |\n");
    printf("|                 2. ��â�������ǿ���-117CNY                             |\n");
    printf("|                                                                        |\n");
    printf("|                 3. ������Ʈ���ϵ����������-76CNY                      |\n");
    printf("|                                                                        |\n");
    printf("|                 4. ���ֹڹ���-90CNY                                    |\n");
    printf("|                                                                        |\n");   
    printf("|                 5. ��������-130CNY                                     |\n");
    printf("|                                                                        |\n");
    printf("|                 6. ũ��������ڿ�õ-217CNY                             |\n");
    printf("|                                                                        |\n");
    printf("|                 7. û�����-190CNY                                     |\n");
    printf("|                                                                        |\n");
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
}

void hangsu_menu() {
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
    printf("|                                                                        |\n");
    printf("|               STEP2. ������ & ������ ������ && ������ ����             |\n");
    printf("|                                                                        |\n");   
    printf("|                 1.������ �ѻ��-20CNY                                  |\n");
    printf("|                                                                        |\n");
    printf("|                 2.������ ����-55CNY                                    |\n");
    printf("|                                                                        |\n");
    printf("|                 3.������ ȣ��ž-80CNY                                  |\n");
    printf("|                                                                        |\n");
    printf("|                 4.������ �ۼ�������-300CNY                             |\n");
    printf("|                                                                        |\n");   
    printf("|                 5.������ �ۼ��׸���ũ-310CNY                           |\n");
    printf("|                                                                        |\n");
    printf("|                 6.������ ������-75CNY                                  |\n");
    printf("|                                                                        |\n");
    printf("|                 7.������ �Ľ�������-20CNY                              |\n");
    printf("|                                                                        |\n");
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
}
void set_check() {
	printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
    printf("|                                                                        |\n");
    printf("|                        STEP1. �ֹ� Ȯ��                                |\n");
    printf("|                                                                        |\n");   
    printf("|                        1. �ֹ� �˻�                                    |\n");
    printf("|                                                                        |\n");
    printf("|                        2. �ֹ� ����                                    |\n");
    printf("|                                                                        |\n");
    printf("|                        3. �ֹ� ���                                    |\n");
    printf("|                                                                        |\n");
    printf("|                        4. �ǵ��ư���                                   |\n");
    printf("|                                                                        |\n");
    printf("|�ѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤѤ�|\n");
	printf("��ȣ ���� : ");
}

void search_menu(BUYER* list, int cnt) {
	FILE *fp = fopen("order_info.txt","r");
	int find_num, back_key;
	printf("STEP2. �ֹ� �˻�\n");
	printf("�ֹ���ȣ�� �Է��ϼ��� : ");
	scanf("%d", &find_num);
	printf("\n\n�ֹ� �˻� ���\n");
	for(i=0; i<cnt; i++) {
		if(find_num == list[i].order_num) {
    		printf("�ֹ���ȣ : %d\n", list[i].order_num);
    		printf("�ֹ������� : %s\n", list[i].spot_name);
    		printf("�ֹ��ڸ� : %s\n", list[i].name);
    		printf("�ֹ��� ��ȭ��ȣ : %s\n", list[i].phone_num);
    		printf("�ֹ��� �̸��� : %s\n", list[i].email);
    		printf("���೯¥ : %s\n", list[i].date);
    		printf("�ֹ��ο� : %d��\n", list[i].person);
			printf("�� ���� : %dCNY\n", list[i].total_price);
			break;
		}
	}
	fclose(fp);
	printf("�ƹ� ��ȣ�� �Է��Ͽ� ����ȭ������ ���ư�����\n");
	printf("��ȣ �Է� : ");
	scanf("%d",&back_key);
	if(back_key == 1)
		system("cls");
	else
		system("cls");
}

void correction_menu(BUYER* list, int cnt) {
	FILE *fp = fopen("order_info.txt","w");
	int fix_num, back_key=1;
	printf("STEP2.�ֹ� ����\n");
	printf("�ֹ���ȣ�� �Է��ϼ��� : ");
	scanf("%d", &fix_num);
	for(i=0; i<cnt; i++) {
		if(fix_num == list[i].order_num) {
			printf("�����׸����ҷ��ɴϴ�\n"); 
			sleep(3);
			break;
		}
	}
	if(i == cnt) {
		printf("�ֹ� ��Ͽ� �������� �ʾ� �ʱ�ȭ������ ���ư��ϴ�.\n");
	}
	for(k=i; k<cnt-1; k++) {
		list[k] = list[k+1];
	}
	cnt--;
	set_city();
            scanf("%d", &city_num);
			system("cls");
			if(city_num == 1) {
		    	shanghai_menu();
				b_list[cnt] = s_add_list();
				system("cls");
				
			}
		    else if(city_num == 2) {
		    	beijing_menu();
		        b_list[cnt] = bj_add_list();
		        system("cls");
		        
			}
		    else if(city_num == 3) {
		    	qingdao_menu();
		        b_list[cnt] = q_add_list();
		        system("cls");
		        
			}
			else if(city_num == 4) {
				hangsu_menu();
		        b_list[cnt] = h_add_list();
		        system("cls");
		        
			}
			else if(city_num == 5) {
				mainmenu();
				system("cls");
			}
			else {
				printf("�߸��� �������� �ʱ�ȭ������ ���ƿɴϴ�.\n");
			}
	printf("�ֹ��� ���� �Ǿ����ϴ�.\n");
	fclose(fp);
	printf("�ƹ� ��ȣ�� �Է��Ͽ� ����ȭ������ ���ư�����\n");
	printf("��ȣ �Է� : ");
	scanf("%d",&back_key);
	if(back_key == 1)
		system("cls");
	else
		system("cls");
}

void cancle_menu(BUYER* list, int cnt) {
	FILE *fp = fopen("order_info.txt","w");
	int delete_num, back_key=1;
	printf("STEP2.�ֹ� ���\n");
	printf("�ֹ���ȣ�� �Է��ϼ��� : ");
	scanf("%d", &delete_num);
	for(i=0; i<cnt; i++) {
		if(delete_num == list[i].order_num) {
			printf("������Դϴ�\n"); 
			sleep(3);
			break;
		}
	}
	if(i == cnt) {
		printf("�ֹ� ��Ͽ� �������� �ʾ� �ʱ�ȭ������ ���ư��ϴ�.\n");
	}
	for(k=i; k<cnt-1; k++) {
		list[k] = list[k+1];
	}
	cnt--;
	printf("�ֹ��� ��� �Ǿ����ϴ�.\n");
	fclose(fp);
	printf("�ƹ� ��ȣ�� �Է��Ͽ� ����ȭ������ ���ư�����\n");
	printf("��ȣ �Է� : ");
	scanf("%d",&back_key);
	if(back_key == 1)
		system("cls");
	else
		system("cls");
}
