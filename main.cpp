#include <iostream>
#include <random> 
using namespace std;

int main() {
    // Generate random number(1 to 3) for comp_choice
    random_device rd; 
    mt19937 gen(rd()); 
    uniform_int_distribution<> distr(1, 3); 
    int comp_choice = distr(gen); 

    // Switch case for comp_choice (1 - R, 2 - P, 3- S)
    // Input of user_choice 
    // Switch case for user_choice (1 - R, 2 - P, 3- S)
    // Contatenate comp_choice and user_choice as one string 
    // Switch case statement 

    return 0;
}