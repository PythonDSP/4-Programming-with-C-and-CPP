//enumDataEx.c

#include <stdio.h>

int main() {
    
    //enumerated data-type `stateReg' with values Win and Loose
    enum stateReg{
        Win, Loose    
    };

    stateReg currentState; // define variable 'currentState' of type 'stateReg'
    int dice = 6; 

    // set status to win , if number on dice is 6
    if (dice == 6){
        currentState = Win;
    }
    else{ //otherwise loose
            currentState = Loose;
    }

    //print message according the currentState
    if(currentState == Win)
        printf("You won the game...");
    else
        printf("You loose the game...");

    return 0;
}

/* Outputs
You won the game...  */