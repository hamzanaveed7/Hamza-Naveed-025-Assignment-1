//Hamza Naveed
//FA20BSCS-25
#include<iostream>
#include<string.h>
using namespace std;
void Question1(string text){

       
		
		{
			
			
			int counter1=0;
			int counter2=0;
			for(int i=0;  i<text.length();   i++)
			{
				if(text[i]=='1')
		{
						counter1++;
				}
		if(text[i]=='1')
		{
		
			counter2++;
				}
			}
			
			if(counter1%2==0  ||  counter2%2==0)
			{
				cout<<"string is correct:"<<endl;
			}
			else 
			{
				cout<<"string is incorrect:"<<endl;
			}
		}
		
}
int main()
{
	string text;
	cout<<"Enter Text: ";
	cin>>text;
	Question1(text);
}