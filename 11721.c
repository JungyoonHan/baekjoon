#include <stdio.h>
#include <string.h>

int main(void)
{
	char string[100];
	int i = 0, length=0;

	scanf("%s", string);

	length = strlen(string);
	for (i = 0; i < length; i++) {
		printf("%c", string[i]);
		if ((i+1) % 10 == 0)
			printf("\n");
	}
    printf("\n");

	return 0;
}
//[출처] 2017_03_26 백준 알고리즘 문제 11721번 : 열 개씩 끊어 출력하기(문자열, C)|작성자 Kalios