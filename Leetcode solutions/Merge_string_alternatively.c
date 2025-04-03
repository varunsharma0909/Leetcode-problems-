#include <stdio.h>
#include <stdlib.h>


char * mergeAlternately(char * word1, char * word2){
    int len1=strlen(word1);
    int len2=strlen(word2);
    int total_len=len1+len2;
     
     char *result =(char*)malloc((total_len+1)*sizeof(char));

    int k=0, i=0, j=0;
    while( i<len1 && j<len2){
        result[k++]= word1[i++];
        result[k++]= word2[j++];
        

    }
  while(i<len1){
    result[k++]=word1[i++];
  }
   
   while(j<len2){
    result[k++]=word2[j++];
   }
   result[k] ='\0';
   return result;



}