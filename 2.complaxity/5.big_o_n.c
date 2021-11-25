#include <stdio.h>

// function prototype
int sum(int);

int main(void){
    return 0;
}

int sum(int n){
    int sum,i; // --> O(1)

    /**
     * space complexity for this program :
     * sum --> O(1)
     * i --> O(1)
     * n --> O(1)
     * 
     * S(x) = 1 + 1 + 1
     * S(x) = 3
     * S(x) = O(3)
     * S(x) = O(1)
     * 
     * space complexity is O(1)
     * 
     * */

    sum = 0; // --> O(1)

    for(i = 1; i <= n;i++){// --> O(n+1)
        sum += i; // --> O(n)
    }


    return sum; // --> O(1)
}

/**
 * time complexity for this program
 * t(x) = 1 + 1 + (n+1) + n + 1
 * t(x) = 4+2n
 * t(x) = 2n + 4
 * t(x) = O(2n + 4)
 * t(x) = O(n)
 * 
 * */