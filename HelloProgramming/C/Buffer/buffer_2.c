#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <conio.h>

int main() {
	char c = getchar();
	putchar(c);
	c = _getch();
	putchar(c);
	c = getchar();
	putchar(c);
	return 0;
}

//按enter回行首可以覆写，要搭配putchar()使用
int main2() {
	while (1) {
		char c;
		c = _getch();
		putchar(c);
		if (c == 'a') {
			break;
		}
	}
	return 0;
}

//输入换行是回车（像回字车，按enter回行首可以覆写）
int main1() {
	while (1) {
		char c;
		c = _getche();
		if (c == 'a') {
			break;
		}
	}

	return 0;
}