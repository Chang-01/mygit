#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>

void bed();
void bed_1();
void desk();
void desk_1();
void desk_2();
void door();
int select();
void error();
void obtain();
void left();
void left_1();
void right();
void right_1();
void right_2();
void right_3();
void researcher();
void startStory2();
void researcher_1();


int key_1, key_2, key_3, key_4, key_5, key_6;
extern int phase;

void startStory() {
	printf("잃어버린 기억\n\n");
	printf("엔터키를 눌러 시작해주세요...\n");
	getchar();

	printf("눈을 뜬 순간, 천장에서 희미하게 깜박이는 전구가 보였다. 머리가 지끈거리며 생각이 혼란스러웠다. \n");
	printf("여기서 무슨 일이 있었던 걸까? 나는 왜 여기 있는 걸까? 방 안에는 침대와 작은 책상, 그리고 문이 있었다.\n");
	printf("두리번거리는 사이, 문 뒤쪽에서 들리는 미묘한 소리에 몸이 움찔했다. 쫓기는 듯한 느낌에 빨리 이곳에서 벗어나야 한다는 본능적인 경고가 떠올랐다.\n\n");
}


void bed() {
	system("cls");
	int x;
	printf("\"침대 아래를 손으로 더듬어 보니 손끝에 종이가 닿았다.낡은 신문 한 장이었다.\n신문은 오래된 사건 기사로 뒤덮여 있었는데, 한 남자가 범죄 혐의로 경찰에 쫓기고 있다는 내용이었다.\n그의 사진을 보는 순간, 이상하게 익숙한 느낌이 들었다.\"\n");
	printf("1. 신문을 읽는다\n\n2. 신문을 무시하고 다른 곳을 조사한다\n");
	x = select();
	if (x == 1) bed_1();
	else if (x == 2) {
		printf("\"나는 더 이상 볼 필요가 없다고 판단하고 다른 곳을 둘러보기로 했다.왠지 모르게 더 급한 일이 생길 것만 같은 불길한 예감이 들었다.\"");
	}
	else error();
}

void bed_1() {
	system("cls");
	int x;
	printf("\"신문을 읽어 내려가니, 남자의 이름이 내 이름과 같다는 것을 깨닫고 충격을 받는다.\n기사에는 그가 신원을 감추고 도망다니며 고급 정보들을 훔쳤다는 내용이 있었고, 마지막으로 그가 특정 장소에서 목격되었다고 쓰여 있었다. \n이 정보는 내가 왜 이 방에 갇혀 있는지에 대한 단서가 될 것 같았다.\"\n\n");
	key_1 = 1;
	printf("1.침대를 더 탐색한다\n\n2.방을 마저 둘러본다.\n");
	x = select();
	system("cls");
	if (x == 1) {
		printf("\"침대 밑에 다시 손을 넣어 천천히 주변을 살펴보니, 작고 녹슨 상자가 있었다. 상자를 열자 낡은 흑백 사진이 나왔다. \n사진 속에는 젊은 여성이 내 어깨에 팔을 올리고 웃고 있었다. 사진을 보자 머리가 아프면서 흐릿하게나마 기억의 한 조각이 떠올랐다. \n이 여성은 나와 가까운 사이였던 사람 같았다.\"\n");
		key_2 = 1;
	}
}

void desk() {
	system("cls");

	int x;
	printf("\"책상 위에는 열쇠와 다이어리가 있었다, 다이어리는 낡고 너덜너덜했다.다이어리를 펼쳐보니 글씨가 잔뜩 적혀 있었고, 페이지마다 누군가 급하게 쓴 듯한 흔적이 남아 있었다.\n내용은 알 수 없는 문자와 숫자들이 섞여 있었고, 군데군데 '숨겨야 한다'라는 문구가 반복적으로 나타났다.\"\n");
	printf("1. 다이어리에서 특정 단어와 문장을 주의 깊게 본다.\n\n2. 무시하고 열쇠를 집는다\n");
	x = select();
	if (x == 1) desk_1();
	else if (x == 2)desk_2();
	else error();
}

void desk_1() {
	system("cls");
	key_3 = 1;
	printf("어떠한 실험에 대한 내용인 것 같다. 실험이 7월 23일에 시작되었다고 적혀있다. \n빠르게 기억 둔 다음, 다이어리를 덮었다.\n\n");

}

void desk_2() {
	system("cls");
	key_4 = 1;
	printf("\"열쇠를 획득했다. 이걸로 문을 열 수 있지 않을까?\"\n");
}


void door() {
	system("cls");
	if (key_4 == 0) {
		printf("\"문을 열어보려 했으나 잠겨 있었다. 나는 열쇠가 있을 만한 곳으로 시선을 돌렸다. 방에 있는 물건을 더 꼼꼼히 살펴봐야 했다.\"\n");
		printf("선택지로 돌아갑니다\n");
	}
	else if (key_4 == 1) {
		int x;
		printf("열쇠는 돌아갔지만 도어락으로 이중 잠금이 돼있었다.\n\n");
		printf("1. 단서를 더 찾아본다\n\n");
		printf("2. 비밀번호를 입력한다\n\n");
		x = select();
		if (x == 1) {
			printf("다른 단서들을 더 찾아보자.\n");
			system("pause");
			system("cls");
			return;
		}
		else if (x == 2) {
			int password;
			printf("비밀번호를 입력하세요 : ");
			scanf("%d", &password);
			if (password == 723) {
				printf("문이 열렸다!\n");
				phase = 1;
			}
			else {
				printf("비밀번호가 틀린 것 같다.\n");
				system("pause");
				system("cls");
			}
		}
		else {
			error();
		}
	}
}





