#ifndef DOG_H
#define DOG_H
/**
* struct dog - Represents a dog with a name, age, and owner.
* @name: Pointer to a character string representing the name of the dog.
* @age: The age of the dog as a float.
* @owner: Pointer to a character string representing the name
*         of the owner of the dog.
* This structure represents a dog with its name, age, and owner's name.
*/

struct dog
{
	char *name;

	float age;

	char *owner;

};

#endif

