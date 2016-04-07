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

cout<<"Enter value to be inserted\n";
int val;
scanf("%d",&val);
if(val<=temp->info)
{

    new_->link=temp;
    new_->info=val;
    start=new_;
}
else{
    for(int i=0;i<n-1;i++)
    {
        if(temp->link->info>=val)
        {

            flag=1;
            break;
        }
        temp=temp->link;
    }

        new_->link=temp->link;
        temp->link=new_;
        new_->info=val;


}
temp=start;
while(1)
{
printf("%d ",temp->info);
if(temp->link==NULL)
    break;
temp=temp->link;
}
}
