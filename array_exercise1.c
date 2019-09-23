#include <stdio.h>
#include <math.h>
#include <time.h>
struct creature{
    float x;
    float y;
    char name[];   //for pokemon specific movement to be implemented in the future
};
void delay( int second){
    clock_t start_time = clock();
    
    while (clock() < start_time + second);
}
void execute_behavior(struct creature *c)
{
    /* enter behavior of creature in this function */
    c->x = c->x + 1;
    c -> y = c->y -0.5;
}


int main (void){
    int i;
    int j;
    struct creature pokemon[12];
    j = 0;
    for (i = 0; i < 12; i++){
        pokemon[i].x = (float)i;
        pokemon[i].y = (float)(12-i);
    }
    for (;;){
        j= j+1;
        printf (" iteration number: %d\n",j);   //print out iteration number, for tracking of pokemon progress
        for ( i = 0; i < 12; i++) {
            execute_behavior(&(pokemon[i]));
        }

        for (i = 0; i < 12; i++){
            printf("creature %d: (%.2f, %.2f) \n", i, pokemon[i].x, pokemon[i].y);
        }
    delay(1000000);
    printf("\n");
    }
    return 0;
}

