
/*
Name: Jonathan Monks
Student ID: 201968903
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {
    

    char buffer[60] = ""; // initialises string to be outputted with "-" :)

    for(int i = 1; i<=argc-1; i++ ) { // for loop to loop through the different strings in argv
        strcat(buffer, argv[i]); // adds argument onto the end of the buffer array
        if(i<argc-1) strcat(buffer, "-"); // if statement to ensure that a "-" isnt added at the end :)
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}