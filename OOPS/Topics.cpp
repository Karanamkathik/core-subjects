/*
  -- class and object
  -- constructor and destruter
  -- Abstraction
  -- Encapsulation
  -- Inheritance
  -- Polymorphism

*/


/*
     OOP's is  object orieanted programming .
     it is a programming pradigim that uses objects to model real world problems.
     Normal procedual programming uses the functions .
     oops involes in creating objects that contains data and functions
*/

#include <iostream>
using namespace std;

class Car
{
public:
  string brand;
  string owner;
}; // ; is compulsory to tell compiler that class  decleration is completed.

int main()
{
  Car myCar;
  myCar.brand = "Toyota";
  myCar.owner = "karthik";
  return 0;
}

// class  --

// objct --

// access modiffires --

/*  constructors  --A constructor is aspecial method that is automatically called when a object is inisiated.
                  -- it has same name as class.
                  -- it has no return type.
*/


//  --without constructure
#include <iostream>
#include<unordered_map>
using namespace std;

class Student{
public:
  string name;
  int rollno;
  string standard;
  unordered_map<string, int> marks;
};
int main(){
  Student s1;
  s1.name = "karthik";
  s1.rollno = 151;
  s1.standard = "10th";
  s1.marks["maths"] = 90;
  s1.marks["science"] = 80;

  /*--in above we inisiated wa object s1 and assign values to the class.
    --but this assigning will make code repeat if we insitade a another object .
    --to avoid this we write a constructor in class itself to invoke its vaules while objecvt inisiating.
  */

  return 0;
}

//with counstructure

#include<iostream>
#include<unordered_map>
using namespace std;

class Student{
  public:
  string Name;
  int Rollno;
  string Standard;
  unordered_map<string, int> marks;

  Student(string name, int roll,string standard){
        Name=name;
        Rollno=roll;
        Standard=standard;
  }
};

int main(){
  Student s1("Karthik", 151, "10th");
  s1.marks["maths"]=90;
  s1.marks["science"]=80;

  Student s2("naveen", 96,"5th");

  /*--because of the student consturucture we able give object properties while we initiating .
    --it make code  not to repeat
  */

  return 0;
}

/* Types of Constructors:
Default Constructor: Takes no parameters and initializes members with default values.

Parameterized Constructor: Takes arguments to initialize members with specific values.

Copy Constructor: Creates a new object by copying another existing object.
*/


/* 
   methods--(member functions)
   --methods are the functions which are defined inside the class to operate on the data members.
   -- ca be with any name.
   -- methods are used to perform some specific task.
*/ 


     

//