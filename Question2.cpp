//Hamza Naveed
//FA20BSCS-25
#include<iostream>
#include<string.h>
using namespace std;
		
		void Question2(string text)
		{
			
			if(text[0]='0')
			{
			
			for(int i=0;  i<text.length();  i++)
		{
			if(text[i]=='0')
			{
				cout<<"string is correct"<<endl;
				
			}
		}
	}
			
			
			else{
				cout<<"string is incorrect"<<endl;
			}
			
			
			if(text[0]='1')
			{
				cout<<"string is correct"<<endl;
			}
		
		else
		{
			cout<<"string is incorrect"<<endl;
		}
	}
		

int main()
{
	string Text;
	cout<<"Enter String: ";
	cin>>Text;
	Question2(Text);
}