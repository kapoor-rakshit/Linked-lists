#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    node *link;
}*start,*temp,*temp2,*_new;

node *reverse(node *temp)        //function to reverse
{
    node *next=NULL;            //pointer to keep record of next node
    node *pre=NULL;            //pointer to keep record of previous node
    while(temp!=NULL)
    {
        next=temp->link;      //store next node
        temp->link=pre;       //assign link to previous node
        pre=temp;             //assign previous node=current node
        temp=next;            //assign current pointer to its next node
    }
    return pre;
}

main()
{
    cout<<"Enter no. of elements\n";
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        cin>>temp->info;
        temp->link=NULL;
        if(i==0)
        {
            start=temp;
            temp2=temp;
        }
        else
        {
            temp2->link=temp;
            temp2=temp;
        }
    }
    temp=start;

    _new=reverse(temp);

    temp=_new;

    while(temp!=NULL)
    {
        printf("%d ",temp->info);
        temp=temp->link;
    }
}
