#define _CRT_SECURE_NO_WARNINGS
#pragma once

#include "insert.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>

void startStory_3();
void forward();
void girl();


extern int key_1, key_2, key_3, key_4,key_5, key_6;




void startStory_3() {
	system("cls");
	printf("\"연구원 가운을 입고 카드키로 출입문을 열자 긴복도가 늘어져 있었다. 복도는 음산한 분위기로 가득 차 있었고, 곳곳에 경비원들이 자리를 지키고 있었다. 가운 덕분인가 경비들은 나를 붙잡지 않았다.\"\n\n");
	printf("정면에 밖으로 나가는 출구가 보이고 다른 방엔 힘없이 주저 앉아있는 여자가 갇혀있는게 보였다.\n\n");
}


void forward() {

}

void girl() {
	if (key_2 == 1) {
		printf("\"가까이 다가가자, 그제야 여자가 사진 속 인물이라는 걸 깨달았다. 잊을 수 없는 눈빛이었다. 그 순간 모든 기억이 떠올랐다. 그녀는 나와 함께 진실을 폭로하려던 동료였다.\"");
	}
	else {

	}
}


