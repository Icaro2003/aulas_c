#include <stdio.h>

typedef struct
{
    int day, mounth, year;
} date_t;

int main()
{
    date_t dt;
    dt.day = 8;
    dt.mounth = 7;
    dt.year = 2003;

    return 0;
}