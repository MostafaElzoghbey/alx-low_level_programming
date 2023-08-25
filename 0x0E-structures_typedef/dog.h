#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: attribute
 * @age: attribute
 * @owner: attribute
*/
struct dog
{
	char name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

#endif
