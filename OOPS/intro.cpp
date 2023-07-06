#include <iostream>
using namespace std;

class Hero
{
    // propeties
private:
    int health;

public:
    char level;

    Hero() {
        cout<<" default constructor call ho gya"<<endl;
    }

    //parmeterised constructor
    Hero(int health) {
        cout<<"this -> "<<this<<endl;
      this->  health=health;
    }

    Hero(int health,char level)
    {
     // cout << "this -> " << this << endl;
      this->health = health;
      this->level=level;
    }

    int getHealth()
    {
        return health;
    }
    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setlevel(char ch)
    {
        level = ch;
    }
    void print(){
        cout<<health<<endl;
        cout<<level<<endl;
    }

    //copy constructor
    Hero(Hero& temp) {   //pass by reference hoga na ki pass by value, nhi to infinite loop me hi fas jayega
    cout<<"copy constructor called"<<endl;
        this-> health=temp.health;
        this->level=temp.level;
    }
    ~Hero();
};
 
int main()
{
    
    Hero ram(42,'B');
    ram.print();

    //copy constructor
    Hero sita(ram);
    sita.print();
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        // Hero raju(432);
    // cout<<"address of raju "<<&raju<<endl;

/* 
    // static creation of object
    Hero Atul;
    cout << " size of Atul is " << sizeof(Atul) << endl;
    Atul.setHealth(90);
    Atul.setlevel('C');
    cout<<"health is "<<Atul.getHealth()<<endl;
    cout<<"Level is "<<Atul.getLevel()<<endl;

    // dynamically
    Zero *Aman = new Zero;
    Aman->setHealth(67);
    Aman->setlevel('M');
    cout << "health is " << (*Aman).getHealth() << endl;//dereferance krke
    cout << "Level is " << (*Aman).getLevel() << endl;

    cout << "health is " << Aman->getHealth() << endl;//ya arrow use krke
    cout << "Level is " << Aman->getLevel() << endl;
  
    //accessing with dot operator
    cout<<"Atul health "<<Atul.getHealth()<<endl;//getter
   // Atul.health=48;
    Atul.setHealth(53); //setter
    Atul.level='A';
    cout << "Atul health " << Atul.getHealth() << endl;

    //cout<<"heath is "<<Atul.health<<endl;
    cout<<"Level is "<<Atul.level<<endl;

    // cout<<"size : "<<sizeof(Atul)<<endl; ager class me define nhi hoga to size 1 dega for implementation
    */
}