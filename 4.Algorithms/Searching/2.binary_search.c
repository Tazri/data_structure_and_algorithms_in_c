#include <stdio.h>
#include <time.h>

// function prototype
int binary_search(int array[],int left,int right,int target);

int main(void){
    // create necessary variable
    time_t start_time = clock();
    time_t end_time;
    double elapsed_time;

    int size = 12;
    int numbers[] = {
        12,15,19,20,24,27,33,55,102,156,302,492
    };

    printf("%d hase index in = %d\n",12,binary_search(numbers,0,size-1,12));
    printf("%d hase index in = %d\n",302,binary_search(numbers,0,size-1,302));
    printf("%d hase index in = %d\n",500,binary_search(numbers,0,size-1,500));
    printf("%d hase index in = %d\n",22,binary_search(numbers,0,size-1,22));
    printf("%d hase index in = %d\n",156,binary_search(numbers,0,size-1,156));
    

    // calculate time
    end_time = clock();
    elapsed_time = (double) (end_time - start_time) / 1000;

    printf("\n\n---\n--\n-\n>>>> Program finish in %lf Secound\n",elapsed_time);

    return 0;
}

// binary_search function
int binary_search(
    int array[], // array where search the value
    int left, // index where search is started
    int right, // index where search is ended
    int target // which one search in array
){
    // create necessary variable
    int middle;

   // logic --> Binary Search
    while (left <= right)
    {   
        middle = (left+right) / 2;
        
        if(array[middle] == target){
            return middle;
        }else if(target < array[middle]){
            right = middle - 1;
        }else{
            left = middle + 1;
        }
    }
    return -1;
    
}