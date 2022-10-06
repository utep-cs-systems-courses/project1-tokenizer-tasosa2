#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"
#define MAX_SIZE 300

int main()
{
  char user_input[MAX_SIZE];
  List *history = init_history();
  while(1){
    printf("\nWelcome to Tokenizer! Enter a String. Enter 'h' to see history. Enter 'q' to exit program.");
    printf("\n");
    
    fgets(user_input,MAX,stdin);
    if(user_input[0] == 'q'){
      printf("\nEnd of Program, Thank You!");
      break;
    }
    else if(user_input[0] == 'h') {
      printf("\nHistory");
      print_history(history);
      break;
    }else
      {
	printf("\n User input: %s", user_input);

	int words = count_words(user_input);
	printf("\n Word count: %d", words);

	char** tokens = tokenize(user_input);
	printf("\n");
	print_tokens(tokens);
      }
  }
}
