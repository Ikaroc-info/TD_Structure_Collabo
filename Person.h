#include "Date.h"

typedef struct _Person
{
    char *last_name;
    char *first_name;
    Date *Birthday;
} Person;

Person *create_Person(char *last_name, char *first_name, Date *Birthday);
void print_Person(Person *Person);
