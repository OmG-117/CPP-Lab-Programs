#include <iostream.h>
#include <conio.h>
#include <stdlib.h>

struct tgtCell
{
  int val;
  char type;
};

void displaygrid(char grid[3][3])
{
  cout<<"-------"<<endl;
  cout<<"|"<<grid[0][0]<<"|"<<grid[0][1]<<"|"<<grid[0][2]<<"|"<<endl;
  cout<<"|"<<grid[1][0]<<"|"<<grid[1][1]<<"|"<<grid[1][2]<<"|"<<endl;
  cout<<"|"<<grid[2][0]<<"|"<<grid[2][1]<<"|"<<grid[2][2]<<"|"<<endl;
  cout<<"-------"<<endl;
  cout<<endl<<endl;
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

int checkWin(char grid[3][3])
{
  int count = 0;

  for (int q = 0; q < 3; q++) //Checking for draw
  {
      for (int r = 0; r < 3; r++)
      {
	  if (grid[r][q]=='-')
	    count++;
      }
  }

  for (int i = 0; i < 3; i++) //Checking row for win
  {
    if (grid[i][0] == grid[i][1] && grid[i][2] == grid[i][1] && grid[i][0]!='-')
      return 1;
  }

  for (int j = 0; j < 3; j++) //Checking col for win
  {
    if (grid[0][j] == grid[1][j] && grid[2][j] == grid[1][j] && grid[0][j]!='-')
      return 1;
  }

  if (grid[0][0] == grid[1][1] && grid[2][2] == grid[1][1] && grid[0][0]!='-')
    return 1;
  if (grid[0][2] == grid[1][1] && grid[2][0] == grid[1][1] && grid[2][0]!='-')
    return 1;
  else if (count==0)
    return 2;

  return 0;
}

tgtCell checkPotentialWin(char grid[3][3])
{
  int count = 0;
  tgtCell returnVal;

  for (int i = 0; i < 3; i++) 
  {
    for (int j = 0; j < 3; j++)
    {
      if (grid[i][j] == 'O' || grid[i][j] == 'X') // It doesn't matter who is
	count++;                                      // getting the win on the next
    }						                      // turn as in both cases it is
    if (count == 2)           			          // desirable to move there.
    {
      returnVal.val = i;
      returnVal.type = 'r';
      return returnVal;
    }
    else
      count = 0;
  }

  for (int m = 0; m < 3; m++)
  {
    for (int n = 0; n < 3; n++)
    {
      if (grid[n][m] == 'O' || grid[n][m] == 'X')
	count++;
    }
    if (count == 2)
    {
      returnVal.val = n;
      returnVal.type = 'c';
      return returnVal;
    }
    else
      count = 0;
  }

  for (int d1 = 0; d1 < 3; d1++)
  {
    if (grid[d1][d1] == 'O' || grid[d1][d1] == 'X')
      count++;
  }
  if (count == 2)
  {
    returnVal.val = 0;
    returnVal.type = '1';
    return returnVal;
  }
  else
    count = 0;

  for (int d2 = 0; d2 < 3; d2++)
  {
    if (grid[d2][2 - d2] == 'O' || grid[d2][2 - d2] == 'X')
      count++;
  }
  if (count == 2)
  {
    returnVal.val = 0;
    returnVal.type = '2';
    return returnVal;
  }
  else
    count = 0;

  returnVal.val = 0;
  returnVal.type = 'n';
  return returnVal;
}

void computerMove(char grid[3][3], char type)
{
  tgtCell tgt = checkPotentialWin(grid);
  if (tgt.type == 'n')
  {
    int r, c;
    do
    {
      randomize();
      r = random(3);
      randomize();
      c = random(3);
    } while (grid[r][c] != '-');
    grid[r][c] = type;
  }

  if (tgt.type == 'r')
  {
    for (int i = 0; i < 3; i++)
    {
      if (grid[tgt.val][i] == '-')
	break;
    }
    grid[tgt.val][i] = type;
  }

  if (tgt.type == 'c')
  {
    for (int j = 0; j < 3; j++)
    {
      if (grid[tgt.val][j] == '-')
	break;
    }
    grid[tgt.val][j] = type;
  }

  if (tgt.type == '1')
  {
    for (int m = 0; m < 3; m++)
    {
      if (grid[m][m] == '-')
	break;
    }
    grid[m][m] = type;
  }

  if (tgt.type == '2')
  {
    for (int n = 0; n < 3; n++)
    {
      if (grid[n][2 - n] == '-')
	break;
    }
    grid[n][2 - n] = type;
  }
}

void main()
{
  clrscr();
  char grid[3][3] = {'-','-','-','-','-','-','-','-','-'};
  char type, player;
  cout << "Select player count (1/2): "; cin >> player;
  cout << "Use which type for player 1? (O/X): "; cin >> type;
  char p1Type = type;

  displaygrid(grid);

  int t = 0;
  int movex, movey;

  while (t <= 9)
  {
    cout << type << "'s turn" << endl;
    if ((player == '1' && type == p1Type) || player == '2')
    {
      while (1)
      {
	cout << "Enter x-coordinate of move: "; cin >> movex;
	cout << "Enter y-coordinate of move: "; cin >> movey;
	if (grid[--movex][--movey] == '-')
	{
	  cout << endl;
	  break;
	}
	else
	  cout << "Invalid indices" << endl;
      }
      grid[movex][movey] = type;
    }
    else
      computerMove(grid, type);

    displaygrid(grid);

    if (checkWin(grid) || checkWin(grid)==2)
      break;

    switchType(type);
    t++;
  }
  if (checkWin(grid)==2)
      cout << endl << endl << "It's a draw.";
  else if (checkWin(grid)==1)
      cout << endl << endl << type << " wins!";

  getch();

}
