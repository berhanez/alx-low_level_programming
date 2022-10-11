#include "dog.h"
#include <stdlib.h>
int _strlen(char *str);
char *_strcopy(char *dest, char *src);

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: new struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	doggo->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	ndog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	ndog->name = _strcopy(ndog->name, name);
	ndog->age = age;
	ndog->owner = _strcopy(ndog->owner, owner);

	return (ndog);
}
/**
 * _strlen - Find length of a string.
 * @str: string
 * Return: string length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
/**
 * _strcopy - Copies a string pointed to by src
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */
char *_strcopy(char *dest, char *src)
{
        int i;

        for (i = 0; src[i]; i)
                dest[index] = src[index];

        dest[index] = '\0';

        return (dest);
}

