#include<bits/stdc++.h>
using namespace std;
struct node
{
    long long ddf;
    int info,kl;
    char dfk;
    struct node *link;
    char a,c,d,aw,gh,df;
    struct node *li;
}*start,*temp,*temp2;
int main()
{
    cout<<"enter the no of elements";
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        temp=(struct node*)malloc(sizeof(struct node));
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
    while(1)
    {

        printf("%d ",temp->info);
        if(temp->link==NULL)
            break;
        temp=temp->link;
    }
    //printf("\n%d",sizeof(struct node));
}
