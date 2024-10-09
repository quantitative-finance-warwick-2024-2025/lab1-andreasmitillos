#include "exercises.hpp"
#include <iostream>

int main()
{
    // you can call any function you like here 
    // to test the output.
    exercise_1();

    exercise_2(10.0, 5.0);

    exercise_3();

    std::cout << "Exercise 4 - Case x = 0:\n";
    exercise_4(0);

    std::cout << "Exercise 4 - Case x not 0:\n";
    exercise_4(1);

    std::cout << "Exercise 5:\n";
    exercise_5();

    std::cout << "Exercise 6:\n";
    exercise_6();

    return 0;
}