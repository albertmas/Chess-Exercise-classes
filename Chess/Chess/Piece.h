#pragma once
class Piece
{
protected:

	int _row;
	char _column;
	bool _isWhite;

public:
	
	Piece(bool, int, char);
	virtual ~Piece();

	int getRow()const;
	char getColumn()const;
	bool isWhite()const;
	void setPosition(int, char);
	virtual bool checkMovement(int prow, char pcolumn) = 0;
};

