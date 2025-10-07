#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct pair {
    char* key;
    int value;
} pair_t;

typedef struct node {
    struct node* next;
    pair_t* kv;
} node_t;

int stringHash(char* myKey, int numberOfBuckets) {  // TODO
    return strlen(myKey) % numberOfBuckets;
}

typedef int (*hashFunctionPointer)(char*, int);

typedef struct hashmap {
    int buckets;
    node_t** arrayOfLists;

    hashFunctionPointer hashFunction;
} hashmap_t;

hashmap_t* hashmap_create(int _buckets) {
    // allocate for hashmap
    hashmap_t* map = (hashmap_t*)malloc(sizeof(hashmap_t));

    // intialize buckets
    map->buckets = _buckets;

    // allocate for arrayOfLists
    map->arrayOfLists = (node_t**)malloc(sizeof(node_t*) * _buckets);

    // initialize each entry of arrayOfLists
    for (int i = 0; i < _buckets; i++) {
        map->arrayOfLists[i] = NULL;
    }

    // initialize hash function
    map->hashFunction = stringHash;

    // return newly made hashmap

    return map;
}

void hashmap_insert(hashmap_t* in, char* key_in, int value) {
    // allocate for new pair
    pair_t* new_pair = (pair_t*)malloc(sizeof(pair_t));

    // set new pair key and value
    new_pair->value = value;

    new_pair->key = (char*)malloc(strlen(key_in) * sizeof(char) + 1);
    strcpy(new_pair->key, key_in);

    // make a new node
    node_t* new_node = (node_t*)malloc(sizeof(node_t));

    // initialize new node
    new_node->next = NULL;
    new_node->kv = new_pair;

    // get the bucket
    int bucket = in->hashFunction(key_in, in->buckets);

    // if no entry in bucket, insert
    if (in->arrayOfLists[bucket] == NULL) {
        in->arrayOfLists[bucket] = new_node;
    } else {
        new_node->next = in->arrayOfLists[bucket];
        in->arrayOfLists[bucket] = new_node;
    }

    // if already has entry in bucket, prepend
}

void hashmap_printkeyValues(hashmap_t* in) {
    // iterate over each bucket
    for (int i = 0; i < in->buckets; i++) {
        printf("bucket %d\n", i);

        node_t* iter = in->arrayOfLists[i];

        while (iter != NULL) {
            printf("Key: %s, Value: %d\n", iter->kv->key, iter->kv->value);
            iter = iter->next;
        }

        printf("\n");
    }

    // print bucket number

    // print out list in bucket
}

int main() {
    // create hashmap
    hashmap_t* map = hashmap_create(4);

    // insert several values
    hashmap_insert(map, "Carter", 5);
    hashmap_insert(map, "Doug", 1);
    hashmap_insert(map, "Cody", 2);

    // print key values
    hashmap_printkeyValues(map);

    return 0;
}
