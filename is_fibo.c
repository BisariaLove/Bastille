/*
 *
 * hacker_rank/isFbo
 *
 */

#include<stdio.h>  
 int function(unsigned long long num)  
   {  
   unsigned long long i=1,j=1,fibo=1,m,n;  
   for(m=0;;m++){  
     i = fibo;  
     fibo = fibo + j;  
     j= i;  
     if(fibo==num)  
       return 1;  
     else if(fibo>num)  
       return 0;  
   }  
 }  
 int main()  
 {  
   unsigned t;  
   scanf("%u",&t);  
   while(t--){  
     unsigned long long int answer=0;  
     unsigned long long num;  
     scanf("%llu",&num);  
     if(num == 0 || num ==1){  
       printf("IsFibo\n");  
     }  
     else  
       {  
     answer = function(num);  
     if(answer==1)  
       {  
       printf("IsFibo\n");  
     }  
     else  
       {  
       printf("IsNotFibo\n");  
     }  
     }  
   }  
   return 0;  
 }  
