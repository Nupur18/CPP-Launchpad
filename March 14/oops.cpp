#include<iostream>
#include<string>
using namespace std;

// blueprint - takes no memeory
class car
{
    // class ke bahar access nhi kar sakte hai
    private:
        int price;

    // class ke bahar access kar sakte hai
    public:
        // char name[100];     // static memory allocation

        char *name;
        int seats;
        int model_no;
        const int tyres;    // constant data member --> isko initialise karte hai initialisation list se
        static int count;

// constructor object banata hai

        // default constructor override
        car() : tyres(4)
        {
            cout<<"In default constructor"<<endl;
            name = NULL;
            count++;
        }

        // parametrized constructor
        car(char *n, int s, int m, int p) : tyres(4), seats(s), model_no(m), price(p)
        {
            cout<<"In parametrized constructor"<<endl;
            name = new char[strlen(n) + 1];     // +1 is for null character
            strcpy(name, n);    // or name = n
            // seats = s;
            // model_no = m;
            // price = p;
            count++;
        }
        
        car(char *name, int seats, int model_no, int price) : tyres(4)
        {
            cout<<"In parametrized constructor"<<endl;
            this -> name = new char[strlen(name) + 1];     // +1 is for null character
            strcpy(this -> name, name);    
            this -> seats = seats;  // this reflects jo mai object bana rhi hu, this keyword jiske sath hai matlab vo ban rha hai
            this -> model_no = model_no;
            this -> price = price;
            count++;
        }

        // copy constructor
        car(car &x) : tyres(4) // in x we have C
        {
            cout<<"In copy constructor"<<endl;
            // name = x.name;
            name = new char[strlen(x.name) + 1];
            strcpy(name, x.name);
            price = x.price;
            seats = x.seats;
            model_no = x.model_no;
            count++;
        }

        // copy assignment constructor
        void operator=(car x)   // or car &x
        {
            cout<<"In copy assignment constructor"<<endl;
            // name = x.name;
            name = new char[strlen(x.name) + 1];
            strcpy(name, x.name);
            price = x.price;
            seats = x.seats;
            model_no = x.model_no;
        }

        // memeber functions 
        void print() const // constant function - function me kuch(koi value) change nhi ho rhi hoti to usko constant kar sakte hai
        {
            cout<<"Name of car is "<<name<<endl;
            cout<<"Seats of car is "<<seats<<endl;
            cout<<"Model no of car is "<<model_no<<endl;
            cout<<"Price of car is "<<price<<endl;
        }

        void update(char n[])
        {
            if (name != NULL)
            {
                delete []name;
                name = NULL;
            }
            
            name = new char[strlen(n) + 1];
            strcpy(name, n);
        }

        void setPrice(int p)    // setter
        {
            if (p<200)
            {
                price = 200;
            }
            else
            {
                price = p;
            }
        }

        int getValue() const     // getter
        {
            return price;
        }

        // dsetructor
        ~car()
        {
            cout<<"Destructor for car "<<name<<" called"<<endl;
            delete[] name;
            count--;
        }
};

int car::count = 0;

int main()
{   
    // datatype variable_name;

    // whenever an object is created, a constructor is called
    car A;  // A is object of class car

    // A.name = "BMW";
    // strcpy(A.name, "BMW");  // null is inaccessible
    A.update("BMW");
    A.seats = 4;
    A.model_no = 2020;
    // A.price = 50000;
    A.setPrice(65000);     // setter
    A.setPrice(-2000);
    A.update("qwerty");
    // cout<<"Name of car is "<<A.name<<endl;
    // cout<<"Seats of car is "<<A.seats<<endl;
    // cout<<"Model no of car is "<<A.model_no<<endl;
    // cout<<"Price of car is "<<A.price<<endl;
    // or
    A.print();  // jo object call karega uska print hoga
    cout<<"Number of tyres is "<<A.tyres<<endl;
    cout<<endl;

    car B;
    // strcpy(B.name, "Audi");
    B.update("Audi");
    B.seats = 4;
    B.model_no = 2020;
    // B.price = 70000;
    B.setPrice(75000);
    // cout<<"Name of car is "<<B.name<<endl;
    // cout<<"Seats of car is "<<B.seats<<endl;
    // cout<<"Model no of car is "<<B.model_no<<endl;
    // cout<<"Price of car is "<<B.price<<endl;
    // or
    B.print();

    // to print private price in main()
    // cout<<"Price of car is "<<B.getValue()<<endl;    getter
    cout<<endl;

    car C("duster", 8, 2021, 60000);
    // cout<<"Name of car is "<<C.name<<endl;
    // cout<<"Seats of car is "<<C.seats<<endl;
    // cout<<"Model no of car is "<<C.model_no<<endl;
    // cout<<"Price of car is "<<C.price<<endl;
    C.print();
    cout<<endl;

    car D = C;      // or car D(C)   <-- here constructor called is copy constructor
    D.print();
    cout<<endl;


    // deep and shallow copy
    D.name[0] = 'M';
    C.print();
    cout<<endl;
    D.print();
    cout<<endl;

    // copy assignment constructor
    car E;
    E = A;     // operator overloading
    // this equal to operator is defined for primitive datatypes 
    E.print();
    cout<<endl<<"Total number of cars are "<<car::count<<endl;
    return 0;
}
// agar mujhe class ke bahar private members ko karna hai then I will use functions of that class

// static se ek baar initialise hota hai, dubara nhi hota