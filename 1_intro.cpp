#include <iostream>  // Preprocessor directive: includes std lib [web:1]

// Macros: #define PI 3.14  // Uncomment to see expansion (not used here)

// Single-line comment: Explains code below.
/*
Multi-line comment:
- main() is entry point.
- int: return type (0 = success).
- argc/argv: command-line args (ignore for now).
*/

int subtract(int a, int b)
{
    int result;
    result = a - b;
    return result;
}

int main() {  // Program starts here.
    // std::cout << "Hello, World!" << std::endl;  // Step 1: Basic output.
    // Uncomment above, build/run (Ctrl+F5 in VS).

    // std::cout << "My name is " << "Student" << std::endl;  // Step 2: Concat.
    // std::cout << "2 + 3 = " << (2 + 3) << std::endl;       // Step 3: Expression.

    int wynik, liczba_a, liczba_b;

    std::cout << "Podaj pierwszą liczbę: ";
    std::cin >> liczba_a;
    std::cout << "Podaj drugą liczbę: ";
    std::cin >> liczba_b;

    wynik = subtract(liczba_a, liczba_b);
    std::cout << wynik;

    return 0;  // Exit cleanly.
}

