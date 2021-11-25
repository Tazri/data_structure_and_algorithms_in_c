#include <stdio.h>

int main(void){
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

    number_one = 10; // --> o(2)
    number_two = 40; // --> o(3)
    result = number_one + number_two; // --> o(4)

    printf("result %d\n",result); // --> o(5)

    return 0; // --> o(6)
}

/**
 * Total execuation instruction is 6. 
 * It call o(6). It's mean it constant.
 * Simplify this time complexity call
 * o(1) or order of 1;
 * 
 * time complexity --> o(1)
 * space complexity --> o(1)
 * 
 * */