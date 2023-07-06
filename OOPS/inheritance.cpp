#include<iostream>
using namespace std;

class Human {
   public:
        int height=6;
        int weight=98;
        int age=32;

        public:
        int getAge(){
            return this->age;
        } 
        void setweight(int w){
            this->weight =w;
        }     
};

class male : public Human {
    public:
    string color="red";

    void sleep(){
        cout<<"male is sleeping"<<endl;
    }
};
int main() {

    male object;
    cout<<object.age<<endl;
    cout << object.weight << endl;
    cout << object.height << endl;

    cout << object.color << endl;
}