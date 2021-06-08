#include <stdio.h>
#include <stdlib.h>
#include "Date.h"
#include "Person.h"

int main()
{
    Date *Anniv = create_date(18, 12, 2000);
    print_Date(Anniv);
    Person *Boby = create_Person("Lefast", "Roger", Anniv);
    print_Person(Boby);
}