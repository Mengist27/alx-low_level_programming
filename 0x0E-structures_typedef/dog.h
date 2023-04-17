#ifndef DOG_H

#define DOG_H

/**
 * struct dog - A dog's baasic information
 * @name: Name of dod
 * @age: Age of dog
 * @owner: Owner of dog
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
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
int main(void);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);


#endif
