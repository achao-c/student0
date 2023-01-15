#include <stdio.h>
#include <sys/resource.h>

int main() {
    struct rlimit lim;
    getrlimit(RLIMIT_STACK, &lim);
    printf("stack size: %ld\n", lim.rlim_cur);

    getrlimit(RLIMIT_NPROC, &lim);
    printf("process limit: %ld\n", lim.rlim_cur);

    getrlimit(RLIMIT_NOFILE, &lim); // This specifies a value one greater than  
                                        // the  maximum  file  descriptor  number  that can be opened by this process. 
    printf("max file descriptors: %ld\n", lim.rlim_cur);
    return 0;
}
