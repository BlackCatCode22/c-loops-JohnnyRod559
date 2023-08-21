//StringsAndLoops.cpp
//John Rodriguez
//Aug 21, 2023


#include <iostream>
#include <string>

using namespace std;

int main()
{   cout << "\n Welcome to String and Loop practice!/n";

    string myTeststr = "The quick brown fox jumped over the lazy dog";

    cout << "\n\n" << endl << endl << myTeststr << endl << endl;

    // This is a comment.
    // Comment should come before the line of code they 'talk' about.

    // Use the find() function to find the substring box in myTeststr
   int myIndex =  myTeststr.find("fox");

   cout << "\n The index of fox is: " << myIndex << endl << endl;

   int atIndexFour = myTeststr.at(4);
   // Should see ASCII code for  'q'.

   cout << "\n\n this is at index four: " << atIndexFour << endl << endl;

   //size()
   cout << "\n size() is: " << myTeststr.size() << endl;
   //append(
    cout << "\n append() is: " << myTeststr.append("xyz") << endl;
    //length()
    cout << "\n length() is: " << myTeststr.length() << endl << endl;
    //clear

    //empty()
    if (myTeststr.empty()) {
        cout << "\n the string is empty";

    } else {
    cout << "\n the string is NOT empty" << endl << endl;
    }

    // substr()
    // find the five character starting at 8

    string mySubstring = myTeststr.substr(7,5);
    cout << "\n\n mySubStr(7,5) = " << mySubstring << endl << endl;

int number;
cout << "Number: ";
cin >> number;
   for ( int i = number; i < 10; i++){
    cout << "\n Hello, i is " << i << endl << endl;

   }








    return 0;
}
