/*
 *
 * hacker_rank/Halloween Party
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int count, i;
    long k, hc, vc;
    fscanf(stdin, "%d", &count);
    
    for(i=0 ; i<count ; i++){
        fscanf(stdin, "%ld", &k);
        vc = k/2;
        hc = k - vc;
        
        fprintf(stdout, "%ld\n",(vc*hc));
    }
    return 0;
}
