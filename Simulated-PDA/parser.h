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
#include <stack>

using namespace std;

class Parser
{

private:
	stack<char> PDA;  //Stack representing the PDA

	string sequence; //String and char variables
	char sequenceChar;
	char compareChar;

public:

	Parser(); //Constructor

	//Purpose: To read the text string of ifs and elses from the text file "sequences.txt"
	//Param: No parameters are passed
	//Created by: Ryan Miller
	//Date: 11/25/2014
	void readSequence();

	//Purpose: To parse input text into a char in order to match sequences of ifs and elses
	//Param: No parameters are passed
	//Created by: Ryan Miller
	//Date: 11/25/2014
	void parseSequence();

	//Purpose: To push parsed char onto a stack (PDA)
	//Param: The character being pushed
	//Created by: Ryan Miller
	//Date: 11/25/2014
	void pushSequenceChar(char sChar);

	//Purpose: To pop matched char from stack
	//Param: No parameters are passed
	//Created by: Ryan Miller
	//Date: 11/25/2014
	void popMatchedChar();

	//Purpose: Output a message when the PDA has accepted the string
	//Param: No parameters are passed
	//Created by: Ryan Miller
	//Date: 11/25/2014
	void acceptMessage();

	//Purpose: Output a message when the PDA has rejected the string
	//Param: No parameters are passed
	//Created by: Ryan Miller
	//Date: 11/25/2014
	void rejectMessage();

}; //End of Parser
