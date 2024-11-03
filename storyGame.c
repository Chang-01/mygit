#define _CRT_SECURE_NO_WARNINGS

#include "insert.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <time.h>

int phase=0;
int main(void) {
    int n;



    startStory();
    do {
        system("cls");
        if (phase == 1) {
            system("cls");   break;
        }
        printf("천장엔 세개의 전구들이 깜빡이며 빛을 비추고 있었다.\n\n1. 침대를 조사한다\n\n2. 책상을 조사한다.\n\n3. 문을 조사한다.\n\n4. 얻은 정보를 확인한다.\n\n0. 종료\n\n");
        n = select();

        switch (n) {
        case 1: bed();              system("pause");	system("cls");		break;
        case 2: desk();             system("pause");	system("cls");		break;
        case 3: door();             system("pause");	system("cls");		break;
        case 4: obtain();           system("pause");	system("cls");		break;
        case 0: printf("종료되었습니다.\n");		break;
        default:	 printf("잘못입력하였습니다.\n\n"); system("pause");	system("cls");
        }
    } while (n != 0);




    if (phase == 1) {
        do {
            printf("이제 어디로 이동할까.\n\n1. 왼쪽으로 간다.\n\n2. 오른쪽으로 간다.\n\n3. 연구원들에게 말을 건다.\n\n4. 얻은 정보를 확인한다.\n\n0. 종료\n\n");
            n = select();

            switch (n) {
            case 1: left();              system("pause");	system("cls");		break;
            case 2: right();             system("pause");	system("cls");		break;
            case 3: researcher();        system("pause");	system("cls");		break;
            case 4: obtain();            system("pause");	system("cls");		break;
            case 0: printf("종료되었습니다.\n");		break;
            default:	 printf("잘못입력하였습니다.\n\n"); system("pause");	system("cls");
            }
        } while (n != 0);

        return 0;
    }
}
