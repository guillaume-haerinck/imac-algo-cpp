/* ping-pong.c */
#include <stdio.h>
#include "ping-pong.h"

void ping_pong() {
   int count=0;
   char word[WORD_MAX];
   for (count=0;count<10;count++) {
       scanf("%s", word);
       if (word[0]=='f'&&word[1]=='i'&&word[2]=='n'&&word[3]==0)
           return;
       if (word[1]=='i') {
           word[1]='o';
           printf("%s\n", word);
       }
   }
}
