#include <stdio.h>

// function prototype
int sum(void);

int main(void){
    return 0;
}

int sum(void){
    int number_one,number_two,result; // --> o(1)


    /**
     * total space complexity
     * number_one --> o(1)
     * number_two --> o(2)
     * result --> o(3)
     *
     * it's mean space complexity is constant.
     * so call that o(1) or order of 1
     *
     * */

    number_one = 10; // --> o(1)
    number_two = 40; // --> o(1)
    result = number_one + number_two; // --> o(1)

    printf("result %d\n",result); // --> o(1)

    return 0; // --> o(1)
}

/**
 * time complexity 
 * T(x) = 1 + 1 + 1 + 1 + 1 + 1
 * T(x) = 6
 * T(x) = O(6)
 * T(x) = O(1)
 * 
 * time complexity is  O(1)
 * 
 * */