#define _CRT_SECURE_NO_WARNINGS
#pragma once
//두번째 방 텍스트 출력을 위한 헤더파일

#include "insert.h"
#include "ending.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>


void left();
void left_1();
void right();
void right_1();
void right_2();
void right_3();
void researcher();
void startStory2();
void researcher_file();

extern int delay;
extern int phase;
extern int key_1, key_2, key_3, key_4; //첫번째 방에서 얻은 힌트
int key_5, key_6, key_7, key_8;                   //두번째 방에서 얻은 힌트
void startStory_2() {
	printf("문을 열고 밖을 내다보니, 저 멀리 연구원인 듯한 사람이 엎드린 채 잠들어 있는 모습이 눈에 들어왔다.\n\n");
	printf("이상하게도, 본능적으로 저 사람에게 들키지 않는 편이 좋겠다는 생각이 들었다.\n\n");
}


void left() {
	system("cls");
	int x;
	printf("\"왼쪽에 가기로 마음먹었다.\n왼쪽엔 또 다른 문이 있었고 밖은 어디론가 통하는 복도였다\n들어가 볼까?\"\n");
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
	printf("역시나 문이 잠겨있다. \n비밀번호가 필요한 것으로 보인다.\n\n");
	printf("1. 비밀번호를 입력해본다.\n2. 다시 돌아간다.\n\n");
	int x;
	x = select();
	int password = 0;

	if ((x == 1) && (key_5 == 1)) {
		system("cls");
		printf("\"역시나 문이 잠겨있다. 비밀번호가 필요한 것으로 보인다. 아마 메모장의 단어의 획수와 관련있지 않을까?\"\n");
		printf("\n비밀번호를 입력해보자.\n");
		scanf("%d", &password);
		if (password == 3564) {
			printf("문이 열렸다!");

			if (key_6 == 0) {
				bad_ending1();
			}
			else {
				phase = 2;
				printf("\n\"들키지 않게 연구원 가운을 입고 밖을 나가는게 좋겠어\"\n\n");
			}
		}
		else {
			printf("\n비밀번호가 틀렸다.");
		}

	}
	else if (x == 1) {

		printf("\"\n비밀번호가 필요한 것으로 보인다. 단서를 모아보자\"");

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
	printf("누군가 돌아오기 전에 서둘러 서류들을 살펴보았다.\n\n");  //여기다가 여자 구출하는 단서 추가
	key_8 = 1;
}


void right_3() {
	system("cls");
	key_6 = 1;
	printf("아까부터 보이는 연구원들을 생각하면 유용하게 사용할 수 있을 것 같다.\n 연구실 가운을 서둘러 걸친 상태로 자리를 뜬다.\n\n");

}


void researcher() {
	system("cls");
	int x;
	printf("\"자고있는 연구원이 깨지 않게 조심스럽게 다가갔다.\n연구원이 엎드린 책상위에는 실험보고서라고 적힘 파일들과 그 옆엔 메모장이 놓여있었다.\n\n");
	printf("1. 파일을 살펴본다.\n\n2. 메모장을 본다..\n\n");
	x = select();
	if (x == 1) researcher_file();
	else if (x == 2) {
		system("cls");
		printf("\"메모장을 본다. 메모장에는 \"기억제거\"라는 글자가 적혀있다. 비밀번호와 연관이 있을까?\n");
		key_5 = 1;
	}
	else error();
}
