#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
} node_t;

// leaving out tail for simplicity but may be included and is in hw

typedef struct list {
    node_t* head;
    // node_t* tail;
    int size;
} list_t;

// other things you could do, insert at position, find if a value exists in the
// list
// note insert can use the push front or push back functions!

node_t* make_node(int data) {
    // to do
    node_t* node = (node_t*)malloc(sizeof(node_t));
    node->data = data;
    node->next = NULL;

    return node;
}

void push_front(list_t* list, int data) {
    // check if list is null
    if (list == NULL) {
        return;
    }
    // make a new node
    node_t* new_node = make_node(data);

    // if size is 0 assign head to new node
    if (list->size == 0) {
        list->head = new_node;
        list->size++;
        return;
    }
    // if size > 0 insert node and change head

    new_node->next = list->head;
    list->head = new_node;

    list->size++;
    // increment size
}

void push_back(list_t* list, int data) {
    // check if list is null
    // make new node
    // is there already an element? If not initialize head
    // otherwise iterate until last node found and then insert
    // don't forget to increment size
}

int get_node_data_helper(node_t* node, int position) {
    // base case
    if (node == NULL || position < 0) {
        return -1;
    }

    if (position == 0) {
        return node->data;
    }

    return get_node_data_helper(node->next, position - 1);
    // are we at the right position? yes-> return data, no? recursively call
}

int get_node_data(list_t* list, int position) {
    // check if list is null
    if (list == NULL) {
        return 0;
    }
    // call helper
    return get_node_data_helper(list->head, position);
}

void remove_node(list_t* list, int position) {
    // check if list or head is null and if position is valid
    // if position is 0 than reassign head and free prev head

    // iterate while position > 0 (leep track of prev and curr)
    // crop out current node
    // free
    //
    // don't forget to decrement size
}

// this could easily be modified to search for a value instead of printing
// everything
void print_nodes(node_t* node) {
    // todo
    while (node != NULL) {
        printf("%d, ", node->data);
        node = node->next;
    }

    printf("\n");
}

void free_nodes(node_t* node) {
    // base case
    if (node == NULL) {
        return;
    }
    // recursive case
    free_nodes(node->next);
    free(node);
}

int main() {
    node_t* start = make_node(1);
    node_t* mid = make_node(2);
    node_t* end = make_node(3);

    start->next = mid;
    mid->next = end;

    printf("Should be 1, 2, 3\n");
    print_nodes(start);

    free_nodes(start);

    list_t* list = malloc(sizeof(list_t));
    list->head = NULL;
    list->size = 0;

    push_front(list, 5);

    printf("Should be 5\n");
    print_nodes(list->head);

    push_front(list, 2);
    push_front(list, 1);
    push_front(list, 100);

    printf("Should be 100, 1, 2, 5\n");
    print_nodes(list->head);

    int data = get_node_data(list, 3);
    printf("Should be 5\n");
    printf("%d\n", data);
    /*
    push_back(list, 0);

    printf("Should be 100, 1, 2, 5, 0\n");
    print_nodes(list->head);

    printf("Should be 5\n");
    printf("%d\n", get_node_data(list, 3));

    printf("Should be -1\n");
    printf("%d\n", get_node_data(list, 10));

    remove_node(list, 0);

    printf("Should be 1, 2, 5, 0\n");
    print_nodes(list->head);

    remove_node(list, 3);

    printf("Should be 1, 2, 5\n");
    print_nodes(list->head);

    remove_node(list, 1);

    printf("Should be 1, 5\n");
    print_nodes(list->head);

    free_nodes(list->head);
    free(list);
*/
    return 0;
}

