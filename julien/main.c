#include <stdio.h>
#include <stdlib.h>
#include "module.h"

int main()
{
    Date *d = create_date(3, 9, 2000);
    print_date(d);
}