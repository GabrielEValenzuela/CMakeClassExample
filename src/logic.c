#include "logic.h"

int add(int first_number, int second_number)
{
    return first_number + second_number;
}

int subtract(int first_number, int second_number)
{
    return first_number - second_number;
}

int multiply(int first_number, int second_number)
{
    return first_number * second_number;
}

double divide(int first_number, int second_number)
{
    if (second_number != 0)
    {
        return (double)first_number / second_number;
    }
    return -1.0;
}
