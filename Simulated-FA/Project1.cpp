#include <iostream>
#include <string>
#include <cctype>


using namespace std;
void checkSum(int,int);

int main()
{


  string ch;
  bool isSymbol = false;
  int numbers = 0;
  int upper = 0;
  int pNumber = 0;
  int pUpper = 0;
  int special = 0;
  int blank = 0;
  int start = 0;
  bool decision = true;
  cout<<"Enter Password:"<<endl;
  cin>>ch;

  if(!isdigit(ch[0]) && !isupper(ch[0]) && !islower(ch[0]) && ch[0] != '\0')
    {

      isSymbol = true;
      special++;
    }

  if(!isSymbol)
    {
      cout<<"Password must start with a symbol"<<endl;
      main();
    }

  for(int j = 0; j <= ch.size(); j++)
    {
      if(j==5)
	{

	  checkSum(upper, numbers);

	}
    }

  while(ch[start] != '\0')
    {
    int currCH = start;
  switch(currCH)
    {
    case 0: 
      cout << "State: => " << "q0" << endl;
      break;
    case 1:
      if(isSymbol){cout << "State: => " << "q1" << endl;}
      else{cout << "State: => " << "qerr" << endl;}
      break;
    case 2:
      if(isupper(currCH)){cout << "State: => " << "q2" << endl; pUpper++;}
      else if(isdigit(currCH)){cout << "State: => " << "q11" << endl; pNumber++;}
      else{cout << "State: => " << "qerr" << endl;}
      break;
    case 3:
      if(isupper(currCH) && pUpper == 1 && pNumber == 0){cout << "State: => " << "q3" << endl; pUpper++;}
      else if(isupper(currCH) && pUpper == 0 && pNumber == 1){cout << "State: => " << "q12" << endl; pUpper++;}
      else if(isdigit(currCH) && pUpper == 1 && pNumber == 0){cout << "State: => " << "q12" << endl; pNumber++;}
      else if(isdigit(currCH) && pUpper == 0 && pNumber == 1){cout << "State: => " << "q13" << endl; pNumber++;}
      else{cout << "State: => " << "qerr" << endl;}
      break;
    case 4:
      if(isdigit(currCH) && pUpper == 2 && pNumber == 0){cout << "State: => " << "q4" << endl; pNumber++;}
      else if(isupper(currCH) && pUpper == 1 && pNumber == 1){cout << "State: => " << "q4" << endl; pUpper++;}
      else if(isdigit(currCH) && pUpper == 1 && pNumber == 1){cout << "State: => " << "q14" << endl; pNumber++;}
      else if(isupper(currCH) && pUpper == 0 && pNumber == 2){cout << "State: => " << "q14" << endl; pUpper++;}
      else{cout << "State: => " << "qerr" << endl;}
      break;
    case 5:
      if(isupper(currCH) && pUpper == 1 && pNumber == 2){cout << "State: => " << "q5" << endl; pUpper++;}
      else if(isdigit(currCH) && pUpper == 2 && pNumber == 1){cout << "State: => " << "q5" << endl; pNumber++;}
      else {cout << "State: => " << "qerr" << endl;}
      break;
    case 6:
      if(pUpper == 2 && pNumber == 2){cout << "State: => " << "q6" << endl;}
      break;
    case 7:
      if(currCH == 7){cout << "State: => " << "q7" << endl;}
      break;
    case 8:
      if(currCH == 8){cout << "State: => " << "q8" << endl;}
      break;
    case 9:
      if(currCH == 9){cout << "State: => " << "q9" << endl;}
    case 10:
      if(currCH == 10){cout << "State: => " << "q10" << endl;}
      break;
    case 11:
      if(currCH == 11){cout << "State: => " << "qerr" << endl;}
      break;
    }
  start++;
    }

  for(int i = 0 ; i<= ch.size(); i++)
    {

      if(isdigit(ch[i]))
	{

	  numbers++;
	}
      if(isupper(ch[i]))
	{
	  upper ++;

	}
      if(!isdigit(ch[i]) && !isupper(ch[i]) && !islower(ch[i]) && ch[i] != '\0')
	{
	  special++;

	}
      if(isblank(ch[i]))
	blank++;
    }

  if(ch.size() < 8 || ch.size() > 10)
    {

      cout<<"password not accepted"<<endl;
      return 0;
    }
  if(numbers > 1 && special != 0 && upper > 1)
    cout<<"password accepted"<<endl;

    return 0;

} // end of main


void checkSum(int upper , int numbers)
{
  int upperCase = upper;
  int anotherNumber= numbers;
  double sum;
  sum = upperCase/ 2;
  double sumOfNumbers = anotherNumber/2;
  if( sum != 1 || sumOfNumbers !=1)
    {

      return;

    }

}
