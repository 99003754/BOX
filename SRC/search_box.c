#include<main.h>

void search(int box_id)
{
    struct Box * temp = head;
	while(temp!=NULL){
		if(temp->box_id==box_id){
			printf("BOX ID: %d\n", temp->box_id);
			printf("color: %s\n", temp->color);
			//printf("Phone: %s\n", temp->phone);
			printf("length: %0.4f\n", temp->length);
			printf("breadth: %0.4f\n", temp->breadth);
			printf("height: %0.4f\n", temp->height);
			printf("weight: %0.4f\n", temp->weight);
			return;
		}
		temp = temp->next;
	}
	printf("Box with roll number %d is not found !!!\n", box_id);
}
