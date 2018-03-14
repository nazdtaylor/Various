#include "TicTacToe.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

TicTacToe::TicTacToe()
{
	char ggrid[3][3] = {{'?','?','?'},{'?','?','?'},{'?','?','?'}};
}


void TicTacToe::print()
{
	char ggrid[3][3];
	int row;
    int col;
    for(row = 0;row < 3; row++)
	{
		for(col = 0;col < 3; col++)
		{
			if(ggrid[row][col] != 'U' && ggrid[row][col] != 'C')
			{
				ggrid[row][col] = '?';                      
            }
            cout << ggrid[row][col];
        }
        cout << endl;
                     
    }            
}

void TicTacToe::play_user()
{
	int px,py;
    cout << "Which cell would you like to mark (row and column)? ";
    cin >> py >> px;

	while (ggrid[py][px] == 'C' || ggrid[py][px] == 'U' || 0 > py || 2 < py || 0 > px || 2 < px)
	{
		cout << "Invalid cell position! please try again..." << endl;
		cout << "Which cell would you like to mark (row and column)? ";
		cin >> py >> px;
	}
	
	 ggrid[py][px] = 'U';
}

void TicTacToe::play_cpu()
{
	int cpux,cpuy;
    srand(time(0));
	cpux = rand() % 3;
	cpuy = rand() % 3;

		while (ggrid[cpux][cpuy] == 'C' || ggrid[cpux][cpuy] == 'U')
		{
			cpux = rand() % 3;
			cpuy = rand() % 3;
		}
	ggrid[cpux][cpuy] = 'C';
	cout << endl;
}

char TicTacToe::outcome()
{
	if( ggrid[0][0] =='U' && ggrid[0][1] == 'U' && ggrid[0][2] =='U'){
        cout << "Congratulations, you win!" << endl;
        }
	else if( ggrid[1][0] == 'U' && ggrid[1][1] == 'U' && ggrid[1][2] == 'U'){
        cout << "Congratulations, you win!" << endl;
        }
	else if( ggrid[2][0] == 'U' && ggrid[2][1] == 'U' && ggrid[2][2] == 'U'){
        cout << "Congratulations, you win!" << endl;
        }
    else if( ggrid[0][1] == 'U' && ggrid[1][0] == 'U' && ggrid[2][0] == 'U'){
        cout << "Congratulations, you win!" << endl;
        }
    else if( ggrid[0][1] == 'U' && ggrid[1][1] == 'U' && ggrid[2][1] == 'U'){
        cout << "Congratulations, you win!" << endl;
        }
    else if( ggrid[0][2] == 'U' && ggrid[1][2] == 'U' && ggrid[2][2] =='U'){
        cout << "Congratulations, you win!" << endl;
        } 
    else if( ggrid[0][0] == 'U' && ggrid[1][1] == 'U' && ggrid[2][2] == 'U'){
        cout << "Congratulations, you win!" << endl;
        }
    else if( ggrid[0][2] == 'U' && ggrid[1][1] == 'U' && ggrid[2][0] == 'U' ){
        cout << "Congratulations, you win!" << endl;
        }
	else if( ggrid[0][0]=='C' && ggrid[0][1] == 'C' && ggrid[0][2] =='C'){
        cout << "Sorry, you lose!" << endl;
        }
	else if( ggrid[1][0]== 'C' && ggrid[1][1] == 'C' && ggrid[1][2] == 'C'){
        cout << "Sorry, you lose!" << endl;
        }
	else if( ggrid[2][0]== 'C' && ggrid[2][1] == 'C' && ggrid[2][2] == 'C'){
        cout << "Sorry, you lose!" << endl;
        }
    else if( ggrid[0][1] == 'C' && ggrid[1][0] == 'C' && ggrid[2][0] == 'C'){
        cout << "Sorry, you lose!" << endl;
        }
    else if( ggrid[0][1] == 'C' && ggrid[1][1] == 'C' && ggrid[2][1] == 'C'){
        cout << "sorry, you lose!" << endl;
        }
    else if( ggrid[0][2] == 'C' && ggrid[1][2] == 'C' && ggrid[2][2] =='C'){
        cout << "Sorry, you lose!" << endl;
        } 
    else if( ggrid[0][0] == 'C' && ggrid[1][1] == 'C' && ggrid[2][2] == 'C'){
        cout << "Sorry, you lose!" << endl;
        }
    else if( ggrid[0][2] == 'C' && ggrid[1][1] == 'C' && ggrid[2][0] == 'C' ){
        cout << "sorr, you lose!" << endl;
        }
    else cout << "You both lost" << endl;
	return 0;
}