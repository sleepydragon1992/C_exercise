#include <stdlib.h>

#define INITIAL_SIZE 10
#define BUCKET_SIZE 5

static int data_count;
static int data_size;
static int *data;

int main(void){
    void add_data(int new_data);
    int i;

    //first, initialize the data area:
    data_count = 0;
    data_size = INITIAL_SIZE;
    data = malloc(data_size * sizeof(int));

    //now add a bunch of data
    for (i = 0; i < 23; i++){
        add_data(i);
    }

    return 0;
}

void add_data(int new_data){
    /* if data_count == data_size, the area is full and 
    need to be realloc()'d before we can add another: */
    if (data_count == data_size){
        //we are full up, so add a bucket
        data_size += BUCKET_SIZE;
        data = realloc(data, data_size * sizeof(int));
    } 
    // now store the data
    *(data+data_count) = new_data;
    data_count++;
    
}