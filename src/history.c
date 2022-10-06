#include <stdio.h>
#include <stdlib.h>
#include "history.h"
#include "tokenizer.h"


List* init_history()
{
  List* history;
  history = malloc(sizeof(List));
  history->root = NULL;
  return history;
}

void add_history(List* list, char* str)
{
  Item *new = malloc(sizeof(Item));
  //if list is empty
  if (list->root == NULL){
    new->id = 1;
    list->root = new;
  }
  else {
    Item *currItem = list->root;
    while(currItem->next != NULL)
      {
	currItem = currItem->next;
      }

    new->id = currItem->id + 1;
    currItem->next = new;
  }

  new->str = str;
  new->next = NULL;
}

char *get_history(List* list, int id)
{
  if (list->root == NULL)
    {
      return "List is empty";
    }else
    {
      Item* temp = list->root;

      while (temp != NULL)
	{
	  if (temp->id == id)
	    return temp->str;
	  temp = temp->next;
	}
      return "Item number not found\n";
    }
}

void print_history(List* list)
{
  Item* temp = (list->root);

  while (temp != NULL)
    {
      printf("History item [%d]: %s \n", temp->id, temp->str);
      temp = temp->next;
    }
}

void free_history(List* list )
{
  Item* temp;
  Item* temp1;
  temp  = list -> root;
  while (temp != NULL)
    {
      temp1 = temp;
      temp = temp->next;
      free(temp1);
    }
  free(list);
}