void obtain() {
	system("cls");
	if (key_1 == 1) {
		printf("- 신문에서 신원을 감추고 도망다니며 고급정보들을 훔쳤다는 사람의 이름이 내 이름과 같았고 그가 특정장소에서 목격되었다고 적혀있었다.\n\n");
	}
	if (key_2 == 1) {
		printf("- 흑백사진 속 젊은 여성이 내 어깨에 손을 올리고 있었다. 이 여성은 나와 가까운 사이였던 사람 같았다.\n\n");
	}
	if (key_3 == 1) {
		printf("-다이어리에서 얻은 메모이다. 실험 시작일 : 7월 23일 \n\n");
	}
	if (key_4 == 1) {
		printf("-책상 위에서 얻은 열쇠이다.\n\n");
	}
	if (key_5 == 1) {
		printf("-탁자 위에서 얻은 카드키이다..\n\n");
	}
	if (key_6 == 1) {
		printf("-소파에서 얻은 가운이다.\n\n");
	}

}

int select() {
	int x;
	printf("번호를 선택하세요\n");
	scanf("%d", &x);
	return x;
}

void error() {
	printf("잘못 입력하였습니다.\n");
	return;
}

void startStory2() {
	printf("문을 열고 밖을 살펴보니 연구원으로 보이는 사람이 멀리 보이고 있었다.\n\n");
	printf("직감을 통해 저 사람에게 걸리지 않는 것이 좋겠다고 생각했다.\n");
}

void left() {
	system("cls");
	int x;
	printf("\"왼쪽에 가기로 마음먹었다.\n걸리지 않도록 주의하며 가다보니 연구실로 보이는 방이 보인다\n들어가 볼까?\"\n");
	printf("1. 들어간다.\n\n2. 다시 돌아가자 \n");
	x = select();
	if (x == 1) left_1();
	else if (x == 2) {
		printf("\"나는 다른 쪽으로 가봐야 겠다고 생각하며 다시 왔던 길을 돌아간다.\"");
	}
	else error();
}

void left_1() {
	system("cls");
	if (key_5 == 0) {
		printf("\"역시나 문이 잠겨있다. 카드 키가 필요한 것으로 보인다.\"\n");
		printf("선택지로 돌아갑니다\n");
	}
	else if (key_5 == 1) {
		int x;
		printf("인식되는 소리와 함께 문이 열렸다.\n\n"); // 연구실에 있는 단서들 추가 
		printf("1. 단서를 더 찾아본다\n\n");
		printf("2. 비밀번호를 입력한다\n\n");
		x = select();
		if (x == 1) {
			printf("다른 단서들을 더 찾아보자.\n");
			system("pause");
			system("cls");
			return;
		}
		else if (x == 2) {
			printf("문이 열렸다!\n");
		}
		else {
			printf("비밀번호가 틀린 것 같다.\n");
		}
	}
	else {
		error();
	}
}



void right() {
	system("cls");
	int x;
	printf("\"오른쪽으로 가기로 마음먹었다.\n걸리지 않도록 주의하며 가다보니 휴게실로 보이는 방이 보인다.\n들어가 볼까?\"\n");
	printf("1. 들어간다.\n\n2. 다시 돌아가자 \n");
	x = select();
	if (x == 1) right_1();
	else if (x == 2) {
		printf("\"나는 다른 쪽으로 가봐야 겠다고 생각하며 다시 왔던 길을 돌아간다.\"");
	}
	else error();
}

void right_1() {
	system("cls");
	int x;
	printf("\"휴게실에 들어가보니 탁자 위에 서류들과 누군가 먹다 남긴 간단한 과자와 커피가 보인다.\n소파에는 연구실 가운이 놓여져 있었다.\"\n");
	printf("1. 탁자 위를 유심히 살펴본다\n\n2. 연구실 가운을 챙긴다\n");
	x = select();
	if (x == 1) right_2();
	else if (x == 2)right_3();
	else error();
}

void right_2() {
	system("cls");
	key_5 = 1;
	printf("누군가 돌아오기 전에 서둘러 서류들을 살펴본다. \n서류들 사이에서 카드키로 보이는 물건을 챙길 수 있었다.\n\n");

}

void right_3() {
	system("cls");
	key_6 = 1;
	printf("아까부터 보이는 연구원들을 생각하면 유용하게 사용할 수 있을 것 같다.\n 연구실 가운을 서둘러 걸친 상태로 자리를 뜬다.\n\n");

}

// 연구실 가운 소지시 추가 내용 
void researcher() {
	system("cls");
	int x;
	printf("\"당황스러운 상황의 연속이다 보니 이제는 지쳐간다.\n답답함을 느낀 나머지 나는 저 연구원에게 직접 말을 걸기로 했다.\n\n");
	printf("1. 연구원에게 말을 걸러간다.\n\n2. 다시 돌아가자\n");
	x = select();
	if (x == 1) researcher_1();
	else if (x == 2) {
		printf("\"아무리 생각해도 가둬둔 사람과 연관있는 사람에게 말을 거는 것은 아닌 것 같다.\"");
	}
	else error();
}

void researcher_1() {
	system("cls");
	int x;
	printf("\"연구원에게 다가가니 연구원은 잠을 오래 못잤는지 상태가 이상해 보인다..\n무엇을 물어보면 좋을까?.\"\n");
}
