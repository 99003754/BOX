#include<main.h>


  void insert(int box_id, char* color, float length,float breadth,float height,float weight)
{

    struct Box * Box = (struct Box *) malloc(sizeof(struct Box));
	Box->box_id = box_id;
	strcpy(Box->color, color);

	Box->length = length;
	Box->breadth = breadth;
	Box->height = height;
	Box->weight = weight;
	Box->next = NULL;

	if(head==NULL){
		// if head is NULL
		// set Box as the new head
		head = Box;
	}
	else{
		// if list is not empty
		// insert Box in beginning of head
		Box->next = head;
		head = Box;

		/*
		head->next = Box;
		Box->next = NULL;
		*/
	}

}

