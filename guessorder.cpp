#include<bits/stdc++.h>
using namespace std;
//I considered the six values being the same as given in the question and wrote a code to find the correct order

	

int main()
{ 
   int a,b,c,d,e,f;
   int in[4],s[4];
   
   int i,j;
   int p[2][6];
   int check[2][6];
   int a1[2],a2[2];
   int original[6];
   
   for(i=0;i<2;i++)
   {
   	cout<<"query"<<i<<" "<<i+1;
   	cin>>in[i];
   	s[i]=in[i];
   	
   }
   for(i=3;i<5;i++)
   {
   	cout<<"query"<<i<<" "<<i+1;
   	cin>>in[i];
   	s[i]=in[i];
   }
  
   
   	 for(i=0;i<2;i++)  
    { 
	 if(in[i]%43==0)
   	 {  
   	 	p[0][0]=43;
			p[1][0]=i;
			
			
			
		   // p1 for 43
		}
	  if(in[i]%10==0)
	 {  in[i]=in[i]/10;
	 p[0][1]=10;
	 	p[1][1]=i;
	 	
	 	
	 	
		 }	
	  if(in[i]%7==0)
	  
	 {  
	     p[0][2]=7;
	 	p[1][2]=i;
	}	 
	 if(in[i]%9==0)
	{  
	 p[0][3]=9;
		p[1][3]=i; 
		}	  
	 if(in[i]%16==0)
	{  in[i]=in[i]/16;
	    p[0][4]=16;
		p[1][4]=i;
		}
		if(in[i]%8==0)
		{
			in[i]=in[i]/8;
			p[0][5]=8;
			p[1][5]=i;
		}
	 }                   
   
 
   
   for(i=3;i<5;i++)
   {
   	 if(in[i]%43==0)
   	 {  
   	 	p[0][0]=43;
			p[1][0]=i;
			
			}
	  
	  if(in[i]%10==0)
	 { in[i]=in[i]/10;
	 p[0][1]=10;
	 	p[1][1]=i;
	 	 }	
	  
	  if(in[i]%7==0)
	  
	 {  
	     p[0][2]=7;
	 	p[1][2]=i;
	 	 }
		  	 
	 if(in[i]%9==0)
	{  
	 p[0][3]=9;
		p[1][3]=i;
	 }
		  	  
	 if(in[i]%16==0)
	{   in[i]=in[i]/16;
	    p[0][4]=16;
		p[1][4]=i;
		}
		
     if(in[i]%8==0)
		{    
			in[i]=in[i]/8;
			p[0][5]=8;
			p[1][5]=i;
		}
	}
   for(i=0;i<6;i++)
   {
   	for(j=i+1;j<6;j++)
   	{
   		if(p[1][i]==p[1][j])
   		{    
   		   	
   		
   			if(p[1][i]<3)
   			{
   				a1[0]=p[0][i];
   				a1[1]=p[0][j];
   				
			   }
			   else{
			   		a2[0]=p[0][i];
   				a2[1]=p[0][j];
   				
			   	
			   }
		   }
	   }
   }
   int sum1=a1[0]+a1[1];
   int sum2=a2[0]+a2[1];
   for(i=0;i<2;i++)
   {
   	if(s[0]%a1[i]==0)
   	{  
   	original[1]=a1[i];
   	original[2]=sum1-a1[i];
   	break;
	  	
	   }}
	    for(i=0;i<2;i++){
		
	   if(s[3]%a2[i]==0)
	   { 
	   	original[4]=a2[i];
	   	original[5]=sum2-a2[i];
	   	break;
	   }
   }
   original[0]=s[0]/original[1];
   original[3]=s[3]/original[4];
  cout<<"original ordered array"<<endl;
  for(i=0;i<6;i++)
  {
  	cout<<original[i]<<"    ";
  }
   return 0;
}
