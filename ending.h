#pragma once



#include "insert.h"
#include <stdio.h>

void bad_ending1();
void normal_ending();
void happy_ending1();
void happy_ending2();	
void bad_ending2();


extern int delay;

void bad_ending1() {
	system("cls");
	const char* text = "\"조용히 문을 열고 나서는 순간… 앞에 누군가의 그림자가 서 있었다.경비였다. 순식간에 몸이 굳어버린 나를 놓치지 않고, 그는 곧바로 내 팔을 붙잡았다. 아무리 몸부림쳐도 소용없었다.다시는 놓치지 않겠다는 듯, 그들은 나를 철저히 감시하며 더욱 깊은 곳으로 나를 이끌었다.\n이제, 눈앞에는 한 치의 빛도 새어나가지 않는 어두운 방이 펼쳐져 있었다.무겁게 닫히는 문 뒤로 경비들이 잠겨버린 내 운명을 조용히 내려다보고 있었다.\n탈출은… 실패였다.내 기억도, 진실도, 이 어둠 속에서 영원히 묻히게 될 운명이었다.\"\n\n\"Bad Ending\"";
	slow_print(text, delay);
	exit(0);

}

void normal_ending() {
	system("cls");
	const char* text = "\"드디어 밖으로 탈출했다. 하지만 나는 여전히 아무것도 기억하지 못했다. 왜 이곳에 있었는데. 왜 나를 가두려 했는지... 기억하려고 할수록 머리는 더 아파왔고, 단편적인 감정만이 남아 있을 뿐이었다.\n불안과 의문이 내 안에서 소용돌이쳤지만, 탈출이 전부라는 생각에 나를 다잡았다. 이곳에서 벗어난건 성공이었지만, 답을 얻은 건 아무곳도 없었다.\"\n\n\"Normal Ending\"";
	slow_print(text, delay);
	exit(0);
}

void happy_ending1() {
	system("cls");
	const char* text = "\"밖으로 빠져나오자마자 우리는 함께 수년간의 진실을 담은 자료와 경험을 폭로하기로 결심했다.사진 속에만 머물렀던 그녀와 함께… 마침내 자유를 얻었다.연구소는 세상에 밝혀졌고, 고위직 임원의 추악한 음모도 수면 위로 드러나게 되었다.우리의 싸움은 끝났고, 진실은 마침내 빛을 보게 되었다.\n분명 그녀 없이는 불가능한 일이였겠지..\"\n\n\"Happy Ending\"";
	slow_print(text, delay);
	exit(0);

}

void happy_ending2() {
	system("cls");
	const char* text = "\"연구소를 빠져나오면서도, 머릿속은 여전히 텅 빈 듯 공허했다.내가 왜 갇혀 있었는지, 이 여자는 누구인지… 아무것도 떠오르지 않았다. 우리가 어느새 거리로 나와 차가운 공기를 들이마실 때까지, 모든 게 현실 같지 않았다.\"\n\n\"당신은 기억이 돌아오지 않았군요.\"  그녀가 조심스럽게 말을 꺼냈다. 그제야 그녀를 다시 마주 보며 고개를 끄덕였다. 설명을 듣고 싶었다.진실을 알고 싶었다.\n\n그녀는 천천히 나의 과거를 설명하기 시작했다. 내가 이 연구소에서 실험을 통해 기억을 지우려 했다는 것, 고위직의 음모를 폭로하려다 붙잡혔다는 것까지… 그녀의 말을 들으며 나는 마침내 이 모든 사건의 전말을 이해하게 되었다.\n\n비록 완전한 기억은 돌아오지 않았지만, 그녀의 설명 덕에 모든 조각이 맞춰지는 듯했다. 그렇게 우리는 그들의 음모를 밝혀내기로 결심했다. 우리의 폭로로 인해 연구소의 비밀이 세상에 드러났고, 진실이 마침내 세상의 빛을 보게 되었다.\n\n\"기억을 잃었어도, 진실은 결코 사라지지 않는다.\"  그녀의 말은 머릿속에 깊이 남았다. 우리의 싸움은 성공으로 끝났고, 이제는 잃어버린 기억 대신 또 다른 삶을 시작할 수 있었다.\n\n\"Happy Ending\"";
	slow_print(text, delay);
	exit(0);
}

void bad_ending2() {
	system("cls");
	const char* text = "\"문을 열고 밖으로 빠져나오는 데 성공했다. 그러나... 왜인지 모르게 허전한 기분이 들었다. 무엇인가를… 놓친 것 같은 기분.\n바깥으로 나온 나는 곧바로 경찰에 연락했다. 내가 겪은 끔찍한 실험과 음모를 폭로하려 했지만, 이상하게도 경찰은 아무런 조치도 취하지 않았다. 고위직 임원의 검은 손이 이미 경찰에까지 뻗쳐 있었다.\n아무리 소리쳐도 소용없었다. 다시금 손에 수갑이 채워졌고, 나는 차가운 감옥으로 끌려가 나의 기억은 다시 지워졌다, 나의 싸움은 그렇게 허무하게 막을 내렸다. 진실은 여전히 감추어진 채로 남았고, 모든 희망은 사라졌다.\"\n\n\"Bad Ending\"";
	slow_print(text, delay);
	exit(0);
}
