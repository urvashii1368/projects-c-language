#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
enum direction{STOP=0,LEFT,RIGHT,UP,DOWN};
direction dir;
bool gameover;
const int height =20;
const int width=20;
int headX,headY,fruitX,fruitY,score;
int tailx[100],taily[100];
int tail_len;

void setup();
void draw();
void input();
void logic();

int main()
{
	char start;
	cout<<"                             "<<endl;
	cout<<" ------ snake ladder----------"<<endl;
	cout<<"                               "<<endl;
	cout<<"enter s to start game          "<<endl;
	cin>>start;
	if(start=='s')
	{
		setup();
		while(!gameover)
		{
			draw();
			input();
			logic();
			Sleep(100);
			system("cls");
		
		}
	}
	return 0;
}
void setup()
{
	gameover =false;
	dir=STOP;
	headX=width/2;
	headY=height/2;
	fruitX=rand()%width;
	fruitY=rand()%height;
	score=0;
}
void draw()
{
	system("cls");
	cout<<"\t\t"; 

	for(int i=0;i<width+2;i++)         // upper border
	{
		cout<<"||";
	}
	cout<<endl;
	
	for(int i=0;i<height;i++){           //left wall
		for(int j=0;j<width;j++){
			if(j==0)
			{
				cout<<"\t\t\t ||";
			}
			if(i==headY && j==headX)          //SNAKE HEAD
			{
				cout<<"O";
			}
			else if(i== fruitY &&j==fruitX){            //FRUIT
				cout<<"*";
			}
			else{
				bool print =false;
				for(int k=0;k<tail_len;k++){              //TAIL
				 if(tailx[k]==j && taily[k]==i){				 
				 cout<<"o";
				 print =true;
			}
				}
				if(!print){                         //SPACE
					cout<<" ";
				}
				
			}
			if(j==width-1){                           // RIGHT WALL
				cout<<"||";
			}
		}
		cout<<endl;
	}
	
	cout<<"\t\t\t";
   	for(int i=0;i<width+2;i++)         // lower border
	{
		cout<<"||";
	}
	cout<<endl;
	cout<<" \t\t\t score"<<score<<endl;
}
void input(){
	if(_kbhit())
	switch(getch())
	{
		case 'a':
			dir =LEFT;
			break;
			
			case 'd':
			dir =RIGHT;
			break;
			
			case 'w':
			dir =UP;
			break;
			
			case 's':
			dir =DOWN;
			break;
			
			default:
				break;
			
		
	}
}
void logic()
{
	int prevx = tailx[0];          //tail logic
	int prevy =taily[0];
	int prev2x,prev2y;
	tailx[0]=headX;
	taily[0]=headY;
	for(int i=1;i<tail_len;i++)
	{
		prev2x=tailx[i];
		prev2y=taily[i];
		tailx[i]=prevx;
		taily[i]=prevy;
		prevx=prev2x;
		prevy=prev2y;
		
	}
	switch(dir)                   // direction logic
	{
		case LEFT:
		headX--;
		break;
		
		case RIGHT:
		headX++;
		break;
		
		case UP:
		headY--;
		break;
		
			case DOWN:
        	headY++; 
	     	break;
	     	
	     	default :
	     		break;
	     		
			
	}
/*	if(headX>=width)              // touch walls
	{
		headX=0;
	}
	else if(headX<0)
	{
		headX=width-1;
	}
		if(headY>=height)
	{
		headY=0;
	}
	else if(headY<0)
	{
		headY=height-1;
	}*/
	if (headX >= width || headX < 0 || headY >= height || headY < 0) {
    gameover = true;
}
	
	for(int i=1;i<tail_len;i++)          //snake bite itself
	{
		if(tailx[i]==headX && taily[i]==headY)
		{
			gameover =true;
		}
	}
	if(headX==fruitX && headY== fruitY)     //snake eat fruit
	{
		score+=10;
		fruitX=rand()%width;
		fruitY=rand()%height;
		tail_len++;
	}
}
	 
	  

  


