### Tasks

**0. >>> ht = {}**
Write a function that creates a hash table.

Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
where size is the size of the array
Returns a pointer to the newly created hash table
If something went wrong, your function should return NULL

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    printf("%p\n", (void *)ht);
    return (EXIT_SUCCESS);
}
```

**1. djb2**
Write a hash function implementing the djb2 algorithm.

Prototype: `unsigned long int hash_djb2(const unsigned char *str);`

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;

    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    return (EXIT_SUCCESS);
}
```

**2. key -> index**
Write a function that gives you the index of a key.

Prototype: `unsigned long int key_index(const unsigned char *key, unsigned long int size);`

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    char *s;
    unsigned long int hash_table_array_size;

    hash_table_array_size = 1024;
    s = "cisfun";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "Don't forget to tweet today";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));
    s = "98";
    printf("%lu\n", hash_djb2((unsigned char *)s));
    printf("%lu\n", key_index((unsigned char *)s, hash_table_array_size));  
    return (EXIT_SUCCESS);
}
```

**3. >>> ht['betty'] = 'cool'**
Write a function that adds an element to the hash table.

Prototype: `int hash_table_set(hash_table_t *ht, const char *key, const char *value);`

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    return (EXIT_SUCCESS);
}
```

**4. >>> ht['betty']**
Write a function that retrieves a value associated with a key.

Prototype: `char *hash_table_get(const hash_table_t *ht, const char *key);`

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Streetz");
    key = strdup("Tim");
    value = strdup("Britton");
    hash_table_set(ht, key, value);
    key[0] = '\0';
    value[0] = '\0';
    free(key);
    free(value);
    hash_table_set(ht, "98", "Battery Street"); 
    hash_table_set(ht, "hetairas", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z");
    hash_table_set(ht, "mentioner", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z Chu");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}
```

**5. >>> print(ht)**
Write a function that prints a hash table.

Prototype: `void hash_table_print(const hash_table_t *ht);`

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_print(ht);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Street");
    hash_table_print(ht);
    return (EXIT_SUCCESS);
}
```

**6. >>> del ht**
Write a function that deletes a hash table.

Prototype: `void hash_table_delete(hash_table_t *ht);`

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    char *key;
    char *value;

    ht = hash_table_create(1024);
    hash_table_set(ht, "c", "fun");
    hash_table_set(ht, "python", "awesome");
    hash_table_set(ht, "Bob", "and Kris love asm");
    hash_table_set(ht, "N", "queens");
    hash_table_set(ht, "Asterix", "Obelix");
    hash_table_set(ht, "Betty", "Cool");
    hash_table_set(ht, "98", "Battery Streetz");
    key = strdup("Tim");
    value = strdup("Britton");
    hash_table_set(ht, key, value);
    key[0] = '\0';
    value[0] = '\0';
    free(key);
    free(value);
    hash_table_set(ht, "98", "Battery Street"); 
    hash_table_set(ht, "hetairas", "Bob

");
    hash_table_set(ht, "hetairas", "Bob Z");
    hash_table_set(ht, "mentioner", "Bob");
    hash_table_set(ht, "hetairas", "Bob Z Chu");
    hash_table_print(ht);
    hash_table_delete(ht);
    return (EXIT_SUCCESS);
}
```

**7. $ht['Betty'] = 'Cool'**
For this task, please:

Read PHP Internals Book: HashTable
Use the same hash function
Use these data structures:

```c
/**
 * struct shash_node_s - Node of a sorted hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 * @sprev: A pointer to the previous element of the sorted linked list
 * @snext: A pointer to the next element of the sorted linked list
 */
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - Sorted hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 * @shead: A pointer to the first element of the sorted linked list
 * @stail: A pointer to the last element of the sorted linked list
 */
typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;
```

Rewrite the previous functions using these data structures:

- `shash_table_t *shash_table_create(unsigned long int size);`
- `int shash_table_set(shash_table_t *ht, const char *key, const char *value);`
- `char *shash_table_get(const shash_table_t *ht, const char *key);`
- `void shash_table_print(const shash_table_t *ht);`
- `void shash_table_print_rev(const shash_table_t *ht);`
- `void shash_table_delete(shash_table_t *ht);`

```c
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    shash_table_t *ht;

    ht = shash_table_create(1024);
    shash_table_set(ht, "y", "0");
    shash_table_print(ht);
    shash_table_set(ht, "j", "1");
    shash_table_print(ht);
    shash_table_set(ht, "c", "2");
    shash_table_print(ht);
    shash_table_set(ht, "b", "3");
    shash_table_print(ht);
    shash_table_set(ht, "z", "4");
    shash_table_print(ht);
    shash_table_set(ht, "n", "5");
    shash_table_print(ht);
    shash_table_set(ht, "a", "6");
    shash_table_print(ht);
    shash_table_set(ht, "m", "7");
    shash_table_print(ht);
    shash_table_print_rev(ht);
    shash_table_delete(ht);
    return (EXIT_SUCCESS);
}
```

### Repo:

- GitHub repository: alx-low_level_programming
- Directory: 0x1A-hash_tables
- Files: 0-hash_table_create.c, 1-djb2.c, 2-key_index.c, 3-hash_table_set.c, 4-hash_table_get.c, 5-hash_table_print.c, 6-hash_table_delete.c, 100-sorted_hash_table.c
