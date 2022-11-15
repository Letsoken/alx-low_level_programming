#ifndef DOG_H
#define DOG_H

/**
  * struct dog - Create type dog
  * @name: Name of dog
  * @age: Age of dog
  * @owner: Owner of dog
  *
  * Description: all members are valid properties of dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
