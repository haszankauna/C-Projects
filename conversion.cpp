#include <iostream>

int main(){
    
    //type conversion = conversion of a value of one dat type to another
    // implicit = automatic
    // explicit = precede value with new data type (int)
   int correct = 8;
   int questions = 10;
   double score = correct/(double)questions * 100;

   std::cout <<score << "%";



    return 0;
}