#include <iostream>

int main(){
    //ternary operator ?: = replacement to an if/else statement
    // condition ? expression : expression2;
    int grade = 75;

    grade >= 60 ? std::cout << "You Pass!" : std::cout << "You fail";

    return 0;
}