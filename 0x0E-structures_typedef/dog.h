#ifndef DOG_H
#define DOG_H
#include <stddef.h>
#include<stdio.h>
/*
 *struct dog - stores data entries for variable dog
 *@name:first member
 *@age: second entry
 *@owner: third entry
 *
 *Description: struct dog sores the data of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */
