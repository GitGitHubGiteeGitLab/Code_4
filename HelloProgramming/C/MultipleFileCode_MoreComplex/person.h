#pragma once
#define NAME_LEN 20

typedef struct Person {
	char name[NAME_LEN + 5];
	int gender;
	double height;
	double weight;
}Person;

void printfPerson(const Person* p);
Person newPerson();
