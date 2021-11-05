#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char arr[] = "123493456...%$'''56$736473..'63463";
    char *ptr = strtok(arr, ".%$'");    //arr starting address hota hai 
    // set of delimiters is set of separate characters
    // cout<<ptr<<endl;

    // ptr = strtok(NULL, ".%$'"); // null batata hai vo address jaha se kaam karna hai 
    // cout<<ptr<<endl;

    // ptr = strtok(NULL, ".%$'"); 
    // cout<<ptr<<endl;

    // we can also use a while loop for doing the above process
    while (ptr != NULL) // end of string tak pahucha ya nhi 
    {
        cout<<ptr<<endl;
        ptr = strtok(NULL, ".%$'"); 
        // pehle 1 se 6 tak print kia, sare delimiters ignore karke NULL pass karne se sare 
    }
    
    return 0;
}