#include <stdio.h>
#include <stdlib.h>
#include "Date.h"

int main()
{
    Date* Anniv= create_date(18,12,2000);
    print_Date(Anniv);
}