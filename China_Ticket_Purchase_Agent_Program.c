/*
프로그램명 : 창업프로젝트 I - China Ticket Purchase Agency Program
프로그램 내용 : 중국 티켓 구매 대행 프로그램
개발자 : 중국어과 201711689 한종빈
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
    printf("프로그램이 종료되었습니다.");
    return 0;
}

BUYER s_add_list() {
	BUYER b;
	SHANGHAI s[] = {
					{1,"디즈니랜드",289},
					{2,"황포강유람선",120},
					{3,"아트갤러리",75},
					{4,"시티투어2층관광버스",35},
					{5,"상하이타워118층전망대",180},
					{6,"동방명주타워",220},
					{7,"창펑오션월드",135},
					{8,"마시청서커스",158}
	};
	
	FILE *fp = fopen("order_info.txt","a+");
	srand((unsigned)time(NULL));
	b.order_num = 1+rand()%MAX;
	printf("\n");
	printf("STEP3. 주문 정보 입력\n");
	printf("주문번호 : %d\n", b.order_num);
	printf("여행지 번호를 입력하세요 :");
	scanf("%d",&s[a].s_num);
	printf("!!!띄어쓰기 금지!!!\n");
	for(a=0; a<7; a++) {
    	if(s[a].s_num == 1) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = s[0].s_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
	}
		if(s[a].s_num == 2) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = s[1].s_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 3) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = s[2].s_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 4) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = s[3].s_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 5) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = s[4].s_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 6) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = s[5].s_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 7) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = s[6].s_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(s[a].s_num == 8) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = s[7].s_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
	}
	printf("!!! 주문번호를 기억해주세요 !!!\n");
	printf("1.예약 2.취소\n");
	printf("입력 : ");
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
					{1,"금면왕조",175},
					{2,"경극(이원극장)",200},
					{3,"아크로바틱서커스",252},
					{4,"자금성",60},
					{5,"쿵푸공연(흥극장)",526},
					{6,"만리장성입장권",229},
					{7,"천단공원",34},
					{8,"유니버셜스튜디오",418}
	};
	
	FILE *fp = fopen("order_info.txt","a+");
	srand((unsigned)time(NULL));
	b.order_num = 1+rand()%MAX;
	printf("\n");
	printf("STEP3. 주문 정보 입력\n");
	printf("주문번호 : %d\n", b.order_num);
	printf("여행지 번호를 입력하세요 :");
	scanf("%d",&bj[a].bj_num);
	printf("!!!띄어쓰기 금지!!!\n");
	for(a=0; a<7; a++) {
    	if(bj[a].bj_num == 1) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = bj[0].bj_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 2) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = bj[1].bj_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 3) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = bj[2].bj_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 4) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = bj[3].bj_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 5) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = bj[4].bj_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 6) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = bj[5].bj_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 7) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = bj[6].bj_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
		if(bj[a].bj_num == 8) {
    		printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
    		b.total_price = bj[7].bj_price * b.person;
    		printf("가격 : %d\n",b.total_price);
    		break;
		}
	}
	printf("!!! 주문번호를 기억해주세요 !!!\n");
	printf("1.예약 2.취소\n");
	printf("입력 : ");
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
					{1,"조이플러스SEGA시티랜드",100},
					{2,"해창극지오션월드",117},
					{3,"포레스트와일드라이프월드",76},
					{4,"맥주박물관",90},
					{5,"해저세계",130},
					{6,"크라운프라자온천",217},
					{7,"청쇼공연",190}
	};
	
	FILE *fp = fopen("order_info.txt","a+");
	srand((unsigned)time(NULL));
	b.order_num = 1+rand()%MAX;
	printf("\n");
	printf("STEP3. 주문 정보 입력\n");
	printf("주문번호 : %d\n", b.order_num);
	printf("여행지 번호를 입력하세요 :");
	scanf("%d",&q[a].q_num);
	printf("!!!띄어쓰기 금지!!!\n");
	for(a=0; a<5; a++) {
		if(q[a].q_num == 1) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = q[0].q_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
		if(q[a].q_num == 2) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = q[1].q_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
		if(q[a].q_num == 3) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = q[2].q_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
		if(q[a].q_num == 4) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = q[3].q_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
		if(q[a].q_num == 5) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = q[4].q_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
		if(q[a].q_num == 6) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = q[5].q_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
	}
	printf("!!! 주문번호를 기억해주세요 !!!\n");
	printf("1.예약 2.취소\n");
	printf("입력 : ");
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
					{1,"쑤저우 한산사",20},
					{2,"쑤저우 유원",55},
					{3,"쑤저우 호구탑",80},
					{4,"항저우 송성가무쇼",300},
					{5,"항저우 송성테마파크",310},
					{6,"항저우 영은사",75},
					{7,"항저우 후쉐얀 주택",20}
    };
	FILE *fp = fopen("order_info.txt","a+");
	srand((unsigned)time(NULL));
	b.order_num = 1+rand()%MAX;
	printf("\n");
	printf("STEP3. 주문 정보 입력\n");
	printf("주문번호 : %d\n", b.order_num);
	for(a=0; a<7; a++) {
		printf("여행지 번호를 입력하세요 :");
		scanf("%d",&h[a].h_num);
		if(h[a].h_num == 1) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = h[0].h_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 2) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = h[1].h_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 3) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = h[2].h_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 4) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = h[3].h_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 5) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = h[4].h_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 6) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = h[5].h_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
		if(h[a].h_num == 7) {
	    	printf("여행지를 입력하세요 : ");
			scanf("%s", b.spot_name);
			printf("주문자의 이름을 입력하세요 :");
			scanf("%s", b.name);
			printf("주문자의 전화번호를 입력하세요 :");
			scanf("%s", b.phone_num);
			printf("주문자의 이메일주소를 입력하세요 :");
			scanf("%s", b.email);
			printf("날짜를 입력하세요 (예시:1월1일)) :");
			scanf("%s", b.date);
			printf("인원 수를 입력하세요 (숫자만 입력) :");
			scanf("%d",&b.person);
	    	b.total_price = h[6].h_price * b.person;
	    	printf("가격 : %d\n",b.total_price);
	    	break;
		}
	}
	printf("!!! 주문번호를 기억해주세요 !!!\n");
	printf("1.예약 2.취소\n");
	printf("입력 : ");
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
		printf("잘못된 접근으로 초기화면으로 돌아옵니다.\n");
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
		printf("잘못된 접근으로 초기화면으로 돌아옵니다.\n");
}

void mainmenu() {
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
    printf("|                                                                        |\n");
    printf("|                  China Ticket Purchase Agent Program                   |\n");
    printf("|                                                                        |\n");   
    printf("|                        1. 티켓 예약하기                                |\n");
    printf("|                                                                        |\n");
    printf("|                        2. 예약 주문 확인                               |\n");
    printf("|                                                                        |\n");
    printf("|                        3. 종료                                         |\n");
    printf("|                                                                        |\n");
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
    printf("번호를 입력 : ");
}
void set_city() {
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
    printf("|                                                                        |\n");
    printf("|                        STEP1. 도시 선택                                |\n");
    printf("|                                                                        |\n");   
    printf("|                        1. 상하이                                       |\n");
    printf("|                                                                        |\n");
    printf("|                        2. 베이징                                       |\n");
    printf("|                                                                        |\n");
    printf("|                        3. 칭따오                                       |\n");
    printf("|                                                                        |\n");
    printf("|                        4. 항저우 & 쑤저우                              |\n");
    printf("|                                                                        |\n");
    printf("|                        5. 되돌아가기                                   |\n");
    printf("|                                                                        |\n");
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
    printf("도시 번호 입력 : ");
}
void shanghai_menu() {
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
    printf("|                                                                        |\n");
    printf("|                STEP2. 상해 여행지 && 관람지 선택                       |\n");
    printf("|                                                                        |\n");   
    printf("|                 1. 디즈니랜드-289CNY                                   |\n");
    printf("|                                                                        |\n");
    printf("|                 2. 황포강유람선-120CNY                                 |\n");
    printf("|                                                                        |\n");
    printf("|                 3. 아트갤러리-75CNY                                    |\n");
    printf("|                                                                        |\n");
    printf("|                 4. 시티투어2층관광버스-35CNY                           |\n");
    printf("|                                                                        |\n");   
    printf("|                 5. 상하이타워118층전망대-180CNY                        |\n");
    printf("|                                                                        |\n");
    printf("|                 6. 동방명주타워-220CNY                                 |\n");
    printf("|                                                                        |\n");
    printf("|                 7. 창펑오션월드-135CNY                                 |\n");
    printf("|                                                                        |\n");
    printf("|                 8. 마시청서커스-158CNY                                 |\n");
    printf("|                                                                        |\n");
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
}

void beijing_menu() {
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
    printf("|                                                                        |\n");
    printf("|                STEP2. 북경 여행지 && 관람지 선택                       |\n");
    printf("|                                                                        |\n");   
    printf("|                 1. 금면왕조-175CNY                                     |\n");
    printf("|                                                                        |\n");
    printf("|                 2. 경극(이원극장)-200CNY                               |\n");
    printf("|                                                                        |\n");
    printf("|                 3. 아크로바틱서커스(조양극장)-252CNY                   |\n");
    printf("|                                                                        |\n");
    printf("|                 4. 자금성-60CNY                                        |\n");
    printf("|                                                                        |\n");   
    printf("|                 5. 쿵푸공연(흥극장)-526CNY                             |\n");
    printf("|                                                                        |\n");
    printf("|                 6. 만리장성입장권-229CNY                               |\n");
    printf("|                                                                        |\n");
    printf("|                 7. 천단공원-34CNY                                      |\n");
    printf("|                                                                        |\n");
    printf("|                 8. 유니버셜스튜디오-418CNY                             |\n");
    printf("|                                                                        |\n");
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
}

void qingdao_menu() {
	printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
    printf("|                                                                        |\n");
    printf("|                STEP2. 청도 여행지 && 관람지 선택                       |\n");
    printf("|                                                                        |\n"); 
    printf("|                 1. 조이플러스SEGA시티 랜드-100CNY                      |\n");
    printf("|                                                                        |\n");
    printf("|                 2. 해창극지오션월드-117CNY                             |\n");
    printf("|                                                                        |\n");
    printf("|                 3. 포레스트와일드라이프월드-76CNY                      |\n");
    printf("|                                                                        |\n");
    printf("|                 4. 맥주박물관-90CNY                                    |\n");
    printf("|                                                                        |\n");   
    printf("|                 5. 해저세계-130CNY                                     |\n");
    printf("|                                                                        |\n");
    printf("|                 6. 크라운프라자온천-217CNY                             |\n");
    printf("|                                                                        |\n");
    printf("|                 7. 청쇼공연-190CNY                                     |\n");
    printf("|                                                                        |\n");
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
}

void hangsu_menu() {
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
    printf("|                                                                        |\n");
    printf("|               STEP2. 항저우 & 쑤저우 여행지 && 관람지 선택             |\n");
    printf("|                                                                        |\n");   
    printf("|                 1.쑤저우 한산사-20CNY                                  |\n");
    printf("|                                                                        |\n");
    printf("|                 2.쑤저우 유원-55CNY                                    |\n");
    printf("|                                                                        |\n");
    printf("|                 3.쑤저우 호구탑-80CNY                                  |\n");
    printf("|                                                                        |\n");
    printf("|                 4.항저우 송성가무쇼-300CNY                             |\n");
    printf("|                                                                        |\n");   
    printf("|                 5.항저우 송성테마파크-310CNY                           |\n");
    printf("|                                                                        |\n");
    printf("|                 6.항저우 영은사-75CNY                                  |\n");
    printf("|                                                                        |\n");
    printf("|                 7.항저우 후쉐얀주택-20CNY                              |\n");
    printf("|                                                                        |\n");
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
}
void set_check() {
	printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
    printf("|                                                                        |\n");
    printf("|                        STEP1. 주문 확인                                |\n");
    printf("|                                                                        |\n");   
    printf("|                        1. 주문 검색                                    |\n");
    printf("|                                                                        |\n");
    printf("|                        2. 주문 수정                                    |\n");
    printf("|                                                                        |\n");
    printf("|                        3. 주문 취소                                    |\n");
    printf("|                                                                        |\n");
    printf("|                        4. 되돌아가기                                   |\n");
    printf("|                                                                        |\n");
    printf("|ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ|\n");
	printf("번호 선택 : ");
}

void search_menu(BUYER* list, int cnt) {
	FILE *fp = fopen("order_info.txt","r");
	int find_num, back_key;
	printf("STEP2. 주문 검색\n");
	printf("주문번호를 입력하세요 : ");
	scanf("%d", &find_num);
	printf("\n\n주문 검색 결과\n");
	for(i=0; i<cnt; i++) {
		if(find_num == list[i].order_num) {
    		printf("주문번호 : %d\n", list[i].order_num);
    		printf("주문여행지 : %s\n", list[i].spot_name);
    		printf("주문자명 : %s\n", list[i].name);
    		printf("주문자 전화번호 : %s\n", list[i].phone_num);
    		printf("주문자 이메일 : %s\n", list[i].email);
    		printf("여행날짜 : %s\n", list[i].date);
    		printf("주문인원 : %d명\n", list[i].person);
			printf("총 가격 : %dCNY\n", list[i].total_price);
			break;
		}
	}
	fclose(fp);
	printf("아무 번호나 입력하여 메인화면으로 돌아가세요\n");
	printf("번호 입력 : ");
	scanf("%d",&back_key);
	if(back_key == 1)
		system("cls");
	else
		system("cls");
}

void correction_menu(BUYER* list, int cnt) {
	FILE *fp = fopen("order_info.txt","w");
	int fix_num, back_key=1;
	printf("STEP2.주문 수정\n");
	printf("주문번호를 입력하세요 : ");
	scanf("%d", &fix_num);
	for(i=0; i<cnt; i++) {
		if(fix_num == list[i].order_num) {
			printf("수정항목을불러옵니다\n"); 
			sleep(3);
			break;
		}
	}
	if(i == cnt) {
		printf("주문 목록에 존재하지 않아 초기화면으로 돌아갑니다.\n");
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
				printf("잘못된 접근으로 초기화면으로 돌아옵니다.\n");
			}
	printf("주문이 수정 되었습니다.\n");
	fclose(fp);
	printf("아무 번호나 입력하여 메인화면으로 돌아가세요\n");
	printf("번호 입력 : ");
	scanf("%d",&back_key);
	if(back_key == 1)
		system("cls");
	else
		system("cls");
}

void cancle_menu(BUYER* list, int cnt) {
	FILE *fp = fopen("order_info.txt","w");
	int delete_num, back_key=1;
	printf("STEP2.주문 취소\n");
	printf("주문번호를 입력하세요 : ");
	scanf("%d", &delete_num);
	for(i=0; i<cnt; i++) {
		if(delete_num == list[i].order_num) {
			printf("취소중입니다\n"); 
			sleep(3);
			break;
		}
	}
	if(i == cnt) {
		printf("주문 목록에 존재하지 않아 초기화면으로 돌아갑니다.\n");
	}
	for(k=i; k<cnt-1; k++) {
		list[k] = list[k+1];
	}
	cnt--;
	printf("주문이 취소 되었습니다.\n");
	fclose(fp);
	printf("아무 번호나 입력하여 메인화면으로 돌아가세요\n");
	printf("번호 입력 : ");
	scanf("%d",&back_key);
	if(back_key == 1)
		system("cls");
	else
		system("cls");
}
