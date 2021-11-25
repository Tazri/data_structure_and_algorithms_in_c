#include <stdio.h>

// function prototype
int sum(int size,int [size][size]);
int sum_two(int size,int [size][size][size]);

int main(void){
    return 0;
}

// sum function
int sum(int size,int array[size][size]){
    int row,col,sum; // --> O(1)

    /**
     * total space complecity
     * size --> O(1)
     * array --> O(n*n) 
     * row --> O(1)
     * col --> O(1)
     * sum --> O(1)
     * 
     * calculate space complexity
     * S(x) = 1 + n*n + 1 + 1 + 1
     * S(x) = 4 + n^2
     * S(x) = O(n^2+4)
     * S(x) = O(n^2)
     * 
     * */

    sum = 0; // --> O(1)
    for(row = 0; row < size;row++){ // --> O(n+1)
        for(col = 0; col < size;col++){ // --> O(n*(n+1))
            sum = sum + array[row][col]; // --> O(n*n)
    }

    return sum; // --> O(n)
}

/**
 * calculate time complexity
 * T(x) = 1 + 1 + (n+1) + n*(n+1) + n*n + 1
 * T(x) = 4 + n + n^2 + n + n^2
 * T(x) = 2n^2 + 2n + 4
 * T(x) = O(2n^2 + 2n + 4)
 * T(x) = O(n^2)
 * 
 * total time complexity is
 * O(n^2) 
 * 
 * */

// // function sum_two
// int sum_two(int size,int array[size][size][size]){
//     int t,row,col,sum; // --> O(1)
    
//     /**
//      * calculate space complaxity
//      * size --> O(1)
//      * array --> O(n*n*n)
//      * t --> O(1)
//      * row --> O(1)
//      * col --> O(1)
//      * sum --> O(1)
//      * 
//      * S(x) = 1 + (n*n*n) + 1 + 1 + 1 + 1
//      * S(x) = n^3 + 5
//      * S(x) = O(n^3 + 5)
//      * S(x) = O(n^3)
//      * 
//      * space complaxity is O(n^3)
//      * 
//      * */

//     sum = 0; // --> O(1)
//     for(t = 0; t < size;t++){ // --> O(n+1)
//         for(row = 0; row < size;row++){ // --> O(n*(n+1))
//             for(col = 0;col < size;col++){ // --> O(n*n*(n+1))
//                 sum+= array[t][row][col]; // --> O(n*n*n)
//             }
//         }
//     }

//     return sum; // O(1)
// }

// /**
//  * calculate total time complexity
//  * T(x) = 1 + 1 + (n + 1) + (n* (n + 1)) + (n*n*(n+1)) + (n*n*n) + 1
//  * T(x) = 4 + n + n^2 + n + n^3 + n^2 + n^3
//  * T(x) = 2n^3 + 2n^2 + 2n + 4
//  * T(x) = O(2n^3 + 2n^2 + 2n + 4)
//  * T(x) = O(n^3) 
//  * 
//  * time complexity O(n^3)
//  * 
//  * */