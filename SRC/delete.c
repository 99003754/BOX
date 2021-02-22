#include"main.h"
void Delete(int box_id)
{

    struct Box * temp1 = head;
	struct Box * temp2 = head;
	while(temp1!=NULL){

		if(temp1->box_id==box_id){

			printf("Record with BOX ID %d Found\n", box_id);

			if(temp1==temp2){

				head = head->next;
				free(temp1);
			}
			else{

				temp2->next = temp1->next;
				free(temp1);
			}

			printf("Record Successfully Deleted\n");
			return;

		}
		temp2 = temp1;
		temp1 = temp1->next;

	}
	printf("Box with BOX ID %d is not found\n", box_id);
    

}