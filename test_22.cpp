#include <iostream> 
#include <stdlib.h>
using namespace std; 
signed main() 
{
	cout<<"-------Welcome-------"<<endl;
	cout<<"[S]hutdown"<<endl;  // enter S to shutdown
	cout<<"[R]estart"<<endl;   // enter R to restart
	cout<<"[L]ogoff"<<endl;   // enter L to logoff
	cout<<"[E]xit"<<endl;    // or else enter E to exit
	
	char choice;  //to store the choice of user
	
	cin>>choice;
	 
	if(choice=='S' || choice=='s'){
		cout<<"Shutting down..."<<endl;
       system("c:\\windows\\system32\\shutdown /s");  // using system function to shutdown 
     }
	else if(choice=='R' || choice=='r'){
		cout<<"Restarting..."<<endl;
	   system("c:\\windows\\system32\\shutdown /r"); // using system function to restart 
     }
	else if(choice=='L' || choice=='l'){
		cout<<"Logging off..."<<endl;
	   system("c:\\windows\\system32\\shutdown /l"); // using system function to log off 
     }
	else if(choice=='E' || choice=='e'){
		cout<<"Exiting..."<<endl;
	   exit(0);
    }
	else
	   cout<<"Command not valid. Enter valid command"<<endl;           
} 