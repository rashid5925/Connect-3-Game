//CONNECT 3 GAME
#include <iostream>
#include <graphics.h>
using namespace std;
class Connect3
{
	public:
   	int board[5][5]={{0,0,0,0,0},
				     {0,0,0,0,0},
				     {0,0,0,0,0},
				     {0,0,0,0,0},
				     {0,0,0,0,0}};
   	int column1=4,column2=4,column3=4,column4=4,column5=4;
   	int player=1;
//switching between player 1 and 2
switchplayer()
{
	if(player==1){ 
		outtextxy(20,30,"Player 2");
		player=2;
    }else{
		outtextxy(20,30,"Player 1");
	   	player=1;
    }
}
//drawing and coloring circles
drawpieces()
{
    int i,j,w=150,h=150;
    for(i=0; i<5; i++)
	{
    	for(j=0; j<5; j++)
		{
    		circle(w,h,40); 
			if(board[i][j]==1) 
			{
			setfillstyle(SOLID_FILL,RED);
			 floodfill(w,h,BLUE);
		    }
    		else if(board[i][j]==2) 
			 {
			 setfillstyle(SOLID_FILL,YELLOW);
			 floodfill(w,h,BLUE);
			 }
    		w=w+100;
		}
		h=h+100;
		w=150;
	}
}
//drawing game board
drawboard()
{
  	setcolor(BLUE);
  	settextstyle(10,0,6);
  	//outtextxy(20,30,"BY MAK");
	setlinestyle(0,0,4);
	rectangle(100,100,600,600);
	//vertical lines
	line(200,100,200,600);  
	line(300,100,300,600);
	line(400,100,400,600);
	line(500,100,500,600);
	//horizontal lines
	line(100,200,600,200);
	line(100,300,600,300);
	line(100,400,600,400);
	line(100,500,600,500);
	drawpieces();
}
int winChecker(){
	
	//<<<<<<<<<<<<<<<<<<<<<<<<<< Player 1 >>>>>>>>>>>>>>>>>>>>>>
	
	//Horizentally
	
	//row 0
	if(board[0][0] == 1 && board[0][1] == 1 && board[0][2] == 1){
		return 1;		
	}else if(board[0][1] == 1 && board[0][2] == 1 && board[0][3] == 1){
		return 1;
	}else if(board[0][2] == 1 && board[0][3] == 1 && board[0][4] == 1){
		return 1;
	}
	//row 1
	if(board[1][0] == 1 && board[1][1] == 1 && board[1][2] == 1){
		return 1;		
	}else if(board[1][1] == 1 && board[1][2] == 1 && board[1][3] == 1){
		return 1;
	}else if(board[1][2] == 1 && board[1][3] == 1 && board[1][4] == 1){
		return 1;
	}
	//row 2
	if(board[2][0] == 1 && board[2][1] == 1 && board[2][2] == 1){
		return 1;		
	}else if(board[2][1] == 1 && board[2][2] == 1 && board[2][3] == 1){
		return 1;
	}else if(board[2][2] == 1 && board[2][3] == 1 && board[2][4] == 1){
		return 1;
	}
	//row 3
	if(board[3][0] == 1 && board[3][1] == 1 && board[3][2] == 1){
		return 1;		
	}else if(board[3][1] == 1 && board[3][2] == 1 && board[3][3] == 1){
		return 1;
	}else if(board[3][2] == 1 && board[3][3] == 1 && board[3][4] == 1){
		return 1;
	}
	//row 4
	if(board[4][0] == 1 && board[4][1] == 1 && board[4][2] == 1){
		return 1;		
	}else if(board[4][1] == 1 && board[4][2] == 1 && board[4][3] == 1){
		return 1;
	}else if(board[4][2] == 1 && board[4][3] == 1 && board[4][4] == 1){
		return 1;
	}
	
	//Vertically
	//column 0
	if(board[0][0] == 1 && board[1][0] == 1 && board[2][0] == 1){
		return 1;		
	}else if(board[1][0] == 1 && board[2][0] == 1 && board[3][0] == 1){
		return 1;
	}else if(board[2][0] == 1 && board[3][0] == 1 && board[4][0] == 1){
		return 1;
	}
	//column 1
	if(board[0][1] == 1 && board[1][1] == 1 && board[2][1] == 1){
		return 1;		
	}else if(board[1][1] == 1 && board[2][1] == 1 && board[3][1] == 1){
		return 1;
	}else if(board[2][1] == 1 && board[3][1] == 1 && board[4][1] == 1){
		return 1;
	}
	//column 2
	if(board[0][2] == 1 && board[1][2] == 1 && board[2][2] == 1){
		return 1;		
	}else if(board[1][2] == 1 && board[2][2] == 1 && board[3][2] == 1){
		return 1;
	}else if(board[2][2] == 1 && board[3][2] == 1 && board[4][2] == 1){
		return 1;
	}
	//column 3
	if(board[0][3] == 1 && board[1][3] == 1 && board[2][3] == 1){
		return 1;		
	}else if(board[1][3] == 1 && board[2][3] == 1 && board[3][3] == 1){
		return 1;
	}else if(board[2][3] == 1 && board[3][3] == 1 && board[4][3] == 1){
		return 1;
	}
	//column 4
	if(board[0][4] == 1 && board[1][4] == 1 && board[2][4] == 1){
		return 1;		
	}else if(board[1][4] == 1 && board[2][4] == 1 && board[3][4] == 1){
		return 1;
	}else if(board[2][4] == 1 && board[3][4] == 1 && board[4][4] == 1){
		return 1;
	}
	
	//Diagonally
	//<<<<<<<<<<<<<<<<< Left to Right >>>>>>>>>>>>>>>>>>>>//
	//col 1
	if (board[0][0] == 1 && board[1][1] == 1 && board[2][2] == 1)
	{
		return 1;
	}
	else if (board[1][0] == 1 && board[2][1] == 1 && board[3][2] == 1)
	{
		return 1;
	}
	else if (board[2][0] == 1 && board[3][1] == 1 && board[4][2] == 1)
	{
		return 1;
	}
	//col 2
	else if (board[0][1] == 1 && board[1][2] == 1 && board[2][3] == 1)
	{
		return 1;
	}
	else if (board[1][1] == 1 && board[2][2] == 1 && board[3][3] == 1)
	{
		return 1;
	}
	else if (board[2][1] == 1 && board[3][2] == 1 && board[4][3] == 1)
	{
		return 1;
	}
	//col3
	else if (board[0][2] == 1 && board[1][3] == 1 && board[2][4] == 1)
	{
		return 1;
	}
	else if (board[1][2] == 1 && board[2][3] == 1 && board[3][4] == 1)
	{
		return 1;
	}
	else if (board[2][2] == 1 && board[3][3] == 1 && board[4][4] == 1)
	{
		return 1;
	}
	//<<<<<<<<<<<<<<<<<<<< Right to Left >>>>>>>>>>>>>>>>>>>>//
	//col 4
	else if (board[0][4] == 1 && board[1][3] == 1 && board[2][2] == 1)
	{
		return 1;
	}
	else if (board[1][4] == 1 && board[2][3] == 1 && board[3][2] == 1)
	{
		return 1;
	}
	else if (board[2][4] == 1 && board[3][3] == 1 && board[4][2] == 1)
	{
		return 1;
	}
	//col 3
	else if (board[0][3] == 1 && board[1][2] == 1 && board[2][1] == 1)
	{
		return 1;
	}
	else if (board[1][3] == 1 && board[2][2] == 1 && board[3][1] == 1)
	{
		return 1;
	}
	else if (board[2][3] == 1 && board[3][2] == 1 && board[4][1] == 1)
	{
		return 1;
	}
	//col 2
	else if (board[0][2] == 1 && board[1][1] == 1 && board[2][0] == 1)
	{
		return 1;
	}
	else if (board[1][2] == 1 && board[2][1] == 1 && board[3][0] == 1)
	{
		return 1;
	}
	else if (board[2][2] == 1 && board[3][1] == 1 && board[4][0] == 1)
	{
		return 1;
	}
	
	//<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< Player 2 >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	
	//Horizentally
	
	//row 0
	if(board[0][0] == 2 && board[0][1] == 2 && board[0][2] == 2){
		return 2;		
	}else if(board[0][1] == 2 && board[0][2] == 2 && board[0][3] == 2){
		return 2;
	}else if(board[0][2] == 2 && board[0][3] == 2 && board[0][4] == 2){
		return 2;
	}
	//row 1
	if(board[1][0] == 2 && board[1][1] == 2 && board[1][2] == 2){
		return 2;		
	}else if(board[1][1] == 2 && board[1][2] == 2 && board[1][3] == 2){
		return 2;
	}else if(board[1][2] == 2 && board[1][3] == 2 && board[1][4] == 2){
		return 2;
	}
	//row 2
	if(board[2][0] == 2 && board[2][1] == 2 && board[2][2] == 2){
		return 2;		
	}else if(board[2][1] == 2 && board[2][2] == 2 && board[2][3] == 2){
		return 2;
	}else if(board[2][2] == 2 && board[2][3] == 2 && board[2][4] == 2){
		return 2;
	}
	//row 3
	if(board[3][0] == 2 && board[3][1] == 2 && board[3][2] == 2){
		return 2;		
	}else if(board[3][1] == 2 && board[3][2] == 2 && board[3][3] == 2){
		return 2;
	}else if(board[3][2] == 2 && board[3][3] == 2 && board[3][4] == 2){
		return 2;
	}
	//row 4
	if(board[4][0] == 2 && board[4][1] == 2 && board[4][2] == 2){
		return 2;		
	}else if(board[4][1] == 2 && board[4][2] == 2 && board[4][3] == 2){
		return 2;
	}else if(board[4][2] == 2 && board[4][3] == 2 && board[4][4] == 2){
		return 2;
	}
	
	//column 0
	if(board[0][0] == 2 && board[1][0] == 2 && board[2][0] == 2){
		return 2;		
	}else if(board[1][0] == 2 && board[2][0] == 2 && board[3][0] == 2){
		return 2;
	}else if(board[2][0] == 2 && board[3][0] == 2 && board[4][0] == 2){
		return 2;
	}
	
	//Vertically
	
	//column 1
	if(board[0][1] == 2 && board[1][1] == 2 && board[2][1] == 2){
		return 2;		
	}else if(board[1][1] == 2 && board[2][1] == 2 && board[3][1] == 2){
		return 2;
	}else if(board[2][1] == 2 && board[3][1] == 2 && board[4][1] == 2){
		return 2;
	}
	//column 2
	if(board[0][2] == 2 && board[1][2] == 2 && board[2][2] == 2){
		return 2;		
	}else if(board[1][2] == 2 && board[2][2] == 2 && board[3][2] == 2){
		return 2;
	}else if(board[2][2] == 2 && board[3][2] == 2 && board[4][2] == 2){
		return 2;
	}
	//column 3
	if(board[0][3] == 2 && board[1][3] == 2 && board[2][3] == 2){
		return 2;		
	}else if(board[1][3] == 2 && board[2][3] == 2 && board[3][3] == 2){
		return 2;
	}else if(board[2][3] == 2 && board[3][3] == 2 && board[4][3] == 2){
		return 2;
	}
	//column 4
	if(board[0][4] == 2 && board[1][4] == 2 && board[2][4] == 2){
		return 2;		
	}else if(board[1][4] == 2 && board[2][4] == 2 && board[3][4] == 2){
		return 2;
	}else if(board[2][4] == 2 && board[3][4] == 2 && board[4][4] == 2){
		return 2;
	}
	
	//Diagonally
	//<<<<<<<<<<<<<<<<< Left to Right >>>>>>>>>>>>>>>>>>>>//
	//col 1
	if (board[0][0] == 2 && board[1][1] == 2 && board[2][2] == 2)
	{
		return 2;
	}
	else if (board[1][0] == 2 && board[2][1] == 2 && board[3][2] == 2)
	{
		return 2;
	}
	else if (board[2][0] == 2 && board[3][1] == 2 && board[4][2] == 2)
	{
		return 2;
	}
	//col 2
	else if (board[0][1] == 2 && board[1][2] == 2 && board[2][3] == 2)
	{
		return 2;
	}
	else if (board[1][1] == 2 && board[2][2] == 2 && board[3][3] == 2)
	{
		return 2;
	}
	else if (board[2][1] == 2 && board[3][2] == 2 && board[4][3] == 2)
	{
		return 2;
	}
	//col3
	else if (board[0][2] == 2 && board[1][3] == 2 && board[2][4] == 2)
	{
		return 2;
	}
	else if (board[1][2] == 2 && board[2][3] == 2 && board[3][4] == 2)
	{
		return 2;
	}
	else if (board[2][2] == 2 && board[3][3] == 2 && board[4][4] == 2)
	{
		return 2;
	}
	//<<<<<<<<<<<<<<<<<<<< Right to Left >>>>>>>>>>>>>>>>>>>>//
	//col 4
	else if (board[0][4] == 2 && board[1][3] == 2 && board[2][2] == 2)
	{
		return 2;
	}
	else if (board[1][4] == 2 && board[2][3] == 2 && board[3][2] == 2)
	{
		return 2;
	}
	else if (board[2][4] == 2 && board[3][3] == 2 && board[4][2] == 2)
	{
		return 2;
	}
	//col 3
	else if (board[0][3] == 2 && board[1][2] == 2 && board[2][1] == 2)
	{
		return 2;
	}
	else if (board[1][3] == 2 && board[2][2] == 2 && board[3][1] == 2)
	{
		return 2;
	}
	else if (board[2][3] == 2 && board[3][2] == 2 && board[4][1] == 2)
	{
		return 2;
	}
	//col 2
	else if (board[0][2] == 2 && board[1][1] == 2 && board[2][0] == 2)
	{
		return 2;
	}
	else if (board[1][2] == 2 && board[2][1] == 2 && board[3][0] == 2)
	{
		return 2;
	}
	else if (board[2][2] == 2 && board[3][1] == 2 && board[4][0] == 2)
	{
		return 2;
	}
	
	return 0;
}
//Checking no win condition
bool checkNoWin(){
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(board[i][j]==0){
				return false;
			}
		}
	}
	return true;
}

