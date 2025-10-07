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

    // intialize buckets

    // allocate for arrayOfLists

    // initialize each entry of arrayOfLists

    // initialize hash function

    // return newly made hashmap
}

void hashmap_insert(hashmap_t* in, char* key_in, int value) {
    // allocate for new pair

    // set new pair key and value

    // make a new node

    // initialize new node

    // get the bucket

    // if no entry in bucket, insert

    // if already has entry in bucket, prepend
}

void hashmap_printkeyValues(hashmap_t* in) {
    // iterate over each bucket

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
