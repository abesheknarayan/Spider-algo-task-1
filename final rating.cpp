#include<bits/stdc++.h>
#include<vector>
using namespace std;
void fun(vector<int>& v1,vector<int>& v2,int n,int r,int x,int y)
{ int i;
int r1=r;
for(i=0;i<v1.size();i++)
{
	if(v1[i]==v2[i])
	{
		r=r+x;
	}
	else{
		r=r-y;
	}}
	if(r>r1)
	{
		cout<<"promoted";
	}
	else if(r<r1)
	{
		cout<<"demoted";
	}
	else
	{
		cout<<"No change";
	}
		
}
int main()
{  vector<int> v1;
   vector<int> v2;
int i,a;
   int n,r,x,y;
   cin>>n>>r>>x>>y;
   for(i=0;i<n;i++)
   {
   	cin>>a;
   	v1.push_back(a);
   }
   for(i=0;i<n;i++)
   {
   	cin>>a;
   	v2.push_back(a);
   }
   fun(v1,v2,n,r,x,y);
   
 
   	
   

	return 0;
}
