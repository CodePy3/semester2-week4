
/*
Name: Jonathan Monks
Student ID: 201968903
*/

#include <stdio.h>
#include <string.h>

int main( int argc, char **argv ) {

    // define appropriate data to hold your answer
    char words[10][5]; // creates a 2D array that basically says 10 copies of MAX 4 letter strings
    char prebuffer[41]; // initialises size of input read by fgets
    fgets(prebuffer, sizeof(prebuffer), stdin); // reads input from keyboard (stdin) to variable called prebuffer
    // process the command-line data using appropriate string functions
    // below inserts input into each of the word strings and count keeps track of how many seperate words have been entered
    int count = sscanf(prebuffer,"%s %s %s %s %s %s %s %s %s %s", words[0],words[1],words[2],words[3],words[4],words[5],words[6],words[7],words[8],words[9]);

    char buffer[60] = ""; // initialises string to be outputted with "-" :)

    for(int i = 0; i<=count-1; i++ ) { // for loop to loop through the different strings in words
        strcat(buffer, words[i]);
        if(i<count-1) strcat(buffer, "-"); // if statement to ensure that a "-" isnt added at the end :)
    }

    printf("%s\n",buffer); // use only this single print statement in your submitted code

    return 0;
}