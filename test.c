#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int
main(int argc, char *argv[])
{
    if (fork() == 0)
    {
        if (fork() == 0)
        {
            char * s1 = (char *)malloc(sizeof(char));

            sleep(5);

            free(s1);
        }
        else
        {
            char * s2 = (char *)malloc(sizeof(int));

            sleep(5);

            free(s2);
        }
    }
    else
    {
        if (fork() == 0)
        {
            char * s3 = (char *)malloc(sizeof(char));

            sleep(5);

            free(s3);
        }
        else
        {
            char * s4 = (char *)malloc(sizeof(char));

            sleep(2);

            free(s4);

            pinfo();
        }
    }

    exit();
}