#include <stdio.h>
#include <time.h>
#include <string.h>

#include "print_module.h"

int main() {
    long int s_time;
    struct tm *m_time;
    char Module_load_successb[128] = "", buff[150] = "";
    s_time = time(NULL);
    m_time = localtime(&s_time);
    strftime(Module_load_successb, 128, "%X", m_time);
    strcat(strcat(strcat(buff, Log_prefix), Module_load_successb), Module_load_success_message);
    print_log(print_char, buff);
    return 0;
}
