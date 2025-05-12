#include <iostream> // input-output stream
int main()
{

    // std = standard
    //:: = scope resolution operator
    // cout = character output
    std :: cout << "Standard character output using c++";
    
    // new line
    std::cout << "Using new line character" << '\n';
    std::cout << "The new line character just adds a new line. Its better performance wise.\n";

    // endl = end line
    std::cout << "Using c means character and out means output" << std::endl;
    std::cout << "endl means end line. Its benefit is that it flushes the output buffer" << std::endl;

    return 0;
}