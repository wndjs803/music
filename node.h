#ifndef MUSIC_NODE_H
#define MUSIC_NODE_H
struct Node {

    char* data;

    struct Node* prev;

    struct Node* next;

};

typedef struct Node Node;
#endif //MUSIC_NODE_H
