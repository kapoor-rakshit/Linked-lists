/*Given two linked lists in sorted order. Merge them to have a resultant sorted linked list*/

#include<bits/stdc++.h>
using namespace std;

struct node
{
    int info;
    node *link;
}*start1,*start2,*temp,*temp2,*_new;

node *mergesorted(node* start1,node* start2)
{
    node *res=NULL;                                      //pointer to each element of two lists
    
    if(start1==NULL) return start2;                       
    if(start2==NULL) return start1;                      //base cases. one of list has no more element so start with other
    
    if(start1->info<=start2->info)
    {
        res=start1;
        res->link=mergesorted(start1->link,start2);     //found reqd so now compare next of it
    }
    else
    {
        res=start2;
        res->link=mergesorted(start1,start2->link);    //found reqd so now compare next of it
    }
    return res;                                       //return pointer
}
main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        cin>>temp->info;
        temp->link=NULL;
        if(i==0)
        {
            start1=temp;
            temp2=temp;
        }
        else
        {
            temp2->link=temp;
            temp2=temp;
        }
    }
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        cin>>temp->info;
        temp->link=NULL;
        if(i==0)
        {
            start2=temp;
            temp2=temp;
        }
        else
        {
            temp2->link=temp;
            temp2=temp;
        }
    }
    _new=mergesorted(start1,start2);
    while(_new!=NULL)
    {
        printf("%d ",_new->info);
        _new=_new->link;
    }
}
