#include <stdio.h>
#include <time.h>

// function prototype
int linear_search(int size,int target,int array[size]);

int main(void){
    // create variable for calculate time
    time_t start_time,end_time;
    double elapsed_time;
    start_time = clock();

    // create numbers list
    int numbers[] = { 2,45,43,343,21,234,325,2345,216,219 };

    // try linear search on numbers
    printf("try 33 find in numbers, index = %d\n",linear_search(10,33,numbers));
    printf("try 43 find in numbers, index = %d\n",linear_search(10,43,numbers));
    printf("try 2345 find in numbers, index = %d\n",linear_search(10,2345,numbers));
    printf("try 222 find in numbers, index = %d\n",linear_search(10,222,numbers));

    end_time = clock();
    elapsed_time = (double)(end_time - start_time)/1000;
    printf("\n\n--\n-\n>>>> Program Finish in %lf Secound.\n",elapsed_time);
    return 0;
}

// linear_search function
int linear_search(int size,int target,int array[size]){
    /**
     * target -> find this number index in array
     * size -> size of array
     * array -> store some data where we search
     * 
     * */

    // if find the number return index or return -1

    // logic -> linear search
    int index;
    for(index = 0; index < size;index++){
        if(array[index] == target){
            return index;
        }
    }
    return -1;

    // logic -> another logic of linear search
    index = 0;
    while(index < size){
        if(array[index++] == target){
            return index - 1;
        }
    }
    return -1;
}