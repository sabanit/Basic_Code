
#include<iostream.h>
#include<conio.h>

void main()
{ 
  int evenCount=0, oddCountt=0, totalNumbers, userInput;
  clrscr();
  cout << "EVEN & ODD COUNT";
 
  cout << endl << "how many numbers do you wish to enter";
  cin >> totalNumbers;
  
  cout << endl << "enter numbers";
  for (int i=0; i<totalNumbers; i++)
  { 
  	cin >> userInput;
   	if (userInput%2 == 0)
   	{ 
    	evenCount++; 
   	}
   	else
   	{ 
    	oddCountt++; 
   	}
  }  
 
 cout << "even numbers" << evenCount;
 cout << endl << "odd numbers" << oddCountt;
 getch();
 }
