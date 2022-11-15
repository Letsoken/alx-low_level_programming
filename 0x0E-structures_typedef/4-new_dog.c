#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
  * _strlen - determine length of string
  * @s: pointer to an char
  * Return: index i
  */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
	{
		i++;
	}
	return (i);
}


/**
  * *_strcpy - displays n elements of an array
  * @dest : pointer to destination
  * @src : pointer to source
  * Return: pointer to destination
  */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}

/**
  * new_dog - Initialize a variable of type struct dog
  * @name: Name of dog
  * @age: Age of dog
  * @owner: Owner of dog
  * Return: Pointer to an initialized dog type variable
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	my_dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	my_dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	my_dog->name = _strcpy(my_dog->name, name);
	my_dog->age = age;
	my_dog->owner =  _strcpy(my_dog->owner, owner);

	return (my_dog);
}
