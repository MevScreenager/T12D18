#include "documentation_module.h"
#include<stdarg.h>

int validate(char* data) {
    int validation_result = !strcmp(data, Available_document);
    return validation_result;
}

void output(int* data, int len) {
    for (int i = 0; data[i] && i < len; i++)
        printf(" %d", data[i]);
}
