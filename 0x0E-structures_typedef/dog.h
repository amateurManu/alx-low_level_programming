#ifndef _DOG_
#define _DOG_

/**
 * struct dog - properties for a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's keeper
 *
 * Description: the declarations describe a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;

#endif /* _DOG_ */
