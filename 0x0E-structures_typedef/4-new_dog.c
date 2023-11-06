#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	int a, new_name, new_owner;

	n_dog = malloc(sizeof(*n_dog));

	for (new_name = 0; name[new_name] != '\0'; new_name++)
		;
	for (new_owner = 0; owner[new_owner] != '\0'; new_owner++)
		;

	(*n_dog).name = malloc(new_name + 1);
	(*n_dog).owner = malloc(new_owner + 1);

	for (a = 0; a < new_name; a++)
		(*n_dog).name[a] = name[a];
	(*n_dog).name[a] = '\0';

	(*n_dog).age = age;

	for (a = 0; a < new_owner; a++)
		(*n_dog).owner[a] = owner[a];
	(*n_dog).owner[a] = '\0';

	return (n_dog);
}
