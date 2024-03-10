#include "static.h"
#include <string.h>
#include <stdio.h>

int static_lib_function(char* msg)
{
    printf("Hi! I'm a static lib that receives '%s', and return '%d'\n", msg, strlen(msg));
    return strlen(msg);
}
