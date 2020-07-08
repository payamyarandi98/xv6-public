#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int pid1, value1 = 80;
    int pid2, value2 = 10;

    pid1 = fork();
    pid2 = fork();

    set_priority(pid1, value1);
    set_priority(pid2, value2);
}