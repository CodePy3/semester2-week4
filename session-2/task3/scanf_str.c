
#include <stdio.h>

int main( void ) {
    char input[10];
    char input2[10];

    scanf("%s %s",input, input2);
    //int count = scanf("%9s",input);

    // printf("Read %d value\n",count);
    printf("Echo: %s %s\n",input, input2);

    return 0;
}
