#include <stdio.h>
#include <errno.h>
#include <dlfcn.h>

int main(int argc, char *argv[])
{
    dlerror();
    void *lib = dlopen("./libshared.so", RTLD_GLOBAL | RTLD_NOW);
    printf("%s\n", dlerror());

    return 0;
}


