
#include <stdio.h>
#include <pthread.h>

void * helloWorld(){
    printf("Hello World for fun\n");

    return NULL;
}

int main(int argc, char const *argv[])
{
    pthread_t thread;
    pthread_create(&thread, NULL, helloWorld, NULL);
    pthread_join(thread, NULL);
    pthread_exit(NULL);

    return 0;
}
