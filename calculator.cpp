#include <iostream>
 using namespace std;

 int main()
 {
     double num1,num2;
     char op;

     cout <<"Enter a number: "<<endl;
     cin >> num1;

     cout << "Choose an operator (+,-,*,/)"<<endl;
     cin >> op;

     cout << "Enter second number: "<<endl;
     cin >> num2;

     switch(op){
     case '+':
        cout<< "Result: " <<num1 + num2;
        break;
     case '-':
        cout<< "Result: "<<num1 - num2;
        break;
     case '*':
        cout<< "Result: "<<num1 * num2;
        break;
     case '/':
        if (num2 != 0)
            cout<< "Result: "<<num1 / num2;

        else cout << "Cannot be divided by zero"<<endl;
        break;
     default:
        cout << "Invalid operator";

     int secret = 1;
     int guess;


     while (secret != guess){
        cout <<"Guess a number from 1 - 10"<<endl;
        cin >> guess;
        if (secret == guess)
            cout<<"You guessed right!!!"<<endl;
        else cout<<"You guessed wrong. Try again"<<endl;



     }




     return 0;



}     }
