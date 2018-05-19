//enumDataEx.c

#include <stdio.h>

int main() {
    //enumerated data-type `stateReg' with values WIN and LOST
    enum stateReg{
        WIN, LOST    
    };

    stateReg currentState; // define variable 'currentState' of type 'stateReg'
    int dice = 6; 

    // set status to win , if number on dice is 6
    if (dice == 6){
        currentState = WIN;
    }
    else{ //otherwise lost
            currentState = LOST;
    }

    //print message according the currentState
    if(currentState == WIN)
        cout<<"You won the game";
    else
        cout<<"You lost the game";

    return 0;
}