reset(){
	player = 1;
	column1=4,column2=4,column3=4,column4=4,column5=4;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			board[i][j]=0;
		}
	}
}
player1Results(){
		setcolor(GREEN);
			outtextxy(100,300,"Player 1 has Won");
			outtextxy(100,300,"Player 1 has Won");
			setcolor(RED);
			outtextxy(100,620,"RESET");
}
player2Results(){
		setcolor(GREEN);
			outtextxy(100,300,"Player 2 has Won");
			outtextxy(100,300,"Player 2 has Won");
			setcolor(RED);
			outtextxy(100,620,"RESET");
}
};	
//testing the game
main()
{
	/*Group Members Name:
	  Aqsa Zubair Butt
	  Ariba Naseem*/
	Connect3 c3;
  	initwindow(700,700,"Connect 3");
    c3.drawboard();
    POINT cursorPos;
    outtextxy(20,30,"Player 1");
	while(1)
	{
		GetCursorPos(&cursorPos);
		if(c3.winChecker()==0 && !c3.checkNoWin()){
			if(GetAsyncKeyState(VK_LBUTTON) && cursorPos.x>100 && cursorPos.x <200 && cursorPos.y>100 && cursorPos.y <600  )
			{ 
			c3.board[c3.column1][0]=c3.player;
			c3.drawpieces();
			c3.column1--;
			c3.switchplayer();
			}
			else if(GetAsyncKeyState(VK_LBUTTON) && cursorPos.x>200 && cursorPos.x <300 && cursorPos.y>100 && cursorPos.y <600  )
			{ 
			c3.board[c3.column2][1]=c3.player;
			c3.drawpieces();
			c3.column2--;
			c3.switchplayer();
			}
			else if(GetAsyncKeyState(VK_LBUTTON) && cursorPos.x>300 && cursorPos.x <400 && cursorPos.y>100 && cursorPos.y <600  )
			{ 
			c3.board[c3.column3][2]=c3.player;
			c3.drawpieces();
			c3.column3--;
			c3.switchplayer();
			}
			else if(GetAsyncKeyState(VK_LBUTTON) && cursorPos.x>400 && cursorPos.x <500 && cursorPos.y>100 && cursorPos.y <600  )
			{ 
			c3.board[c3.column4][3]=c3.player;
			c3.drawpieces();
			c3.column4--;
			c3.switchplayer();
			}
			else if(GetAsyncKeyState(VK_LBUTTON) && cursorPos.x>500 && cursorPos.x <600 && cursorPos.y>100 && cursorPos.y <600  )
			{ 
			c3.board[c3.column5][4]=c3.player;
			c3.drawpieces();
			c3.column5--;
			c3.switchplayer();
			}
			delay(150);
		}
		
		else if(c3.winChecker()==1){
			c3.player1Results();
			if(GetAsyncKeyState(VK_LBUTTON) && cursorPos.x>100 && cursorPos.x <500 && cursorPos.y>600 && cursorPos.y <800  ){
				cleardevice();
				c3.reset();
				c3.drawboard();
				outtextxy(20,30,"Player 1");
			}else{
				continue;
			}
		}else if(c3.winChecker()==2){
			c3.player2Results();
			if(GetAsyncKeyState(VK_LBUTTON) && cursorPos.x>100 && cursorPos.x <500 && cursorPos.y>600 && cursorPos.y <800  ){
				cleardevice();
				c3.reset();
				c3.drawboard();
				outtextxy(20,30,"Player 1");
			}else{
				continue;
			}
		
		}else if(c3.checkNoWin()){
			exit(0);
		}
	}
	getch();
  	closegraph();
}
  
