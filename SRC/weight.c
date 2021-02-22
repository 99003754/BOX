#include<main.h>
void update_weight(int box_id)
{

    struct Box * temp = head;
	while(temp!=NULL){

		if(temp->box_id==box_id){
			printf("Record with BOX ID %d Found !!!\n", box_id);
			printf("Enter new weight: ");
			scanf("%f",&temp->weight);
			printf("weight of %d box updated Successfully!!!\n",box_id);
			return;
		}
		temp = temp->next;

	}
	printf("Box with roll number %d is not found !!!\n", box_id);

}