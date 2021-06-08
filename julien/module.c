#include "module.h"
#include <stdio.h>
#include <stdlib.h>

Date *create_date(int day, int month, int year)
{
    Date *d = (Date *)malloc(sizeof(Date));
    d->day = day;
    d->month = month;
    d->year = year;
}

void print_date(Date *date)
{
    printf("%d/%d/%d\n", date->day, date->month, date->year);
}
