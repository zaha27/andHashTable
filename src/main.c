#include "hash_table.h"
#include <stdio.h>

int main() {
    ht_hash_table* ht = ht_new();

    ht_insert(ht, "key1", "value1");
    ht_insert(ht, "key2", "value2");
    ht_insert(ht, "key3", "value3");

    printf("Search key1: %s\n", ht_search(ht, "key1"));
    printf("Search key2: %s\n", ht_search(ht, "key2"));
    printf("Search key3: %s\n", ht_search(ht, "key3"));

    ht_delete(ht, "key2");
    printf("Search key2 after delete: %s\n", ht_search(ht, "key2"));

    ht_del_hash_table(ht);

    return 0;
}
