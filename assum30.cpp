Q=1
/*
#include <bits/stdc++.h>
using namespace std;
 
// Time Class
class Time {
    int hour;
    int mins;
 
public:
    // Default Constructor
    Time()
    {
        hour = 0;
        mins = 0;
    }
 
    // Parameterized Constructor
    Time(int t)
    {
        hour = t / 60;
        mins = t % 60;
    }
 
    // Function to print the value
    // of class variables
    void Display()
    {
        cout << "Time = " << hour
             << " hrs and "
             << mins << " mins\n";
    }
};
 
// Driver Code
int main()
{
    // Object of Time class
    Time T1;
    int dur = 95;
 
    // Conversion of int type to
    // class type
    T1 = dur;
    T1.Display();
 
    return 0;
}*/
Q=2
/*

// C++ program to illustrate the
// type-conversion
#include <bits/stdc++.h>
using namespace std;
 
// Time Class
class Time {
    int hour;
    int mins;
 
public:
    // Default Constructor
    Time()
    {
        hour = 0;
        mins = 0;
    }
 
    // Parameterized Constructor
    Time(int t)
    {
        hour = t / 60;
        mins = t % 60;
    }
 
    // Function to print the value
    // of class variables
    void Display()
    {
        cout << "Time = " << hour
             << " hrs and "
             << mins << " mins\n";
    }
};
 
// Driver Code
int main()
{
    // Object of Time class
    Time T1;
    int dur = 95;
 
    // Conversion of int type to
    // class type
    T1 = dur;
    T1.Display();
 
    return 0;
}*/
Q=3
/*

#include <bits/stdc++.h>
using namespace std;
 
// Source class, i.e
// class that will be converted to another class
class Class_type_one {
    string a = "GeeksforGeeks";
 
public:
    // Member function which returns
    // string type data
    string get_string()
    {
        return (a);
    }
 
    // Member function to display
    void display()
    {
        cout << a << endl;
    }
};
 
// Destination class, i.e
// Class type to which source class will be converted
class Class_type_two {
    string b;
 
public:
    // Operator overloading which accepts data
    // of the Destination class and
    // assigns those data to the source class
    // Here it is for the conversion of
    // Class_type_two to Class_type_one
    void operator=(Class_type_one a)
    {
        b = a.get_string();
    }
 
    // Member function for displaying
    // the data assigned to b.
    void display()
    {
        cout << b << endl;
    }
};
 
int main()
{
    // Creating object of class Class_type_one
    Class_type_one a;
 
    // Creating object of class Class_type_two
    Class_type_two b;
 
    // CLass type conversion
    // using operator overloading
    b = a;
 
    // Displaying data of object
    // of class Class_type_one
    a.display();
 
    // Displaying data of object
    // of class Class_type_two
    b.display();
 
    return 0;
}*/
Q=4
/*
include <bits/stdc++.h>
using namespace std;
 
// Source class, i.e
// class that will be converted to another class
class Class_type_one {
    string a = "GeeksforGeeks";
 
public:
    // Member function which returns
    // string type data
    string get_string()
    {
        return (a);
    }
 
    // Member function to display
    void display()
    {
        cout << a << endl;
    }
};
 
// Destination class, i.e
// Class type to which source class will be converted
class Class_type_two {
    string b;
 
public:
    // Operator overloading which accepts data
    // of the Destination class and
    // assigns those data to the source class
    // Here it is for the conversion of
    // Class_type_two to Class_type_one
    void operator=(Class_type_one a)
    {
        b = a.get_string();
    }
 
    // Member function for displaying
    // the data assigned to b.
    void display()
    {
        cout << b << endl;
    }
};
 
int main()
{
    // Creating object of class Class_type_one
    Class_type_one a;
 
    // Creating object of class Class_type_two
    Class_type_two b;
 
    // CLass type conversion
    // using operator overloading
    b = a;
 
    // Displaying data of object
    // of class Class_type_one
    a.display();
 
    // Displaying data of object
    // of class Class_type_two
    b.display();
 
    return 0;
}*/
Q=5
/*
#include <iostream>
using namespace std;
 
class student {
    int rno;
    char name[10];
    double fee;
 
public:
    student()
    {
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    }
 
    void display()
    {
        cout << endl << rno << "\t" << name << "\t" << fee;
    }
};
 
int main()
{
    student s; // constructor gets called automatically when
               // we create the object of the class
    s.display();
 
    return 0;
}*/
Q=6
/*

#include <iostream>
using namespace std;
 
class student {
    int rno;
    char name[10];
    double fee;
 
public:
    student()
    {
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    }
 
    void display()
    {
        cout << endl << rno << "\t" << name << "\t" << fee;
    }
};
 
int main()
{
    student s; // constructor gets called automatically when
               // we create the object of the class
    s.display();
 
    return 0;
}*/
Q=7
/*
 
#include <iostream>
using namespace std;
 
class student {
    int rno;
    char name[10];
    double fee;
 
public:
    student()
    {
        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    }
 
    void display()
    {
        cout << endl << rno << "\t" << name << "\t" << fee;
    }
};
 
int main()
{
    student s; // constructor gets called automatically when
               // we create the object of the class
    s.display();
 
    return 0;
}*/
Q=8
/*
#include <iostream>
#include <sstream>
using namespace std;
  
int main()
{
    string s = "12345";
  
    // object from the class stringstream
    stringstream geek(s);
  
    // The object has the value 12345 and stream
    // it to the integer x
    int x = 0;
    geek >> x;
  
    // Now the variable x holds the value 12345
    cout << "Value of x : " << x;
  
    return 0;
}*/
Q=9
/*

// C++ program to illustrate the
// type-conversion
#include <bits/stdc++.h>
using namespace std;
 
// Time Class
class Time {
    int hour;
    int mins;
 
public:
    // Default Constructor
    Time()
    {
        hour = 0;
        mins = 0;
    }
 
    // Parameterized Constructor
    Time(int t)
    {
        hour = t / 60;
        mins = t % 60;
    }
 
    // Function to print the value
    // of class variables
    void Display()
    {
        cout << "Time = " << hour
             << " hrs and "
             << mins << " mins\n";
    }
};
 
// Driver Code
int main()
{
    // Object of Time class
    Time T1;
    int dur = 95;
 
    // Conversion of int type to
    // class type
    T1 = dur;
    T1.Display();
 
    return 0;
}*/
Q=10
/*
*/