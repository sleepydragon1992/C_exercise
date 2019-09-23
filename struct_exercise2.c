#include <stdio.h>

struct mutantfrog {
    int num_legs;
    int num_eyes;
};

struct mutantfrog build_beejs_frog(){
    struct mutantfrog weirdfrog;
    weirdfrog.num_legs = 10;
    weirdfrog.num_eyes = 1;
    return weirdfrog;
}

int main (void){
    struct mutantfrog rudolph;
    rudolph = build_beejs_frog();

    printf("leg count: %d\n", rudolph.num_legs);
    printf("eye count: %d\n", rudolph.num_eyes);

    return 0;
}