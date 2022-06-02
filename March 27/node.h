using namespace std;

template<typename T>

class node
{
    public:
        int data;
        node<T> *next;  // next pointer kis type ke data ko point karega
    
    // constructor
    node (T d)
    {
       data = d;
       next = NULL; 
    }
};
