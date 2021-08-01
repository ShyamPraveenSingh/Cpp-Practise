#include<iostream>
using namespace std;
void display(struct node *start);
node *add(struct node *start, int data);

struct node{
    int info;
    struct node *link;
};

int main()
{
    struct node *start = NULL;
    int data;
    cout << "Enter element: ";
    cin >> data;
    add(start, data);
    display(start);
}

struct node *add(struct node *start, int data)
{
   
    node *tmp;
    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = data;
    tmp->link = start;
    start = tmp;
    return start;

}

void display(struct node *start)
{
    struct node *p;
    p = start;
    cout << "List is: " << endl;
    while(p!=NULL){
        cout << p->info<<"";
        p = p->link;
    }
    cout << endl;
}