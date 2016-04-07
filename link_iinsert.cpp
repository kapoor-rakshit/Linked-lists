#include<bits/stdc++.h>
using namespace std;
int flag=0;
struct node{
int info;
node *link;
}*start,*temp,*temp2,*new_;

main()
{
new_=(node*)malloc(sizeof(node));
cout<<"Enter no. of elements\n";
int n;
scanf("%d",&n);
for(int i=0;i<n;i++)
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

cout<<"Enter value and pos to insert\n";
int pos,val;
scanf("%d%d",&val,&pos);


if(pos==1)
    {

        new_->link=start;
        start=new_;
        new_->info=val;}
else if(pos>n+1)
{
    for(int i=0;i<n-1;i++)
        temp=temp->link;
    for(int i=n;i<pos;i++)
    {
new_=(node*)malloc(sizeof(node));
        temp->link=new_;
        new_->info=0;
        new_->link=NULL;
        temp=temp->link;
    }

    temp->link=NULL;
    temp->info=val;
    //cout<<temp->info<<endl;

}
else{
for(int i=0;i<pos-2;i++)
    temp=temp->link;
new_->link=temp->link;
temp->link=new_;
new_->info=val;
        }
temp=start;
while(1)
    {
if(temp->info==0)
    cout<<"NULL ";
else
        printf("%d ",temp->info);
        if(temp->link==NULL)
            break;
        temp=temp->link;
    }
}
