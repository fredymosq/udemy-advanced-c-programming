
#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main(int argc, char const *argv[])
{
    
    for (int i = 0; i < 10; i++)
    {
        printf("Hello world from C\n");
        sleep(2);
    }
    
    return 0;
}
