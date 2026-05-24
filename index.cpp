#include <iostream>     //------header file
#include  <conio.h>     //------header file
using namespace std;    //-----library

//function
main()
{
    cout<<"Hello World";   //------output statement
    return 0;           //------return statement
}


// variable......
// area jismai hum koi bhi value store kar sakty hain usko variable kehty hain. 
// variable ko declare karna parta hai. variable ko declare karne ke liye humein uska data type specify karna parta hai.
//  data type se compiler ko pata chalta hai ke variable mein kis type ki value store hogi. 
// variable ko declare karne ke baad hum usmein value assign kar sakty hain. 
// variable ki value ko change bhi kar sakty hain. variable ka naam unique hona chahiye aur usmein space nahi hona chahiye.
//  variable ka naam aise hona chahiye ke usse samajh mein aaye ke usmein kis type ki value store hogi.



main()
{
    1,2,3,4,5;   //integer variable
    1.1,2.2,3.3; //float variable
    'a','b','c'; //character variable
    "Hello World"; //string variable
    0,1; //boolean variable
}


// inko store karnay k lie hum variable banatay hain




main()
{
    int short long a=10; //integer variable
    float double   b=1.1; //float variable
    char c='a'; //character variable
    string d="Hello World"; //string variable
    bool e=1; //boolean variable

    // to print the value of variable
    cout<<a; //output: 10

    return 0;
}


// Arithmetic operators

main()
{
  // +, -, *, /, % are arithmetic operators
  //  ()       1st           precedence of operators
  //  *  /  %   2nd        precedence of operators
  //  +  -       3rd           precedence of operators


    
    int a =10;
    int b =20;
    cout<<a+b<<endl; //output: 30
    cout<<a-b <<endl; //output: -10     // endl is use to skip a line
    cout<<a*b <<endl; //output: 200

    return 0;

}

//-------------------------------------------------
//------------LECTURE4 ------------------------------------
//-------------------------------------------------



//problem 1: Write a program to calculate the age of students.

main()
{
    int age1 ,age2 , age3 , age4 , age5, age6 , age7 , age8 , age9 , age10 ; // variable declaration
    float avg;
    cout<<"Enter the age of student 1: ";
    cin>>age1;            // cin user say leta hay
    cout<<"\n Enter the age of student 2: ";
    cin>>age2;      
    cout<<"\n Enter the age of student 3: ";
    cin>>age3;          
    cout<<"\n Enter the age of student 4: ";
    cin>>age4;
    cout<<"\n Enter the age of student 5: ";
    cin>>age5;
    cout<<"\n Enter the age of student 6: ";
    cin>>age6;
    cout<<"\n Enter the age of student 7: ";
    cin>>age7;
    cout<<"\n Enter the age of student 8: ";
    cin>>age8;
    cout<<"\n Enter the age of student 9: ";
    cin>>age9;
    cout<<"\n Enter the age of student 10: ";
    cin>>age10;
    avg = (age1 + age2 + age3 + age4 + age5 + age6 + age7 + age8 + age9 + age10) / 10;
cout<<"\n\n The average age of students is: "<<avg; // output statement
getch(); // use to hold the output screen

    return 0;
}


// problem 2: Write a program to inverse numbers.
main()
{
    7845 % 10; // output: 5
    7845 / 10; // output: 784

    int a;
    cout<<"\n Enter 4 digit number: ";
    cin>>a;
    cout<<"\n 4 digit is ; " ;
    cout<<a%10 <<","; // output: 5
    a = a / 10; // output: 784
    cout<<a%10 <<","; // output: 4
    a = a / 10; // output: 78
    cout<<a%10 <<","; // output: 8
    a = a / 10; // output: 7
    cout<<a%10; // output: 7
    getch(); // use to hold the output screen
    return 0;


}





//-------------------------------------------------
//------------LECTURE5 ------------------------------------
//-------------------------------------------------



//arithmetic operators             + , - , * , / , % ,++ , -- 
//assignment operators               = , += , -= , *= , /= , %=
//comparison operators                == , != , > , < , >= , <=
//logical operators                   && , || , !




//-------------------------------------------------
//------------LECTURE8 ------------------------------------
//-------------------------------------------------


//switch  statement , break statement 

int number=5;
switch (number)
{
    case 1:
        cout<<"Number is 1";
        break;
    case 2:
        cout<<"Number is 2";
        break;
    case 3:
        cout<<"Number is 3";
        break;
    case 4:
        cout<<"Number is 4";
        break;
    case 5:
        cout<<"Number is 5";
        break;
    
    default:
        cout<<"invalid number";
      
}
getch();




// continue statement

main()
{
    for (int i=1; i<=5; i++)
    {
       cout<<"hi"; 
       continue; // output: hi hi hi hi hi
       cout<<"hello"; // this statement will not execute because of continue statement
    }
}



//goto statement


main()
{
   p:     //this is a label
       cout<<"hi"; 
      goto p;      // p will repeat the statement hi infinitely
      getch(); 
      return 0;
}





//-------------------------------------------------
//------------LECTURE9 ------------------------------------
//-------------------------------------------------

//functions

//there are two types of functions in c++
//functions which return a value
//functions which do not return a value




//structure of a function 
return_type function_name (argument-list)
{
   //code
}



// function declaration:-
//        bus declare kar k chordo

int add(int a); // function declaration





// function definition:-
//           pura func define ho
int add(int a) 
{
    return a + 10; 
}


























