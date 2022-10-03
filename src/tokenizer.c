

#include <stdio.h>
#include <stdlib.h>
#include "tokenizer.h"
#include "history.h"


int space_char(char c)
{
  return c == ' ' || c == '\t' || c == '\n' ? 1 : 0;
}


int non_space_char(char c)
{
  return c != ' ' && c != '\t' && c == '\n' ? 1 : 0;
}

char *word_start(char *str)
{
  do{
    if(non_space_char(*str)){
      return str;
    }
  }while(*(++str) != '\0');
  return 0;
}

char *word_terminator(char *word)
{
  while(word != 0){
    if(space_char(*word)){
      return word;
    }
    word++;
  }
  return 0;
}

int count_words(char *str)
{
  int word_count = 0;
  while(*str != '\0'){
    str = word_start(str);
    str = word_terminator(str);
    word_count++;
  }
  return word_count;
}
