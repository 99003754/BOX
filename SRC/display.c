#include<main.h>
void display()
{
    struct Box * temp = head;
	while(temp!=NULL){

		printf("BOX ID: %d\n", temp->box_id);
		printf("color: %s\n", temp->color);
		//printf("Phone: %s\n", temp->phone);
		printf("length: %f\n\n", temp->length);
		printf("breadth: %f\n\n", temp->breadth);
		printf("height: %f\n\n", temp->height);
		printf("weight: %f\n\n", temp->weight);
		temp = temp->next;

	}
}