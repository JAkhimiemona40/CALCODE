/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    bool(KeepGoing) = true;
    char again = 'Y';
    
    cout << "Welcome to the basic calculator" << endl;
    
    float num1 =0;
    cout << "Enter your first number" << endl;
    cin >> num1;
    
    float num2 = 0;
    cout << "Enter your second number" << endl;
    cin >> num2;
    
    char b = '%';
    cout << "Choose your operation" << endl;
    cin >> b;
    
    cout << "Your final answer is:" << endl;
    
    if (b == '+')
        cout << num1 + num2 << endl;
    else if (b == '-')
        cout << num1 - num2 << endl;
    else if (b == '*')
        cout << num1 * num2 << endl;
    else if (b == '/')
        cout << (float)num1 / num2 << endl;
    else if (b == '^')
        cout << pow(num1, num2) << endl; 
    
    string answer = " ";
    cout << "Would you like to calulcate more numbers? Y/N?" << endl;
    cin >> answer;
    
        if (answer == "Y")
            while(again == 'y' || again == 'Y')
            
        if (answer == "N")
            bool (KeepGoing) = false;
                cout << "have a nice day!" << endl;
}

