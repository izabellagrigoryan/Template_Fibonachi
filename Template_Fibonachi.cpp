// Template_Fibonachi.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// Template metaprogram to calculate Fibonacci number at compile time
template <int N>
struct Fibonacci {
    static const unsigned long value = Fibonacci<N - 1>::value + Fibonacci<N - 2>::value;
};

// Base case for Fibonacci<0>
template <>
struct Fibonacci<0> {
    static const unsigned long value = 0;
};

// Base case for Fibonacci<1>
template <>
struct Fibonacci<1> {
    static const unsigned long value = 1;
};

int main() {
    // Calculate Fibonacci numbers at compile time
    unsigned long int fib5 = Fibonacci<5>::value; 
    unsigned long int fib10 = Fibonacci<10>::value;

    // Output the results at compile time
    std::cout << "Fibonacci number at index 5: " << fib5 << std::endl;
    std::cout << "Fibonacci number at index 10: " << fib10 << std::endl;

    return 0;
}
