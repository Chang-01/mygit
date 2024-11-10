#pragma once



#include "insert.h"
#include <stdio.h>

void bad_ending();



int delay = 10;

void bad_ending_1() {
	system("cls");
	const char* text = "\"조용히 문을 열고 나서는 순간… 앞에 누군가의 그림자가 서 있었다.경비였다. 순식간에 몸이 굳어버린 나를 놓치지 않고, 그는 곧바로 내 팔을 붙잡았다. 아무리 몸부림쳐도 소용없었다.다시는 놓치지 않겠다는 듯, 그들은 나를 철저히 감시하며 더욱 깊은 곳으로 나를 이끌었다.\n이제, 눈앞에는 한 치의 빛도 새어나가지 않는 어두운 방이 펼쳐져 있었다.무겁게 닫히는 문 뒤로 경비들이 잠겨버린 내 운명을 조용히 내려다보고 있었다.\n탈출은… 실패였다.내 기억도, 진실도, 이 어둠 속에서 영원히 묻히게 될 운명이었다.\"\n\n\"Bad ending\"";
	slow_print(text, delay);
	exit(0);

}