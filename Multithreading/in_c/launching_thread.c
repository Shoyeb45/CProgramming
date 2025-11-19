# include<pthread.h>
# include<stdio.h>

pthread_t my_thread;

void* do_something(void* args) {
    (void)(args);
    printf("File Name: %s, Line: %d, Function Name: %s\n", __FILE__, __LINE__, __FUNCTION__);
    return (void*)0;
}

int launch_my_thread() {
    pthread_attr_t attr;
    int exit_code = 0;
    pthread_attr_init(&attr);

    pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

    exit_code = pthread_create(&my_thread, &attr, &do_something, NULL);
    return exit_code;
}

int main() {
    int exit_code = 0;
    exit_code = launch_my_thread();

    if (exit_code != 0) {
        return exit_code;
    }

    exit_code = pthread_join(my_thread, NULL);

    return exit_code;
}