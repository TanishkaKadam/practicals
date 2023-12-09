#include<iostream>
using namespace std;
int main()
{
int a[3][3],b[3][3],c[3][3]={0},i,j,k,ch;

cout<<"\n 1.Addition :";
cout<<"\n 2.Subtraction :";
cout<<"\n 3.Multiplication :";
cout<<"\n 4.Transpose :";
cout<<"\n Enter your choice :";
cin>>ch;
switch(ch)
{
case 1:
{
	cout<<"Enter the first matrix :";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cin>>a[i][j];
		}
	}
	cout<<"Enter the second matrix :";	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cin>>b[i][j];
		}
	}

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		c[i][j]=a[i][j]+b[i][j];
		}
	}		
	cout<<"\n Addition of the 3*3 matrix is :\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cout<<" "<<c[i][j];
		}
	cout<<"\n";	
	}
break;
}
case 2:
{
	cout<<"Enter the first matrix :";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cin>>a[i][j];
		}
	}
	cout<<"Enter the second matrix :";	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cin>>b[i][j];
		}
	}

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		c[i][j]=a[i][j]-b[i][j];
		}
	}		
	cout<<"\n Subtraction of the 3*3 matrix is :\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cout<<" "<<c[i][j];
		}
	cout<<"\n";	
	}
break;
}

case 3:
{
cout<<"Enter the first matrix :";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cin>>a[i][j];
		}
	}
	cout<<"Enter the second matrix :";	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cin>>b[i][j];
		}
	}
for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			for(k=0;k<=2;k++)
			{
		c[i][j]=c[i][j]+b[i][k]*a[k][j];
			}
		}	
	}		
	cout<<"\n Multiplication of the 3*3 matrix is :\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cout<<" "<<c[i][j];
		}
	cout<<"\n";	
	}
break;
}
case 4:
{
cout<<" Enter the 3*3 matrix :";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cin>>a[i][j];
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		b[i][j]=a[j][i];
		}
	}
cout<<"\n Transpose the 3*3 matrix is :\n";
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
		cout<<" "<<b[i][j];
		}
	cout<<"\n";	
	}
break;
}
}
return 0;
}

