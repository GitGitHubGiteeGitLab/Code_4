#define _CRT_SECURE_NO_WARNINGS 1
#include "person.h"
#include <stdio.h>

Person newPerson() {
	Person p;

	printf("Name(no more than 20 words):");
	scanf("%s", p.name);
	printf("Gender(Fmale: 0, Male: 1):");
	scanf("%d", &p.gender);
	printf("Height(m):");
	scanf("%lf", &p.height);
	printf("Weight(kg):");
	scanf("%lf", &p.weight);
	return p;
}

void printPerson(const Person* p) {
	printf("\nname\tgender\theight\tweight\n");
	printf("%s\t%d\t%.2lf\t%.2lf\n", p->name, p->gender, p->height, p->weight);
	return;
}
