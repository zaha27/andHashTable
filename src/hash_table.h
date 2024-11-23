#ifndef HASH_TABLE_H_
#define HASH_TABLE_H_

#include <stdlib.h>
#include <string.h>

#define HT_INITIAL_BASE_SIZE 53
#define HT_PRIME_1 163
#define HT_PRIME_2 157

typedef struct {
    char* key;
    char* value;
} ht_item;

typedef struct {
    int base_size;
    int size;
    int count;
    ht_item** items;
} ht_hash_table;

extern ht_item HT_DELETED_ITEM;

ht_hash_table* ht_new();
void ht_del_hash_table(ht_hash_table* ht);
void ht_insert(ht_hash_table* ht, const char* key, const char* value);
char* ht_search(ht_hash_table* ht, const char* key);
void ht_delete(ht_hash_table* ht, const char* key);

#endif