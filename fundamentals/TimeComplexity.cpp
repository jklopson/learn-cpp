//introduction to big O notation
#include <iostream>
using namespace std;

int main(){
    int n = 5;

    //O(n) denotes the time complexity of a given program
    //where n generally represents the input size. for example:

    for(int i = 0; i < n; i++){
            //code
    }//represents O(n) complexity


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
                //code
        }
    }//represents O(n^2) complexity
    
    //Time complexity is represented in order of magnitude, 
    //rather than exactly how many times the code within
    //a loop will be executed.

    //time complexity can depend on several variables,
    //and it can also depend on the number of function calls
    //and the complexity of a single call in recursive
    //functions.
    
    //complexity clauses
    // O(1): the running time of a constant time algorithm
    // does not depend on the input size. It is a direct
    // formula that calculates an answer.
    //
    // O(logn): often halves the input size at each step. 
    // The running time of any such algorithm is logarithmic,
    // as log_2 n equals the number of times n must be 
    // divided to get to 1.
    //
    // O(sqrt(n)): slower than logn, faster than O(n)
    //
    // O(n): linear time complexity, goes through the input
    // a constant number of times.
    //
    // O(n log n): will often indicate that the algorithm sorts
    // the input, because the time complexity of efficient
    // sorting algorithms is O(n log n).
    //
    // O(n^2): quadratic algorithm, often represented by
    // nested loops.
    //
    // O(n^3): cubic algorithm, often 3 nested loops.....
    //
    // O(2^n): This often signifies that the algorithm iterates
    // through all subsets of the set of elements n.
    //
    // O(n!): This often signifies that the algorithm iterates
    // through every possible permutation of elements n.
    
}

