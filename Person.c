#include <stdio.h>
#include <stdlib.h>
#include "Date.h"
#include "Person.h"

Person *create_Person(char *last_name, char *first_name, Date *Birthday)
{
    Person *Boby = (Person *)malloc(sizeof(Person));
    Boby->last_name = last_name;
    Boby->first_name = first_name;
    Boby->Birthday = Birthday;
    return Boby;
}

void print_Person(Person *Boby)
{
    printf("nom de famille %s prénom %s Date de naissance ", Boby->last_name, Boby->first_name);
    print_Date(Boby->Birthday);
}