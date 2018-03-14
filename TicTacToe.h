#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe
{
public:
	TicTacToe();

	void print();

	void play_user();

	void play_cpu();

	char outcome();

private:
	int px,py;
	int cpux,cpuy;
	char ggrid[3][3];
};

#endif