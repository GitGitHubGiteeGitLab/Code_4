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

//��enter�����׿��Ը�д��Ҫ����putchar()ʹ��
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

//���뻻���ǻس�������ֳ�����enter�����׿��Ը�д��
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