 /*
 Author : Mahmoud Alaa Mahmoud Abd El-ghani
 ID : 20231154
 Date : 1 / 3 / 2024
 Description : solving Game 1 in Assignment 1....
 
 */





#include<iostream>
#include<cmath>
#include<vector>
#include<string>
#include<array>
#include<cstring>
#include<algorithm>
#include<list>
#include<iterator>
#include<cctype>
#include<exception>
using namespace std ;
int main()
{ 
  // Our Game..(**Subtract The Square**)
  // Now We Will Explain Our Game Rules..
  // *Rules* : 
  // 1. The Number You Will Take Always Be An Integer.
  // 2. The Available choices Is Square Numbers That Less Than The Given Integer.
  // 3. The First Player Substract First Square Number.
  // 4. The Second Player Move According To First Player Result.
  // 5. They Start From The End Results And So on... .
  // **==========================================**.



  // The NUmber That Will Be Given.
  short intnum;
  // The Operartor (-).
  char op = '-';
  // The Number 1 And Number 2 That The Users Will Enter.
  short num1,num2;
  // Like A separator Among The 2 Players'Names.
  string v = "And";
  // 2 Players Names.
  string name1,name2;
  string r;
  // We Ask Them To Enter Thier Names.
  cout << " Enter The 2 Players Names : " ;
  cin >> name1 >> v >>  name2;
  // Now I Will Give Them The Number. It Should Be Integer.
  cout << " The Number Is : ";
  cin >> intnum;
  if(!isdigit(intnum))
  {
    cout << "Please Enter An Integer Number.." << endl;
    cout << " The Game End" << "\n";
  }
  // This Is A Message To Inform Players To Enter A Numbers Less Than The Integer Number.
  cout << " */* You Should Subtract A Square Number Less Than : " << intnum << endl;
  // A Loop To Ensure That The Numbers That Entered Untill = 0.
  while(num1 - num2 != 0)
  {
    // Player 1 Will Play.
    cout << name1 << " : ";
    cin >> num1 >> op >> num2; 
    if(!isdigit(num1) || !isdigit(num2)) 
    {
      cout << "Please Enter An Integer Number.." << endl;
      cout << " The Game End" << "\n";
      break;
    }    
    // I Make A Condition To Ensure That Result Never will Be Negative. 
    if(num2 > num1 || num1 > intnum)
    {
      cout << " You Shouldn't Enter A Number Greater Than The Given Integer Number.." << endl;
      // The System Will Ask Them To Enter Untill They Enter A Number Less Than Number 1 Or Integer Number.
        while(num2 > num1 || num1 > intnum)
      {
        cout << name1 << " : ";
        cin >> num1 >> op >> num2;
      }
    }
    // Now We Should Ensure That Number 2 Is A Square number.
    if(fmod(sqrt(num2),1) != 0) 
    {
      // The System Will Ask them To Enter Untill They Enter A Square Number.
      while(fmod(sqrt(num2),1) != 0)
      {
        cout << "*/*Oops You Should Enter Only A Square Number */*" << "\n";
        cout << name1 << " : ";
        cin >> num1 >> op >> num2; cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
      }
    }
    // At The End Of The Game The Player Who Construct 0 First He Is The Winner.
    if(num1 - num2 == 0 && num1 != num2)
    {
       cout << "** " << name1 <<  " Is Winner" << " **" << endl << " End The Game ";
       break;
    }

    // ============================================================== //

    // All What I Have Mention Above We Will Do The Same With Player 2.
    else 
   { 
    cout << name2 << " : ";
    cin >> num1 >> op >> num2;
     cout << num1 << '-' << num2 << " = " << num1 - num2 << "\n";
   }
   if(num2 > num1 || num1 > intnum)
    {
      cout << " You Shouldn't Enter A Number Greater Than The Given Integer Number.." << endl;
      while(num2 > num1 || num1 > intnum)
      {
        cout << name2 << " : ";
        cin >> num1 >> op >> num2;
      }
    }
     if(fmod(sqrt(num2),1) != 0) 
    {
      while(fmod(sqrt(num2),1) != 0)
      {
        cout << "*/*Oops You Should Enter Only A Square Number */*" << "\n";
        cout << name2 << " : ";
        cin >> num1 >> op >> num2;  cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
      }
    }
if(num1 - num2 == 0 && num1 != num2)
    {
      cout << "** " << name2 << " Win " << " **" << endl << " End The Game ";
      break;
    }
   
    
  }



  return 0;
}