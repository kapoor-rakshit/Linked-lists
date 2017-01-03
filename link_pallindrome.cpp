/*Method 1 : Use a stack to keep record of nodes and then pop and compare the values.  O(n) extra space*/

/*Method 2 : Get the middle of list and reverse the second half. Compare this second half with first half*/
#include"bits/stdc++.h"
using namespace std;
struct node
{
    int info;
    node* link;
}*start,*temp,*temp2;

node* reverse(node* temp)             //function to reverse
{
    node *next=NULL;
    node* pre=NULL;
    while(temp!=NULL)
    {
        next=temp->link;
        temp->link=pre;
        pre=temp;
        temp=next;
    }
    return pre;
}

main()
{
    int n;
    printf("Enter no. of elements\n");
    scanf("%d",&n);

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
    for(int i=0; i<n/2; i++)
    {
        temp=temp->link;
    }
    if(n%2) temp=temp->link;            //if no. of elements odd then middle is next element
    temp2=reverse(temp);
    temp=start;
    int flg=0;
    for(int i=0;i<n/2;i++)
    {
        if(temp->info!=temp2->info) {flg=1;break;}
        temp=temp->link;
        temp2=temp2->link;
    }
    if(flg==0) printf("\nTrue");
    else printf("\nFalse");

}
