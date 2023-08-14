#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
int _strlen(char *str);
/**
 * _strlen - a function that cal. length of string
 * @str: string to be counted
 * Return: length of string
 */
int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length = length + 1;
	}
	return (length);
}
/**
 * _strcpy - a function to copy two strings
 * @dest: destination string
 * @src: source string
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * new_dog - a function that creates a new dog.
 * @name: struct member
 * @age: struct member
 * @owner: struct member
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pup;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	pup = malloc(sizeof(dog_t));

	if (pup == NULL)
		return (NULL);
	pup->name = malloc(sizeof(char) * (len1 + 1));

	if (pup->name == NULL)
	{
		free(pup);
		return (NULL);
	}
	pup->owner = malloc(sizeof(char) * (len2 + 1));

	if (pup->owner == NULL)
	{
		free(pup->name);
		free(pup);
		return (NULL);
	}
	_strcpy(pup->name, name);
	_strcpy(pup->owner, owner);
	pup->age = age;
	return (pup);
}
