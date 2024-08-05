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

default statements are like elese staement where in if the all cases are false then the block of the code will be executed. 

#### syntax:- 

switch (expression)

{

  case value_1;
  // statement 1 
  break;

  case value_2:
  //statement 2
  break;

  default:
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
## Output of the code

![](https://github.com/Sundar13905/Condtional_statements-loops/blob/main/Exp5..png)

## Conclusion
We learnt how to implement decision making statements like if, else if, switch in C++ programming language 

========================================================================================================================================================================

# Experiment 6: - To study and implement C++ decision making statements Loops

## Aim
To learn how to implement decision making statement loops like for, while and do while in C++

## Theory
Decision making loops are useful to execute a block of code repeatedly till a certain number of times ranging from 1 to infinte depening on the condtion or iteraions 

In this experiment we learn about 3 decsion making statement loops which are as foolows: -
1. for() loop
2. while() loop
3. do while() loop

### 1. for() loop

A for loop is a control flow statement that executes a block of code repeatedly for a specified number of iterations. It continues to run the code until a predefined condition is met.

#### Syntax: -
for(initalization, test condition , counter)

{

// this code will be executed will be iterated depending on the condition 

}


### 2. while() loop

A while loop is a control flow statement that repeatedly executes a block of code as long as a specified condition remains true. It continues to run the code until the condition evaluates to false.

#### Syntax 
while(condition)

{

// code will be executed till the condition is false

}

### do while() loop

A do-while loop is a control flow statement that executes a block of code at least once, and then repeatedly executes the code as long as a specified condition remains true. The condition is evaluated after the execution of the code block, ensuring that the code runs at least one time.

#### Syntax 

do

{

\\ code will be executed once and then the code will run till while condtion is false

}

while(condition)


## Code: -

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

## Code Output: - 

![](https://github.com/Sundar13905/Condtional_statements-loops/blob/main/Exp_5_output.png) ![](https://github.com/Sundar13905/Condtional_statements-loops/blob/main/Exp_5_out_2.png)

## Conclusion
In this experiment we learnt how to implement all the type of decision making statement loops like for, while and do while in C++ programming language
