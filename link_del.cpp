#include<bits/stdc++.h>
using namespace std;
int flag=0;
struct node{
int info;
node *link;
}*start,*temp,*temp2;
main()
{

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

cout<<"Enter Pos to delete <="<<n<<endl;
int pos;
cin>>pos;
if(pos==1)
    {temp=temp->link;
    start=temp->link;}
else
{
for(int i=0;i<pos-1;i++)
{
    temp2=temp;
    temp=temp->link;
}
temp2->link=temp->link;
free(temp);
temp=start;
}
while(1)
{
printf("%d ",temp->info);
if(temp->link==NULL)
    break;
temp=temp->link;
}

n--;
temp=start;
cout<<"\nEnter val to delete\n";
int val;
cin>>val;
if(val==temp->info)
    {temp=temp->link;
    start=temp->link;
    flag=1;}
else{

    for(int i=0;i<n-1;i++)
    {
        if(val==temp->link->info)
        {flag=1;
        break;}
        temp=temp->link;
    }

if(flag==1){
    temp2=temp->link;
    temp->link=temp2->link;
    free(temp2);
}
temp=start;
}
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
