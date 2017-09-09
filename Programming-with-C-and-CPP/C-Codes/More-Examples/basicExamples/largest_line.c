// largest_line.c
#include <stdio.h>

const int MAX_CHAR = 15;  // display only MAX_CHAR characters of largest line

int getLine(char []);  // function prototype

// store 'MAX_CHAR' to line if number of characters are greater than MAX_CHAR
int getLine(char line[]){
    int i, j = 0, c;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; i++){
        // Null character ( \0) is special string character to terminate the string
        if (i < MAX_CHAR - 2){  // -2 to store the last character as "Null character"
            line[j] = c;
            j++;
        }

        line[j] = '\0';
    }
    return i;

}
int main(){
    int i = 1, j = 0; 
    // int k = 0;
    int current_len;  // number of characters in current line
    int max_length = 0;  // maximum numbers of characters till now


    char line[MAX_CHAR];  // current input line with maximum character "MAX_CHAR"
    char longest_line[MAX_CHAR]; 

    // exit loop if characters are above MAX_CHAR
    // getline : returns the number of character in current Line
    // use 'crtl + z' to exit the loop; as it returns '0'
    printf("Line %d : ", i);
    while ((current_len = getLine(line)) > 0){   
        printf("Length =  %2d\n", current_len);
        if (max_length < current_len){
            max_length = current_len;
            j = i;

            // note that K is local to 'if' statement
            // if it is defined at Line 25, then we need to reset the 'k'
            // i.e. k = 0, after exiting the 'while loop' (Line 49)
            int k=0; 
            while((longest_line[k] = line[k]) != '\0') //copy 'line' to 'longest_line'
                ++k;
            // k = 0;
        }   

        printf("Line %d : ", ++i);
    }

    printf("\nLargest line is %d, which has %d characters \n", j, max_length);
    printf("Content = %s", longest_line);
   
    return 0;
}

/* Outputs
####################################
Line 1 : Krishna
Length =   7
Line 2 : Patel
Length =   5
Line 3 : ^Z

Largest line is 1, which has 7 characters
Content = Krishna
####################################

Line 1 : My name is Meher Krishna Patel
Length =  30
Line 2 : Meher
Length =   5
Line 3 : ^Z

Largest line is 1, which has 30 characters
Content = My name is Me       // only 15 characters (i.e. MAX_CHAR) are displayed
*/