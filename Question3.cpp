//Hamza Naveed
//FA20BSCS-25
#include<iostream>
#include<string.h>
using namespace std;


		void Question3(string text)
		{
		
			
		
			for(int i=0;  i<text.length();  i++)
			if(text[0]=='a'  ||text[1]=='b')
			{
				if(text[1]=='a'  || text[1]=='b'||  text[1]=='c')
				
				cout<<"string is correct"<<endl;
				
			}
			else
			{
				cout<<"string is incorrect:"<<endl;
			}
			if(text[0]=='c')
			{
				
				
				   if(text[1] == 'b' ||text[1] == 'c')
				   
				   
        {
            if(text[1] == 'a' || text[1] == 'b' || text[1] =='c')
                {
               
                }
                
                
                
            cout << "string is corrct"<<endl;;
				
			}
			
			}
			
		}
		
			

int main()
{
	string text;
	cout<<"Enter String: " ;
	cin>>text;
Question3(text);
}