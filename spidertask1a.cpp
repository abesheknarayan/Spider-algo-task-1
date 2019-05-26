#include<bits/stdc++.h>
using namespace std;


int binaryadd(char s[],int n)
{   int p=0;
	int carry=0;
	int i;
	for(i=n-1;i>=0;i--)
	{ if(i==n-1)   
	    {
		if(carry==0)
		{
		if(s[i]=='0')
		{
			s[i]='1';
			carry=0;
		}
		else if(s[i]=='1'){
			s[i]='0';
			carry=1;
		}
	    }
	    
		}
	

	else if(i==0)
	{
		if(carry==1)
		{
			if(s[i]=='1')
			{ 
		      p=1;
			  break;		
			}
		}
	}
	else{
		if(carry==1)
	{
		if(s[i]=='1')
		{
			s[i]='0';
			carry=1;
		}
		else if(s[i]=='0')
		{
			s[i]='1';
			carry=0;
		}
		
	}
		
	
	}
	
	}
     
	return p;
	
}
int binarysub(char s[],int n)
{ int b=0;
  int p=0;
	for(int i=n-1;i>=0;i--)
	{
		if(i==n-1)
		{
			if(s[i]=='1')
			{
				s[i]='0';
				b=0;
		    }
		    else if(s[i]=='0')
		    {
		    	s[i]='1';
		    	b=1;
			}
		}
		else if(i==0)
		{
			if(b==1)
			{
				if(s[i]=='1')
				{
				  s[i]='0';
				  b=0;
				  p=1;
				  
				}
			}
		}
		else
	    {
	    	if(b==1)
	    	{
	    		if(s[i]=='1')
	    		{
	    			s[i]='0';
	    			b=0;
				}
				else if(s[i]=='0')
				{
					s[i]='1';
					b=1;
				}
			}
			
			
		}
	}
	return p;
	
}

int main()
{
	long int n;
	int i;
	cout<<"Enter the length of the string "<<endl;
	cin>>n;
	char s[110],s2[110];

    for( i=0;i<n;i++)
    {
    	cin>>s[i];
    	s2[i]=s[i];
	}
	int p=binaryadd(s,n);
	int p2=binarysub(s2,n);
	if(p==0&&p2==0)
	{
	  for(i=0;i<n;i++)
	  {
	  	cout<<s[i];
		  }	
		  cout<<" ";
		  for(i=0;i<n;i++)
		  {
		   cout<<s2[i];
		  }
		  
	}
    else{
    	cout<<"-1";
	}
	

	
	
	return 0;
}
