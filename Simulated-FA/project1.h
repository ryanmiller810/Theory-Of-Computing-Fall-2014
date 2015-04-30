//=================================================================================================
//
//  Authors: Carlo Lam and Ryan Miller
//  Date: 10.11.2014
//  CS421
//  Project 1
//
//  Assumptions:
//  Special Requirements:
//
//=================================================================================================

#include <iostream>
#include <string>

using namespace std;

//=================================================================================================

class PasswordFA
{

	private:

		static int number; // static counters to confirm required alphanumerics
		static int upper;
		static int lower;
		static int special;

		string pw; // string to hold password entered by user
		string state; // current state the FA is at

	public:

		PasswordFA(); 
		//~PasswordFA();

		inputPassword();
		displayState();
		checkPassSize(string pw);
		readPassword(string pw);

}; // end of PasswordFA class
