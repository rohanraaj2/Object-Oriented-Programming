#include<iostream>


using namespace std;
class Vehicle
{
    protected:
    string regNo;
    int no_of_wheel;
    public:
    Vehicle(string reg = " ", int num_wheels = 0)
    {
        regNo = reg;
        no_of_wheel = num_wheels;
    }
    virtual void show() 
    {
        cout << " Reg. No.:" << regNo << ", No. of wheels: " << no_of_wheel << endl;
    }
};

class Truck : public Vehicle
{
    private:
    int maxWeight;
    public:
    Truck (string reg, int num_wheels, int weight)
    {
        regNo = reg;
        no_of_wheel = num_wheels;
        maxWeight = weight;
    }
    void show() 
    {
        cout << "This is a Truck, Max Weight: " << maxWeight;
        Vehicle :: show();
    }
};

int main(){
    int n, weight, wheels;
    string reg;
    Vehicle *ptr;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>reg>>wheels>>weight;
        ptr = new Truck(reg, wheels, weight);

        //notic the following call is polymorphic, hence show function must be virtual in Vehicle class.
        ptr->show();

        
        delete ptr;
    }    
}