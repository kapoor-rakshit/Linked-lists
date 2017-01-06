#include"bits/stdc++.h"
using namespace std;

struct node
{
    int info;
    node* link;
};
void rightrotate(node* temp,int op,int n)
{
    node* tp=temp;
    if(op!=0)                                             //if op!=0
    {
         while(1)
        {
            if(tp->link==NULL) break;
            tp=tp->link;                                 //reach to last node
        }
        tp->link=temp;                                  //assign last node link to first node
        for(int i=0;i<n-op-1;i++) temp=temp->link;
        tp=temp->link;                                 //start from (op)th node from end
        temp->link=NULL;                              //assign (op-1)th node as NULL
    }
    while(tp!=NULL)
    {
        printf("%d ",tp->info);
        tp=tp->link;
    }
}
void leftrotate(node* temp,int op)
{
    node* tp=temp;
    if(op!=0)                                                 //if op!=0
    {
        while(1)
        {
            if(tp->link==NULL) break;
            tp=tp->link;                                      //reach to last node
        }
        tp->link=temp;                                       //assign last node link to first node
        for(int i=0; i<op-1; i++) temp=temp->link;
        tp=temp->link;                                      //start from (op+1)th node
        temp->link=NULL;                                    //assign (op)th node link as NULL
    }
    while(tp!=NULL)
    {
        printf("%d ",tp->info);
        tp=tp->link;
    }
}
main()
{
    int n;
    printf("Enter no. of nodes : ");
    scanf("%d",&n);
    node *start,*temp,*temp2;
    for(int i=0; i<n; i++)
    {
        temp=(node*)malloc(sizeof(node));
        scanf("%d",&temp->info);
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
    printf("Enter no. of rotations : ");
    int op;
    scanf("%d",&op);
    op=op%n;

    leftrotate(temp,op);
    //rightrotate(temp,op,n);
}
