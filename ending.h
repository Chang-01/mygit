#pragma once



#include "insert.h"
#include <stdio.h>

void bad_ending();



int delay = 10;

void bad_ending_1() {
	system("cls");
	const char* text = "\"������ ���� ���� ������ ������ �տ� �������� �׸��ڰ� �� �־���.��񿴴�. ���İ��� ���� ������� ���� ��ġ�� �ʰ�, �״� ��ٷ� �� ���� ����Ҵ�. �ƹ��� ���θ��ĵ� �ҿ������.�ٽô� ��ġ�� �ʰڴٴ� ��, �׵��� ���� ö���� �����ϸ� ���� ���� ������ ���� �̲�����.\n����, ���տ��� �� ġ�� ���� ������� �ʴ� ��ο� ���� ������ �־���.���̰� ������ �� �ڷ� ������ ��ܹ��� �� ����� ������ �����ٺ��� �־���.\nŻ������ ���п���.�� ��ﵵ, ���ǵ�, �� ��� �ӿ��� ������ ������ �� ����̾���.\"\n\n\"Bad ending\"";
	slow_print(text, delay);
	exit(0);

}