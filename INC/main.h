#include<stdlib.h>
#include<string.h>
#include<stdio.h>

void insert(int box_id, char* color, float length,float breadth,float height,float weight);
double avr_volume();
double diff_min_max_volume();
int box_max_height();
int box_same_color(char* color);
void search(int box_id);
void Delete(int box_id);
void display();
void update_weight(int box_id);



struct Box
{
    int box_id;
    char color[100];
    float length;
    float breadth;
    float height;
    float weight;
    struct Box *next;

}* head;