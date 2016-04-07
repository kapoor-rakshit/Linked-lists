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


cout<<"Enter new value and value before which to insert\n";
int val,nval;
scanf("%d%d",&nval,&val);
if(val==temp->info)
    {
       new_->info=nval;
    new_->link=start;
    start=new_;
    flag=1;
    }
else{


    for(int i=0;i<n-1;i++)
    {
        if(val==temp->link->info)
        {flag=1;
        break;}
        temp=temp->link;
    }

if(flag==1){
new_->link=temp->link;
    temp->link=new_;

    new_->info=nval;
}
}
temp=start;
if(flag==0)
    cout<<"Reqd Element not found"<<endl;
while(1)
{
printf("%d ",temp->info);
if(temp->link==NULL)
    break;
temp=temp->link;

}

new_=(node*)malloc(sizeof(node));
temp=start;
if(flag==1)
n++;
flag=0;
cout<<"\nEnter new value and value after which to insert\n";

scanf("%d%d",&nval,&val);

    for(int i=0;i<n;i++)
    {
        if(val==temp->info)
        {flag=1;
        break;}
        temp=temp->link;
    }

if(flag==1){
new_->link=temp->link;
    temp->link=new_;

    new_->info=nval;
}

temp=start;
if(flag==0)
    cout<<"Reqd Element not found"<<endl;
while(1)
{
printf("%d ",temp->info);
if(temp->link==NULL)
    break;
temp=temp->link;

}
}
