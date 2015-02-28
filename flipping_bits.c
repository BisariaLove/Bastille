/*
 *
 * hacker_rank/Flipping bits
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdint.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count, i;
    scanf("%d", &count);
    unsigned int arr[count];
    for(i=0 ; i<count ; i++){
        scanf("%u", (arr+i));
    }
    
    for(i=0 ; i<count ; i++){
        fprintf(stdout, "%u\n", ~arr[i]);
    }
    return 0;
}
