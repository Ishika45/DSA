# include <iostream>
using namespace std;
int main()
{
	char ch;
	cin>>ch;
	cout<<"Enter any character:";
	
	if(ch>=65&&ch<=90){
	
	cout<<("this character is uppercase");
}	  
	else if(ch>=97&&ch<=122){
	
	cout<<endl<<("this character is lower case");
}
	else if(ch>=48&&ch<=57){
	
	cout<<endl<<("this character is digit");
}
	else{
	
	cout<<endl<<("you entered special character");
}
}
