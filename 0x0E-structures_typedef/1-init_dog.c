#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: no return.
 */
void init_dog(struct dog *p, char *name, float age, char *owner)
{
	if (p)
	{
		p->name = name;
		p->age = age;
		p->owner = owner;
	}
}
