#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - Returns the length of the strings
 * @s: The strings to evalute
 *
 * Return: The length of the strings
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (s[l] != '\0')
	{
		l++;
	}
	return (l);
}

/**
 *  _strcpy - Copies of the strings pointed to the src including
 *  the terminating NULL byte (\0)
 *  to be the buffer pointed to by dest.
 *  @dest: Pointers to be the buffer in which we copy the string
 *  @src: The string to be copied
 *  Return: The pointe to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, k;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (k = 0; k < len; k++)
	{
		dest[k] = src[k];
	}
	dest[k] = '\0';
	return (dest);
}

/**
 * new_dog - Creates the new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 * Return: from pointer tor the new dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));

	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
