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
#include "parser.h"

using namespace std;

int main()
{
	Parser pTest;
	pTest.readSequence();
	pTest.parseSequence();
}
