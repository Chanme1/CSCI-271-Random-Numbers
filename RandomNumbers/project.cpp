//
//  RandomNumbers
//
//  Created by Melissa Chan on 11/30/16.
//  Copyright © 2016 Melissa Chan. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    bool isPlaying = true;
    
    while (isPlaying == true)
    {
        srand(time(0));
        int guess;
        int computer = rand()%1000 + 1;
        char answer;
        
        cout << "I'm thinking of a number 1-1000 \n" << "Guess my number! ";
        cin >> guess;
        
        while (guess != computer)
        {
            if (guess > computer)
            {
                cout << "Too High! Try Again! ";
                cin >> guess;
            }
            
            if (guess < computer)
            {
                cout << "Too Low! Try Again! ";
                cin >> guess;
            }
        }
        
        cout << "Congratulations! My number was " << computer << endl;
        cout << "Do you want to play again? (y or n) ";
        cin >> answer;
        
        if (answer == 'y')
        {
            cout << "Game Challenge Loading!" << endl;
            continue;
        }
        else
        {
            cout << "Thank you for playing" << endl;
            break;
        }
    }
    return 0;
}
