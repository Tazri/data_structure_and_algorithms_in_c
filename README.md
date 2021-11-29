![Data Structues](./asset/icon/c-data-structures.svg) ![Algorithms](./asset/icon/c-algorithms.svg)

# Data Structures And Algorithms

Data Structures and algorithms is the important part of computer programming.Because it help to write best and efficent code. In this repository learn about Data Structure and algorithms.

![Data Structues And Algorithms](./asset/img/datastructures_algorithms.jpg)

### Index

- [Inroduction of DSA](#Inroduction_of_DSA)
  - [Algorithm](#algorithms)
  - [Data Structure](#Data_Structures)
- [Complaxity](#complaxity)
  - [Time Complaxity](#Time_Complaxity)
  - [Space Complaxity](#Space_Complaxity)
  - [Big O](#Big_O)
    - [O(1)](<#O(1)>)
    - [O(log n)](<#O(log_n)>)
    - [O(n)](<#O(n)>)
    - [O(nlog n)](<#O(nlog_n)>)
    - [O(n^2)](<#O(n^2)>)
    - [O(2^n)](<#O(2^n)>)
    - [O(n!)](<#O(n!)>)
- [Data Structure](#Data_Structure)
- [Algorithm](#Algorithm)
  - [Searching Algorithms](#Searching_Algorithms)
    - [Linear Search](#Linear_Search)
      - [Linear Search](#linear_search)
      - [Binary Search](#binary_search)

# Introduction_of_DSA

Let's got to introduce data structures and algorithms.

## Algorithms

**_What is Algorithms ?_**

In computer programming terms, an algorithms is a set of well-defined instruction to solve a particular problem. It take a set of input and produces a desired output.

**_For example :_**
An algorithms add two numbers :

1. Take two numbers inputs
2. Add numbers using the input + operator
3. Display the result

**_Qualities of good Algorithms_**

1. Input and output defined precisely
2. Each Step in the algorithms should be clear.
3. Algorithms should be effective among many different ways to solve a problem.
4. An algorithms should not include computer code. Instead algorithms should be written in such a way that it can be used in different programming language.

# Data_Structures

**_What are Data Structures ?_**

Data structures is a storage that is use to store and organize data. It is way arranging data on a computer so that it can be accessed and updated efficiently.

**_Type of Data structure :_**
Basically, data structures are divided into two categories :

1. Linear Data structure
2. Non-linear Data structure

### Linear Data structures

In linear data structures, the elements are arranged in squence one after the other. Since elements are arranged particular order, they are easy to implement.

However, when the complexity of the program increase, the linear data
structues might not be the best choose because of operational complexities.

**_Example of linear data structures :_**

1. Array
2. Stack
3. Queue
4. Linked List

### Non Linear Data structures :

Unlike linear data structures, elements in not-learner data structures are not in any sequence. Instead they are arranged in a hierarchical manner where one element will be connected to one or more elements.

Non-linear data structures are further divided into graph and tree based data
structures.

1. Graph Data Structures
2. Trees Data Structures

## Why learn DSA ?

- for make code scalable
- for increase problem solving sill
- for better in programming competition
- for be good software engineer
- for learn about Artificial Intelligence

# Complaxity

Sometimes, there are more than one way to solve a problem. We need to learn how to compare the performance different algorithms and choose the best one to solve a particular problem. While analyzing an algorithm, we mostly consider time complexity and space complexity. Time complexity of an algorithm quantifies the amount of time taken by an algorithm to run as a function of the length of the input. Similarly, Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run as a function of the length of the input.

## Time_Complaxity

Time complexity of an algorithm quanifies to run as a function of the length of the input.

## Space_Complaxity

Space complexity of an algorithm quantifies the amount of space or memory taken by an algorithm to run as a function of the length of the input.

## Big_O

![big_o](./asset/icon/complexity-big-o.svg)

We can not measurement time and space in secound and byte of computer program. Because this things varies on computer to computer.

**_Try to measure program execute time:_**

```c
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
```

**_First Time Output :_**

```
a + b : 50

>>>> This program Taken : 73.000000 millisecound
--
-
>>>> Finish Program <<<<
```

**_Secound Time Output :_**

```
a + b : 50

>>>> This program Taken : 80.000000 millisecound
--
-
>>>> Finish Program <<<<
```

We see that first time program take 73 millisecound and secound time it take 80 millisecound to solve same problem. It's mean how many time program take it defend on machine. That's why we can not calculate program time complexity with millisecound

In space complaxity int type data take 4 byte of memory. But some c compailer int take 8 byte of memory. Not only that. Some programming language do not have int type variable. So We can not measurement space in byte.

**_Three way to measurement time and space complexity :_**

1. Big O (O)
2. Theta (θ)
3. Omega (Ω)

**_In this case we learn about Big O complexity :_**
Example of sum of two number :

```c
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
```

In this program total execute 6 instruction. so we said it O(6) or Order of 6. But simplify this thing to O(1). Because the execuation syntax is constant. and space complexity is o(1);

So this program Time complexity is O(1) and space complexity is O(1)

**_Total 7 type of big o notation :_**

1. O(1)
1. O(log n)
1. O(n)
1. O(nlog n)
1. O(n^2)
1. O(2^n)
1. O(n!)

**_Big O graph :_**
![big-o-complexity](./asset/img/big-o-complexity-graph.png)

### O(1)

O(1) means time coplexity can not defined on input. It constant all time.

**_Example :_**

```c
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

```

    O(1) Mean Constant Time

### O(n)

O(n) means time complexity defined on input. It execute time is n th time.

**_Example :_**

```c
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
```

2n + 4 in here n is biggest. so we remove all number expcept n. Then time complexity is O(n)

    O(n) mean Linear Time

### O(n^2)

**_Example :_**

```c
#include <stdio.h>

// function prototype
int sum(int size,int [size][size]);

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
```

**_Let's see the another example :_**

```c
// function sum_two
int sum_two(int size,int array[size][size][size]){
    int t,row,col,sum; // --> O(1)

    /**
     * calculate space complaxity
     * size --> O(1)
     * array --> O(n*n*n)
     * t --> O(1)
     * row --> O(1)
     * col --> O(1)
     * sum --> O(1)
     *
     * S(x) = 1 + (n*n*n) + 1 + 1 + 1 + 1
     * S(x) = n^3 + 5
     * S(x) = O(n^3 + 5)
     * S(x) = O(n^3)
     *
     * space complaxity is O(n^3)
     *
     * */

    sum = 0; // --> O(1)
    for(t = 0; t < size;t++){ // --> O(n+1)
        for(row = 0; row < size;row++){ // --> O(n*(n+1))
            for(col = 0;col < size;col++){ // --> O(n*n*(n+1))
                sum+= array[t][row][col]; // --> O(n*n*n)
            }
        }
    }

    return sum; // O(1)
}

/**
 * calculate total time complexity
 * T(x) = 1 + 1 + (n + 1) + (n* (n + 1)) + (n*n*(n+1)) + (n*n*n) + 1
 * T(x) = 4 + n + n^2 + n + n^3 + n^2 + n^3
 * T(x) = 2n^3 + 2n^2 + 2n + 4
 * T(x) = O(2n^3 + 2n^2 + 2n + 4)
 * T(x) = O(n^3)
 *
 * time complexity O(n^3)
 *
 * */
```

    O(n^2) mean Quadratic Time

# Data_Structure

![Data Structues](./asset/icon/c-data-structures.svg)

# Algorithm

![Algorithms](./asset/icon/c-algorithms.svg)

What is Algorithms ? In computer programming terms, an algorithms is a set of well-defined instruction to solve a particular problem. It take a set of input and produces a desired output.

## Searching_Algorithms

![Searching_Algorithms](./asset/icon/algorithms-searching.svg)

Searching Algorithm are designed to check for an element or retrieve an element from any data structure where it is stored. Based on the type of search operation, these algorithms are generally classified into two categories :

1. **_Sequential Search :_** In this, the list or array is traversed sequentially and every element is checked.For example : **_Linear Search_**

2. **_Interval Search :_** These algorithms are specifially designed for searching in sorted data-structures. These type of searching algorithms are much more effcient than linear search as they repeatedly target the center of the search structure and divide the search space in half. For Example : **_Binary Search_**

## Linear_Search

![Linear-Search](./asset/icon/algorithms-linear-search.svg)

Linear is vary simple and easy search algorithms. In this type of search, a sequnetial search is made over all items one by one. Every item is checked and if a match is found then that particular item is returned, otherwise the search continues till the end of the data collection.

**_Linear Search Algorithms :_**

    linear serach(array[size],value)

    step 1: set i = 0
    step 2: i > size then goto step 5
    step 3: array[i] is equal value ? return i : next step;
    step 4: increase 1 value of i and goto step 2
    step 5: return -1
    step 6: end

**_Example of Linear Search :_**

```c
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
```

**_Time and Space Complexity :_**

Worst Case Time complaxity is O(n) and space complexity is O(1).

Space complexity is O(1) because here space is constant. One more thing, here array can not include space complexity beacuse this is not part of algorithm space.

Linear Search is Sequential Searching Algorithms.

## Binary_Search

![Binary Search](./asset/icon/algorithms-binary-search.svg)

Search a sorted array repeatedly dividing the search interval in half.Begin with an interval covering the whole array if the value of the search key is less then the item the middle of the interval, narrow the interval to lower half. Otherwise, narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

**_Binary Search Algorithms :_**

    input :
    1. sorted array(array),
    3. left value(left) where search is start,
    4. right value(right) where search is end,
    5. value(target) which is searing in array

    ouput :
    return index number if value(target) is found in array otherwise return -1

    algorithm :
    step 1: left > right ? then go step 7
    step 2: middle = (left+right) / 2
    step 3: array[middle] == target ? then got step 6
    step 4: array[middle] > target ? then right = middle - 1 and go step 1
    step 5 : array[middle] < target ? then left = middle + 1 and go step 1
    step 6: return middle as a index
    step 7: return -1 to message target is not found.

**_Example Of Binary Search :_**

```c
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
```

**_Time and Space complaxity :_**
Space complaxity is **_O(1)_**. Beacuse here array dose not part of algorithm.

Worst Case Time Complaxity is **_O(log n)_** and good case time complaxity is **_O(1)_**

Binary Search is Interval Searching Algorithms.
