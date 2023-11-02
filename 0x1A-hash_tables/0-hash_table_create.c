#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: The size of the hash table
 * Description: Allocate a hash table using a given size
 * Return: A hash table, or NULL in case of error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
	{
		return (NULL);

	}

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_table->array) * size);

	if (hash_table->array == NULL)
	{
		return (NULL);
	}
	return (hash_table);
}
