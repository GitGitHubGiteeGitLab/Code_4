#define _CRT_SECURE_NO_WARNINGS 1
#include "person.h"

int main() {
	Person p = newPerson();
	printPerson(&p);
	return 0;
}