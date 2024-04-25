#include <iostream>
#include <cmath>

using namespace std;

void exGPT(int i);
void myBetterCode(int i);


int main()
{
    int i;
    
    i = -250;
    
    unsigned b = i;
    
    cout << "I converted -250 and got: " << b << endl;
    
    cout << "\nChatGPT showed me this way: " << endl;
    exGPT(i);


    cout << "\nI found an easier way and it works as follows: ";
    myBetterCode(i);
    
    return 0;
}


void myBetterCode(int i){
    
    int checkingAbsolute;
    checkingAbsolute = abs(i);
    cout << checkingAbsolute;
    cout << "\nAlthough i dont know if its actually better time complexity but i think its more readable.";
}



void exGPT(int i)
{

    
    unsigned b = (i < 0) ? -i : i; // Store the absolute value of i in b
    
    int original_i = i; // Store the original value of i
    
    cout << "Original i: " << original_i;
    cout << "\nAbsolute value stored in b: " << b << endl;

    
}
