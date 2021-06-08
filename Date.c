#include <stdio.h>
#include <stdlib.h>
#include "Date.h"

Date* create_date(int day, int month, int year)
{
    Date* D=(Date*)malloc(sizeof(Date));
    D->day=day;
    D->month=month;
    D->year=year;
    return D;
}

void print_Date(Date* D)
{
    printf("jour %d mois %d années %d\n",D->day, D->month, D->year);
}