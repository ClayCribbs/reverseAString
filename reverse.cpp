//
//
//  Reverse - A short program designed to reverse a string
//
//  Created by Clay Cribbs on 9/13/16.
// 
//

#include <iostream>
#include <string>

using namespace std;

///Method that reverses a string and prints the result
void reverseMe(string myString)
{
    //Variable used to swap character
    char swap;

    //Variable used to keep track of the back of the snake
    int lastVar = (((int) myString.length())-1);
    
    /// Loop that incremints the front and decriments the back
    for (int i = 0; i <= (myString.length()/2); i++, lastVar--)//runs for half the length (meets in the middle)
    {
        swap = myString[i]; // puts the front char into the swap variable
        myString[i] = myString[lastVar]; /// puts the back char into the front
        myString[lastVar] = swap; /// puts the original front char into the back
    }
    cout << "\nYour String Reversed: " << myString << "\n"; // prints result
}




///Main method
int main(int argc, const char * argv[]) {

    string myString; //Init and get a string from the user
    cout << "\nEnter a string to be reversed\n";
    getline(cin,myString);
    
    //reverse the string and print the result
    reverseMe(myString);
    
    string pause; // this is a dummy variable to pause until user keys something
    cin >> pause;
    
    return 0;
}
