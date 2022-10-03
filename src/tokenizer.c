

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

