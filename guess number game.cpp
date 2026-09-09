#include<iostream>
#include<cstdlib>  //for rand
#include<ctime> //for time
#include<windows.h>
using namespace std;
int main()
          //  int random=offset+(rand() % range)
{
	cout<<"              WELCOME TO NUMBER GUESS GAME       "<<endl;
	cout<<"you have to guess a number between 1 and 100."<<endl;
     cout<<"	you'll have limited choices based on the level you choose.  GOOD LUCK!"<<endl;
     
     while(true){
     	cout<<"  enter difficulty level"<<endl;
     	cout<<" 1 for easy   "<<endl;
     	cout<<" 2 for medium  "<<endl;
     	cout<<"  3 for difficult     "<<endl;
     	cout<<" 0 for ending the game"<<endl;
     	
     	int difficultychoice;
     	cout<<"enter number" <<endl;
     	cin>>difficultychoice;
     	
     	srand(time(0));
     	int secretNumber =1+(rand()%100);
     	int playerchoice;
     	
     	if(difficultychoice==1){
		     cout<<"you have 10 choices for finding number"<<endl;
		     int choiceleft=10;
		     for(int i=1;i<10;i++)
		     {
		     	cout<<"enter number";
		     	cin>>playerchoice;
		     	if(playerchoice==secretNumber)
		     	{
		     		cout<<"well played you won "<<playerchoice<<"is the secret number"<<endl;
		     		cout<<"       thanks for playing  ...."<<endl;
		     		cout<<"play the game again with us   "<<endl;
		     		break;
				 }
				 else{
				 	cout<<"nope"<<playerchoice<<"is not right number"<<endl;
				 	if(playerchoice>secretNumber)
				 	{
			
				 	cout<<"the secret number is smaller than number you have chosen"<<endl;
				 }
				 	else{
					 
				    cout<<"the secret number is greater than the number you have chosen"<<endl;
				}
				choiceleft--;
				cout<<choiceleft<<"choices left."<<endl;
				if(choiceleft==0)
				{
					cout<<"you couldn't find the secret number,it was"<<secretNumber<<"you lose"<<endl;
					cout<<"play the game again to win "<<endl;
				}
				 }
			 }
		     
		}
		
		 
		 else if(difficultychoice==2){
		     cout<<"you have 7 choices for finding number"<<endl;
		     int choiceleft=7;
		     for(int i=1;i<7;i++)
		     {
		     	cout<<"enter number";
		     	cin>>playerchoice;
		     	if(playerchoice==secretNumber)
		     	{
		     		cout<<"well played you won "<<playerchoice<<"is the secret number"<<endl;
		     		cout<<"       thanks for playing  ...."<<endl;
		     		cout<<"play the game again with us   "<<endl;
		     		break;
				 }
				 else{
				 	cout<<"nope"<<playerchoice<<"is not right number"<<endl;
				 	if(playerchoice>secretNumber)
				 	{
			
				 	cout<<"the secret number is smaller than number you have chosen"<<endl;
				 }
				 	else{
					 
				    cout<<"the secret number is greater than the number you have chosen"<<endl;
				}
				choiceleft--;
				cout<<choiceleft<<"choices left."<<endl;
				if(choiceleft==0)
				{
					cout<<"you couldn't find the secret number,it was"<<secretNumber<<"you lose"<<endl;
					cout<<"play the game again to win "<<endl;
				}
				 }
			 }
		     
		     
		 }
		 
		  else if(difficultychoice==3){
		     cout<<"you have 5 choices for finding number"<<endl;
		     int choiceleft=5;
		     for(int i=1;i<5;i++)
		     {
		     	cout<<"enter number";
		     	cin>>playerchoice;
		     	if(playerchoice==secretNumber)
		     	{
		     		cout<<"well played you won "<<playerchoice<<"is the secret number"<<endl;
		     		cout<<"       thanks for playing  ...."<<endl;
		     		cout<<"play the game again with us   "<<endl;
		     		break;
				 }
				 else{
				 	cout<<"nope"<<playerchoice<<"is not right number"<<endl;
				 	if(playerchoice>secretNumber)
				 	{
			
				 	cout<<"the secret number is smaller than number you have chosen"<<endl;
				 }
				 	else{
					 
				    cout<<"the secret number is greater than the number you have chosen"<<endl;
				}
				choiceleft--;
				cout<<choiceleft<<"choices left."<<endl;
				if(choiceleft==0)
				{
					cout<<"you couldn't find the secret number,it was"<<secretNumber<<"you lose"<<endl;
					cout<<"play the game again to win "<<endl;
				}
				 }
			 }
		     
		     
		 }
		  
		  else if(difficultychoice==0){
		   exit(0);
		  }
		 else{
		 	cout<<"wrong choice,enter valid choice to play the game !(0,1,2,3)"<<endl;
		 }
		 
     	
     	
	 }
     
}
