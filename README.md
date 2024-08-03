# Condtional statements 
# Experiment 5: -To study and implement C++ decision making statements

## Aim
To learn how to implement decision making statements in C++ programming language

## Theory 
Decision-making in C++ helps to write decision-driven statements and execute a particular set of code based on certain conditions.

C++ has different types of decision making statements like
1. if
2. else if
3. else
4. switch
5. default

### if statement

if statement is the most simple decision-making statement.
It is used to decide whether a certain statement or block of statements will be executed or not executed based on a certain type of condition.

#### Syntax: -
if(condition)
{
   // will execute the code here depending on if the condition is satisfied 
}

### else if statement

An if-else statement controls conditional branching. Statements in the if-branch are executed only if the condition evaluates to a nonzero value (or true ). 
If the value of condition is nonzero, the following statement gets executed, and the statement following the optional else gets skipped.

#### Syntax: - 

if(condition_a)
{
  // will execute the code depending whether the condtion_a is satisfied 
}
else if(condition_b)
{
  // will excecute the code depending whether the condtion-a is not satisfied and condition_b is satsified
}
else
{
  // will execute the code if both t e condtions are not satisfied 
}

### switch and default statements 

Switch case is basically an optimised version of multiple else if statements with a difference of approximately 10^-3% faster speed meaning that it does not really matter if a person is using else if or switch and if micro management is required then try using looup or hash table in the codes.

Switch case has better readabilty, can be typed faster, easier to debug and harder to make mistakes compared to multiple else if statements.

default st

#### syntax:- 

switch (expression)
{
  case value_1;
  // statement 1 
  break;

  case value_2:
  //statement 2
  break;

  defalut:
  //default_statements
  break;
}

## Code 
~~~
#include <iostream>
using namespace std;

int main() {
    int s[100][100];
    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            s[i][j] = i * 100 + j;
        }
    }

    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }


    int x = 0;
    cout << "While loop" << endl;
    while (x < 10) {
        cout << x << endl;
        x++;
    }

    int y = 0;
    cout << "Do-while loop" << endl;
    do {
        y++;
        cout << y << endl;
    } while (y < 4);


    int a = 0, b = 0;
    cout << "Nested for loop" << endl;
    for (int i = 0; i < 4; i++) {
        a++;
        for (int j = 0; j < 4; j++) {
            b++;
            cout << s[a][b] << " ";
        }
        cout << endl;
    }

    int k=0,l=0;
    while(k<5)
    {
        while(l<5)
        {
            k++;
            l++;
            cout<<k<<endl;
            cout<<l<<endl;
        }
    }

    //pattern

    for(int i = 0;i<=5;i++)
    {
        for(int j = 1;j<= 5-i;j++)
        {
            cout<<" ";
        }
        for(int k = 1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

        // for inside while

    int q = 0;

    while(q<5)
        {
            for(int i = 0;i<5;i++)
                {
                    cout<<"Hello World"<<endl; 
                }
                q++;
        }
        // this will produce 25 hello world commands 5*5

    for(int i =0;i<10;i++)
    {
        while(i<5)
        {
            cout<<"World hello"<<endl;
            i++; //prints world hello 5 times 
        }
    }    
    return 0;
}

~~~
