#include <stdio.h>
#include <string.h>

typedef struct Person {
    int age;
    char sex;
    /* char *name; */
} Person;

Person *copy_person(const Person *p)
{
    Person copy;
    /* copy.age = p.age + 1; */
    /* copy.sex = p.sex; */
    copy.age = p->age + 1;
    copy.sex = p->sex;
    /* strcpy(copy.name, p.name); */
    return &copy;
}

char *strcpy_local(char *d, char *s)
{
    int length = strlen(s);
    for (int i = 0; i < length; ++i) {
        d[i] = s[i];
    }
    d[length - 1] = '\0';
    return d;
}

int main(int argc, char *argv[])
{
    int *carola;
    printf("carola: %d\n", *carola);

    Person original;
    original.age = 17;
    original.sex = 'm';
    /* original.name = "asfasdf"; */

    Person *clone = copy_person(&original);

    printf("clone.age = %d\n", clone->age);
    /* printf("clone.age = %d\n", clone.age); */



    return 0;
}
