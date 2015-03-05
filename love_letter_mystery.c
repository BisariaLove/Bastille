/*
 *
 * hacker_rank/The Love Letter Mystry
 *
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAXSIZE 10000
int main() {
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int count, i, j, len, decrease, k;
    scanf("%d", &count);
    
    int arr[count];
    char string[MAXSIZE];
    for(k=0 ; k<count ; k++){
        decrease = 0;
        scanf("%s",string);
        len = strlen(string);
        i = len/2-1;
        if(len%2 == 0){
            j = len/2 ;
        }else{
            j = len/2 + 1;
        }
        for( ; j<len, i>=0 ; j++, i--){
            if(string[i] == string[j]){
                continue;
            }
            else if(string[i] > string[j]){
                decrease += (string[i]-string[j]);
            }else{
                decrease += (string[j]-string[i]);
            }
        }
        arr[k] = decrease;
    }
    for(k=0 ; k<count ; k++){
        fprintf(stdout, "%d\n", arr[k]);
    }
    return 0;
}
