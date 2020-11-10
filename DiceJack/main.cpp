//
//  main.cpp
//  DiceJack
//
//  Created by Farhia Mohamed Muse on 2020-11-07.
//  Copyright © 2020 Farhia Mohamed Muse. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    bool gameOver = false;
    int input = 0;
    
    while(!gameOver){
            std::cout << "What would you like to do next? \n";
        std::cout << " [1] Play a Round \n";
        std::cout << " [2] Leave the Table \n";

        std::cin >> input;
        
       if (input == 1) {
           std::cout << "We will continue. \n";
        }
        
        else if (input == 2) {
            gameOver = true;
            std::cout << "Game over. \n";
        }

    }
    
    return 0;
}
