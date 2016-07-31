/* Asked in my Amazon intern hiring interview on 29-07-2016*/
/* 1 2 3 4 5 6 7 8  and set size is 3  required answer is  3 2 1 6 5 4 8 7*/

#include<bits/stdc++.h>
using namespace std;
struct node
{
    int info;
    node *link;
}*start,*temp,*temp2,*_new;

node *reverse(node *head,int k)
{
    node *temp=head;
    node *next=NULL;                              //pointer to keep record of next node
    node *pre=NULL;                               //pointer to keep record of previous node
    int ct=0;
    while(temp!=NULL && ct<=k)
    {
        next=temp->link;                         //store next node
        temp->link=pre;                         //assign link to previous node
        pre=temp;                               //assign previous node=current node
        temp=next;                             //assign current pointer to its next node
        ct++;
    }
    if(next!=NULL)
    {
        head->link=reverse(next,k);           //link to next node of last element of reversed set
    }
    return pre;                               //return the new header node
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
int k;
printf("Enter size of set to reverse\n");
scanf("%d",&k);

    _new=reverse(temp,k-1);                        //new header node

    temp=_new;

    while(temp!=NULL)
    {
        printf("%d ",temp->info);
        temp=temp->link;
    }
}
