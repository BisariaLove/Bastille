/*
 *
 * hacker_rank/Utopian Tree
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int count;
    unsigned long long height;
    scanf("%d", &count);
    int arr[count], i, j;
    if(!(count >= 1 && count <= 60)){
        exit(0);
    }
    for(i=0 ; i<count ; i++){
        scanf("%d", (arr+i));
        if(!(arr[i] >= 0 && arr[i] <= 60)){
            exit(0);
        }
    }
    
    for(i=0 ; i<count ; i++){
        height = 1;
        for(j=1;j<=arr[i]; j++){
            if(j%2 == 0){
                height += 1;
            }
            else{
                height *= 2;
            }
        }
        fprintf(stdout,"%llu\n", height);
    }
    return 0;
}
