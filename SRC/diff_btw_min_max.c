#include "main.h"
double diff_min_max_volume()
{
    struct Box * temp1=head;
    double min=0,max=0;
    int count=0;
    while(temp1!=NULL)
    {
        count++;
        temp1=temp1->next;
    }
    double vol_all_boxes[count];
    struct Box *temp2=head;
    count=0;
    while(temp2!=NULL)
    {
        vol_all_boxes[count]=temp2->length*temp2->breadth*temp2->height;
        count++;
        temp2=temp2->next;
    }
    min=vol_all_boxes[0];
    int i=0;
    for(i=1;i<count;i++)
    {
        if(vol_all_boxes[i]<min)
            min=vol_all_boxes[i];
    }
    printf("\nmin volume of all boxes %lf",min);
    i=0;
    max=vol_all_boxes[0];
    for(i=1;i<count;i++)
    {
        if(vol_all_boxes[i]>max)
            max=vol_all_boxes[i];
    }
     printf("\nmax volume of all boxes %lf",max);
    return (min-max);
}