/**************************************************************************************************
*
*  Author: Ryan Miller
*  Date: 11/25/2014
*  Project 2 - PDA
*  CS421 - Theory of Computing
*  Dr. Rocio Guillen
*  
*  In this assignment we are to implement a parser that simulates a PDA in order to process
*  sequences of correctly paired ifs and elses. The program will read in an input file called
*  "sequence.txt" and output a message informing the user whether or not the sequence was 
*  accepted or not accepted by the PDA.
*
**************************************************************************************************/

#include <iostream>
#include <string>
#include <fstream>
#include <stack>

using namespace std;

#include "parser.h"

/*************************************************************************************************/

Parser::Parser()
{

} //End of Parser

/*************************************************************************************************/

void Parser::readSequence()
{
	ifstream file;
	file.open("sequence.txt");
	if(!file)
	{
		cout << "Could not open specified file" << endl;
	}

	else
	{
		while(!file.eof())
		{
			file >> sequence;
		}
	}	

	file.close();

} //End of readSequence

/*************************************************************************************************/

void Parser::parseSequence()
{
	for(int i = 0; i < sequence.size(); i++)
	{
		compareChar = sequence[i];

		switch(compareChar)
		{

		case 'i':
		sequenceChar = compareChar;
		pushSequenceChar(sequenceChar);
		i++; //To skip remaining 'f' in "if"
		break;

		case 'e':
		popMatchedChar();
		i+=3; //To skip remaining "lse" in "else"
		break;

		}
	}

	if(PDA.empty())
	{
		acceptMessage();
	}
	else
	{
		rejectMessage();
	}

} //End of parseSequence

/*************************************************************************************************/

void Parser::pushSequenceChar(char sChar)
{
	if(!PDA.empty())
	{
		popMatchedChar();
	}
	else
	{
		PDA.push(sChar);
		cout << "Pushing i onto the PDA" << endl;
	}

} //End of pushSequenceChar

/*************************************************************************************************/

void Parser::popMatchedChar()
{
	if(!PDA.empty())
	{
		PDA.pop();
		cout << "Popping matched i from PDA" << endl;
	}
	else
	{
		rejectMessage();
	}

} //End of popMatchedChar

/*************************************************************************************************/

void Parser::acceptMessage()
{
	cout << "Correct Sequence" << endl;
	exit(0);

} //End of acceptMessage

/*************************************************************************************************/

void Parser::rejectMessage()
{
	cout << "Sequence is Syntactically Incorrect" << endl;
	exit(0);

} //End of rejectMessage

/*************************************************************************************************/

//End of parser.cpp
