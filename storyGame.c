#define _CRT_SECURE_NO_WARNINGS

#include "insert.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>











int main(void) {
	int n;



	startStory();
	do {
		printf("õ�忣 ������ �������� �����̸� ���� ���߰� �־���.\n\n1. ħ�븦 �����Ѵ�\n\n2. å���� �����Ѵ�.\n\n3. ���� �����Ѵ�\n\n4. ���� ������ Ȯ���Ѵ�.\n\n0. ����\n");
		n = select();

		switch (n) {

		case 1: bed();              system("pause");	system("cls");		break;
		case 2: desk();             system("pause");	system("cls");		break;
		case 3: door();             system("pause");	system("cls");		break;
		case 4: obtain();           system("pause");	system("cls");		break;
		case 0: printf("����Ǿ����ϴ�.\n");		break;
		default:	 printf("�߸��Է��Ͽ����ϴ�.\n\n"); system("pause");	system("cls");
		}
	} while (n != 0);



	return 0;
}