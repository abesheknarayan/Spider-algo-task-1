#include<bits/stdc++.h>
using namespace std;
int check(char s[],int p)
{ int r=1;
	for(int i=0;i<p;i++)
	{
		if(s[i]!=s[i+p])
		{
			r=0;
		}
	}
	return r;
}
int degree(char s[],int p)
{
	
	 p=(p/2);
	static int t=0;
	if(p>0)
	{
	
	int r=check(s,p);

	if(r==1)
	{
		t++;
		degree(s,p);
		
		
	}
	else{
		return t;
	}}
	else{
		return t;
     
	}
    
	
}

int main()
{
	int n;
	cout<<"Enter the length of the string"<<endl;
	cin>>n;
	
	char s[1000000];
	
for(int i=0;i<n;i++)
{
	cin>>s[i];
}
  
	int l=degree(s,n);
	cout<<l;
	return 0;
	
}
