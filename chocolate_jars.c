/*
 *
 * hacker_rank/Chocolate Feast
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int t, n, c, m, wrapper;
    scanf("%d", &t);
    while ( t-- )
    {
        fscanf(stdin, "%d%d%d",&n,&c,&m);
        int answer = 0;
        answer = wrapper = n/c;
        while(wrapper>=m){
            answer += wrapper/m;
            wrapper = wrapper%m + wrapper/m;
        }
        
        
        fprintf(stdout, "%d\n",answer);
    }
    return 0;
}

