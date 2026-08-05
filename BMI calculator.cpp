#include <iostream>
#include <cmath>
using namespace std;

class BMI {
private:
    float height;
    float weight;
    float bmi;

public:
    void getdata(){
        cout<<"Enter your height in centimeters: "<<endl;
        cin>>height;


        cout<<"Enter your weight in kilograms: "<<endl;
        cin>>weight;

    }
    void calculateBMI(){
        float new_height = height / 100;

        bmi = weight / (new_height * new_height);

    }
    void displayBMI(){
        cout<<"BMI = "<<bmi<<"kg/m^2"<<endl;

        if (bmi < 18.5)
            cout<<"You are underweight"<<endl;

        if (bmi >= 18.5 && bmi< 25)
            cout<<"Your weight is normal"<<endl;

        if (bmi >= 25 && bmi< 30)
            cout<<"You are overweight"<<endl;

        if (bmi >= 30 && bmi< 40)
            cout<<"You are obese"<<endl;

        if (bmi > 40)
            cout<<"You are morbidly obese";
    }

};

int main()
{

    BMI person;
    person.getdata();
    person.calculateBMI();
    person.displayBMI();




    return 0;





}
