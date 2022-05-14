#include<iostream>
using namespace std;

class cars
{
private:
    string company_name;
    string model_name;
    string fuel_type;
    float mileage;
    double price;
    
public:
    // Default Constructor
    cars()
    {
        cout <<"Default Constructor Called"<< endl;
        company_name = "toyota";
    }
    // Parameterized Constructor
    cars(string cname,string mname, string ftype, float m, double p)
    {
        cout <<"Parameterized Constructor Called"<< endl;
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }
    // Copy Constructor
    cars(cars &obj) // same class with the address of the object(car1) whose value we will copy.
    {
        cout <<"Copy Constructor Called"<< endl; // this copy constructor is for car3
        company_name = obj.company_name; // so (car3's)company_name = obj(car1's).company_name 
        model_name = obj.model_name; //        (car3's)model_name = obj(car1's).model_name 
        fuel_type = obj.fuel_type; //          (car3's)fuel_type = obj(car1's).fuel_type
        mileage = obj.mileage; //              (car3's)mileage = obj(car1's).mileage
        price = obj.price; //                  (car3's)price = obj(car1's).price
    }
    void set_data(string cname, string mname, string ftype, float m, double p)
    {
        company_name = cname;
        model_name = mname;
        fuel_type = ftype;
        mileage = m;
        price = p;
    }
    void display_data()
    {
        cout <<"Car Properties"<< endl;
        cout <<"Car Company Name - "<< company_name << endl;
        cout <<"Car Model Name - "<< model_name << endl;
        cout <<"Car Fuel Type - "<< fuel_type << endl;
        cout <<"Car Mileage - "<< mileage << endl;
        cout <<"Car Price - "<< price << endl << endl;
    }
    // destructor
    ~cars() // except you have pointer variable in your class for others default destructor is called
    {       // no need to write for this type class
        cout <<"Destructor Called"<< endl; // for 3 object destructor will be called 3 times
    }
};
int main() 
{
    cars car1, car2("corola", "fortuner", "diesel", 16.7, 123456);
    car1.set_data("toyota", "altis", "petrol", 15.6, 15000);
    car1.display_data();
    car2.display_data();
    cars car3 = car1;
    car3.display_data();
	return 0;
}
