
#include <stdio.h>

int main( void ) {

    // define suitable data

    // int a,b;
    // scanf("%d %d", &a,&b);
    // int sum = a+b;
    // printf("%d \n", sum);
    
    // use scanf to read from the terminal
    // print the output from scanf and the data values 

    char buffer[10];
    fgets(buffer, sizeof(buffer) , stdin);
    int k,i;
    sscanf(buffer, "%d%d", &k,&i);
    int sum = k+i;
    printf("%d \n", sum);  


    return 0;
}