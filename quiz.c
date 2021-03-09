#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void){
    vmprint();
    sbrk(1);
    vmprint();
    return 0;
}