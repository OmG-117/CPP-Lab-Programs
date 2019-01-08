#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

void displaygrid(char grid[3][3])
{
  cout<<"-------"<<endl;
  cout<<"|"<<grid[0][0]<<"|"<<grid[0][1]<<"|"<<grid[0][2]<<"|"<<endl;
  cout<<"|"<<grid[1][0]<<"|"<<grid[1][1]<<"|"<<grid[1][2]<<"|"<<endl;
  cout<<"|"<<grid[2][0]<<"|"<<grid[2][1]<<"|"<<grid[2][2]<<"|"<<endl;
  cout<<"-------"<<endl;
  cout<<endl;
}

void switchType(char &x)
{
  if (x == 'O' || x == 'o')
    x = 'X';
  else if (x == 'X' || x == 'x')
    x = 'O';
  else
    cout << "Error";
}

void switchPlayer(char &x)
{
  if (x == 1)
    x = 2;
  else if (x == 2)
    x = 1;
  else
    cout << "Error";
}


int checkWin(char grid[3][3])
{
  int count = 0;
  for (int q = 0; q < 3; q++)
  {
      for (int r = 0; r < 3; r++)
      {
	  if (grid[r][q]=='-')
	    count++;
      }
  }

  for (int i = 0; i < 3; i++)
  {
    if (grid[i][0] == grid[i][1] && grid[i][2] == grid[i][1] && grid[i][0]!='-')
      return 1;
  }

  for (int j = 0; j < 3; j++)
  {
    if (grid[0][j] == grid[1][j] && grid[2][j] == grid[1][j] && grid[0][j]!='-')
      return 1;
  }

  if (grid[0][0] == grid[1][1] && grid[2][2] == grid[1][1] && grid[0][0]!='-')
    return 1;
  if (grid[0][2] == grid[1][1] && grid[2][0] == grid[1][1] && grid[2][0]!='-')
    return 1;
  else if (count == 0)
    return 2;

  return 0;
}

char aiMove(char grid[3][3], char type)
{
  int count1 = 0;
  int i, j, k;

  for (i = 0; i < 3; i++)
  {
	  for (j = 0; j < 3; j++)
	  {
		if (grid[i][j] == type)
			count1++;
	  }
	  if (count1 == 2)
	  {
		for (k = 0; k < 3; k++)
	{
			if (grid[i][k] == '-')
				grid[i][k] = type; return 0;
		}
	  }
  }

  int count2=0;
  for (i = 0; i < 3; i++)
  {
	  for (int j = 0; j < 3; j++)
	  {
		  if (grid[j][i] == type)
			  count2++;
	  }
	  if (count2 == 2)
	  {
		for (int k = 0; k < 3; k++)
	{
			if (grid[j][k] == '-')
				grid[j][k] = type; return 0;
		}
	  }
  }

  int count3=0;
  for (i = 0, j = 0; i < 3, j < 3; i++, j++)
	  count3++;

  if (count3 == 2)
  {
    for (i = 0, j = 0; i < 3, j < 3; i++, j++)
    {
	if (grid[i][j] == '-')
	{
			grid[i][j] = type; return 0;
			}
	}
  }

  int count4=0;
  for (i = 2, j = 0; i >= 0, j < 3; i--, j++)
	  count4++;

  if (count4 == 2)
  {
    for (i = 0, j = 0; i < 3, j < 3; i++, j++)
    {
	if (grid[i][j] == '-')
	{
			grid[i][j] = type; return 0;
			}
	}
  }

  while (1)
  {
	  randomize();
	  int x=random(3);
	  int y=random(3);

	  if (grid[x][y] != '-')
	  {
		 grid[x][y] = type; return 0;
	  }
  }

}

void main()
{
  clrscr();
  char grid[3][3] = {'-','-','-','-','-','-','-','-','-'};
  char type, player, trash;
  //cout << "Select player count (1/2): ";
  cout << "Use which type for player 1? (O/X): "; cin>>type;

  displaygrid(grid);

  int t = 0;
  int movex, movey;

  randomize();
  player = 1;//random(2);

  while (t <= 9)
  {
    cout << type << "'s turn" << endl;
    while (1)
    {
	  if (player == 0)
	  {
	    trash = aiMove(grid, type); break;
	    }

      else	
	  {
         cout << "Enter x-coordinate of move: "; cin >> movex;
         cout << "Enter y-coordinate of move: "; cin >> movey;
         if (grid[--movex][--movey] == '-')
         {
	        cout << endl;
         	break;
         }
         else
	        cout << "Invalid indices!" << endl << endl;
      
      grid[movex][movey] = type;
      displaygrid(grid);
    
	  }
      if (checkWin(grid) || checkWin(grid) == 2)
        break;
    
      switchType(type);
	  switchPlayer(player);
      t++;
	}
  }

  if (checkWin(grid)==2)
      cout << endl << endl << "It's a draw.";
      
  else if (checkWin(grid)==1)
      cout << endl << endl << type << " wins!";

  getch();

}
