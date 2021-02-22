#include<main.h>

int box_same_color(char* color)
{
     struct Box * temp = head;
     int count=0;
	while(temp!=NULL){
		if(strcmp(temp->color, color)==0){
        count++;
		}
		temp = temp->next;
	}
    return count;
}