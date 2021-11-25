#include <stdio.h>
#include <time.h>

int main(void){
    // calculate program run time
    clock_t start_time,end_time;
    double total_time;
    start_time = clock();

    int a,b;
    a = 20;
    b = 30;
    printf("a + b : %d\n",a+b);

    end_time = clock();
    total_time = end_time - start_time;

    printf("\n>>>> This program Taken : %lf millisecound\n",total_time);
    printf("--\n-\n>>>> Finish Program <<<<\n");
}