#include <iostream>
#include <random> 
#include <limits> 
#include <string>
using namespace std;

int main() {
    cout << "ROCK PAPER SCISSORS GAME" << endl;
    cout << "------------------------" << endl; 
    // Generate random number (1 to 3) for comp_choice
    random_device rd; 
    mt19937 gen(rd()); 
    uniform_int_distribution<> distr(1, 3); 
    int num_comp_choice = distr(gen); 

    // Switch case for comp_choice (1 - R, 2 - P, 3 - S)
    string comp_choice; 
    switch (num_comp_choice) {
        case 1:
            comp_choice = "R"; 
            break;

        case 2: 
            comp_choice = "P"; 
            break;
        
        case 3: 
            comp_choice = "S"; 
            break; 
        
        default:
            cout << "Invalid play by computer. Check code" << endl; 
            break;
    }

    // Input of user_choice and validation
    string user_choice;
    while(true) {
        cout << "Enter one (R, P or S): "; 
        cin >> user_choice; 

        if(cin.fail() || (user_choice != "R" && user_choice != "P" && user_choice != "S")) {
            cin.clear(); 
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
            cout << "Invalid Input. "; 
        } else {
            break; 
        }
    }

    // Contatenate comp_choice and user_choice as one string 
    string plays = comp_choice + user_choice; 

    cout << "\n"; 
    
    /*  Cases
        RP - User wins 
        RS - User loses
        PR - User loses 
        PS - User wins
        SR - User wins
        SP - User loses 
        Anything else - draw  */ 

    if(plays == "RP") {
        cout << "Computer played " << comp_choice << endl; 
        cout << "You played " << user_choice << endl; 
        cout << "YOU WIN!!!" << endl; 

    } else if(plays == "RS") {
        cout << "Computer played " << comp_choice << endl; 
        cout << "You played " << user_choice << endl; 
        cout << "YOU LOSE!!!" << endl;

    } else if(plays == "PR") {
        cout << "Computer played " << comp_choice << endl; 
        cout << "You played " << user_choice << endl; 
        cout << "YOU LOSE!!!" << endl;
        
    } else if(plays == "PS") {
        cout << "Computer played " << comp_choice << endl; 
        cout << "You played " << user_choice << endl; 
        cout << "YOU WIN!!!" << endl; 

    } else if(plays == "SR") {
        cout << "Computer played " << comp_choice << endl; 
        cout << "You played " << user_choice << endl; 
        cout << "YOU WIN!!!" << endl; 
        
    } else if(plays == "SP") {
        cout << "Computer played " << comp_choice << endl; 
        cout << "You played " << user_choice << endl; 
        cout << "YOU LOSE!!!" << endl;

    } else {
        cout << "Computer played " << comp_choice << endl; 
        cout << "You played " << user_choice << endl; 
        cout << "IT'S A DRAW!!!" << endl;
    }

    return 0;
}