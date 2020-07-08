#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char *argv[])
{
    int wtime, rtime;
    
    if (fork() == 0)
    {
        printf(1, "child pid : %d\n", getpid());
    }
    else
    {
        for (int i = 0; i < 256; i++)
        {
            printf(1, "s");
        }
        
        waitx(&wtime, &rtime);

        printf(1, "\n wait time : %d \n run time : %d \n", wtime, rtime);
    }
    exit();
}