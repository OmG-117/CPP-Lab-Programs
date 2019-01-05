#include<iostream.h>
#include<conio.h>

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
  else if (count==0)
    return 2;

  return 0;
}

void main()
{
  clrscr();
  char grid[3][3] = {'-','-','-','-','-','-','-','-','-'};
  char type;
  //cout << "Select player count (1/2): "
  cout << "Use which type for player 1? (O/X): ";
  cin>>type;

  displaygrid(grid);

  int t = 0;
  int movex, movey;


  while (t <= 9)
  {
    cout << type << "'s turn" << endl;
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
