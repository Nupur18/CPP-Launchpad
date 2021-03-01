#include<iostream> //header file (iostream defines cin, cout, etc.)
using namespace std; //we are using std(standard) namespace
//there are many namespaces. 
//std(standard) namespace is used here which contains names of keywords used in our program. 
//using namespace std; includes namespace std in our file.
int main() //starting point of our program 
{
    cout<<"Hello World I am new to CB."<<"\n"; //semicolon is must 
    cout<<"I am 4th year student."<<"\n";
    cout<<"Hello World I am new to CB."<<"\n"<<"I am 4th year student."<<"\n"; //this is called nesting
    cout<<200<<"\n";
    cout<<"Coding Blocks"<<endl;
    cout<<5788<<"\n";
    cout<<200<<"\n"<<5788<<"\n";
    cout<<'A'<<"\n"; //single quotes are used to print a character (double quotes can also be used). 
    //double quotes are used to print a string.
    cout<<"Hello World I am new to CB."<<"\n"<<"I am 4th year student."<<"\n"<<"This is a pen.";
    return 0; //exit, pure program ko end kardo
}