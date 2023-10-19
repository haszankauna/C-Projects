#include <iostream>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;

typedef std::string text_t;
typedef int number_t;

int main(){
    // typedef = reserved keyword used to create an additional name
    // (alias) for another data type.
    // New identifier for an existing type
    // Helps with readability and reduces types
    using text_t = std:: string;
    using number_t = int;


    text_t firstName = "Kauna";
    number_t age = 21;



    std::cout << firstName << '\n';
    std::cout << age << '\n';
    



    return 0;
}