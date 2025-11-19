#include<stdio.h>
#include<pthread.h>


void* hello_world(void *arg) {
    (void)(arg);
    printf("Hello multithreading world.\n");
    return (void*)0;
}

int main() {
    int exit_code = 0;
    pthread_t my_thread;

    printf("Is \n");
    exit_code = pthread_create(&my_thread, NULL, &hello_world, NULL);
    if (exit_code != 0) {
        return exit_code;
    }
    exit_code = pthread_join(my_thread, NULL);
    if (exit_code != 0) {
        return exit_code;
    }
    
    return exit_code;
}