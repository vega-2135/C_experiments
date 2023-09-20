#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 100

typedef struct node {
    char *name;
    struct node *next;

} node;

bool check(node *p)
{

    while (p->name != NULL) {
        if (strcmp(p->name, "carola") == 0) {
            return true;
        }

        p = p->next;
    }

    return false;

}

int main(int argc, char *argv[])
{
    node *a = malloc(sizeof(node));
    a->name = malloc(SIZE);
    strcpy(a->name, "antonio");
    node *b = malloc(sizeof(node));
    b->name = malloc(SIZE);
    strcpy(b->name, "beatriz");
    node *c = malloc(sizeof(node));
    c->name = malloc(SIZE);
    strcpy(c->name, "carlos");

    node *start = a;
    a->next = b;
    b->next = c;
    check(start);

    return 0;
}

