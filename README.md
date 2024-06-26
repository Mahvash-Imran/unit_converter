# unit_converter
Our unit converter project offers a user-friendly interface for accurate bidirectional conversion of various units. 
Catering to the needs of students, professionals in engineering, architecture, science, finance, as well as educators and the general public,
it provides a convenient tool for seamless conversion across different disciplines.

#include<iostream>
#include<cmath>
#include<string>

using namespace std;

namespace Length_converter{

class unitconverter{
    public:
    virtual double convert(double value,int exponent) const = 0;
};

class prefixToMeter: public unitconverter{
    public:
    prefixToMeter() {};
    double convert(double value, int exponent) const override {
        return value*pow(10,exponent);
    }

};

class MeterToPrefix: public unitconverter{
    public:
    MeterToPrefix(){};
    double convert(double meter, int exponent) const override {
        return meter/pow(10,exponent);
    }

};
}

namespace Mass_converter{

class unitconverter{
    public:
    virtual double convert(double value,int exponent)const;
};

class prefixToKilograms: public unitconverter{
    public:
    double convert(double value, int exponent) const override {
        return value*pow(10,exponent);
    }

};

class KilogramsToPrefix: public unitconverter{
    public:
    double convert(double kg, int exponent) const override {
        return kg/pow(10,exponent);
    }

};
}

namespace Time_converter{

class unitconverter{
    public:
    virtual double convert(double value,int exponent) const = 0;
};

class prefixTosecond: public unitconverter{
    public:
    double convert(double value, int exponent) const override {
        return value*pow(10,exponent);
    }

};

class secondToPrefix: public unitconverter{
    public:
    double convert(double sec, int exponent) const override {
        return sec/pow(10,exponent);
    }

};
}

namespace Temperature_converter{

class unitconverter{
    public:
    virtual double convert(double value) const = 0;
};

class CelsiusToKelvin: public unitconverter{
    public:
    double convert(double c) const override {
        return c+273.15;
    }

};

class KelvinToCelsius: public unitconverter{
    public:
    double convert(double k) const override {
        return k-273.15;
    }

};

class FahrenheitToKelvin: public unitconverter{
    public:
    double convert(double f) const override {
        return (f-32)*(5/9)+273.15;
    }

};

class KelvinToFahrenheit: public unitconverter{
    public:
    double convert(double k) const override {
        return (k-273.15)*(9/5)+32;
    }

};

class CelsiusToFahrenheit: public unitconverter{
    public:
    double convert(double c) const override {
        return c*(9/5)+32;
    }

};

class FahrenheitToCelsius: public unitconverter{
    public:
    double convert(double f) const override {
        return (f-32)*(5/9);
    }

};
}

namespace ElectricCurrent_converter{

class unitconverter{
    public:
    virtual double convert(double value,int exponent) const = 0;
};

class prefixToAmpere: public unitconverter{
    public:
    double convert(double value, int exponent) const override {
        return value*pow(10,exponent);
    }

};

class AmpereToPrefix: public unitconverter{
    public:
    double convert(double Ampere, int exponent) const override {
        return Ampere/pow(10,exponent);
    }

};
}

namespace AmountofSubstance_converter{

class unitconverter{
    public:
    virtual double convert(double value,int exponent) const = 0;
};

class prefixTomol: public unitconverter{
    public:
    double convert(double value, int exponent) const override {
        return value*pow(10,exponent);
    }

};

class molToPrefix: public unitconverter{
    public:
    double convert(double mol, int exponent) const override {
        return mol/pow(10,exponent);
    }

};
}

namespace LuminousIntensity_converter{

class unitconverter{
    public:
    virtual double convert(double value,int angle) const = 0;
};

class LumenToCandela: public unitconverter{
    public:
    double convert(double l, int angle) const override {
        return l*angle;
    }

};

class CandelaToLumen: public unitconverter{
    public:
    double convert(double cd, int angle) const override {
        return cd/angle;
    }

};
}

//using namespace //

namespace mks{
    
class length {
public:
    float feet;
    float inches;
    float yards;

    void feetoinch() {
        std::cout << "Enter value in feet:" << endl;
        std::cin >> feet;
        float p = feet * 12;
        std::cout << feet << " feet is " << p << " inches" << endl;
    }

    void inchtofeet() {
        std::cout << "Enter value in inches :" << endl;
        std::cin >> inches;
        float p = inches / 12.0;
        std::cout << inches << " inches is " << p << " feet" << endl;
    }

    void inchtoyards() {
        std::cout << "Enter value in inches:" << endl;
        std::cin >> inches;
        float p = inches / 36.0; 
        std::cout << inches << " inches is " << p << " yards" << endl;
    }

    void yardstoinch() {
        std::cout << "Enter value in yards :" << endl;
        std::cin >> yards;
        float p = yards * 36; 
        std::cout << yards << " yards is " << p << " inches" << endl;
    }

    void yardstofoot() {
        std::cout << "Enter value in yards :" << endl;
        std::cin >> yards;
        float p = yards * 3; 
        std::cout << yards << " yards is " << p << " foot" << endl;
    }

    void feettoyards() {
        std::cout << "Enter value in feet :" << endl;
        std::cin >>feet;
        float p = feet / 3.0;
        std::cout << feet << " feet is " << p << " yards" << endl;
    }
};

class timee{
    public:
    float secs;
    double hours;
    double mins;

     void sectomin(float x){
        std::cout<<"Enter value in seconds :"<<endl;
        std::cin>>x;
        float p = x * (1/60);
        std::cout<<x <<" seconds is  " <<p <<" minutes"<<endl;
     }

        void mintosec(float x){
            std::cout<<"Enter value in minutes :";
        std::cin>>x;
        float p = x * 60;
        std::cout<<x <<" minutes is " <<p <<" seconds"<<endl;
        }

          void sectohr(float x){
            std::cout<<"Enter value in seconds :";
        std::cin>>x;
        float p = x * (1/3600);
        std::cout<<x <<" seconds is  " <<p <<" hours"<<endl;
          }

            void hrtosec(float x){
                std::cout<<"Enter value in hours :"<<endl;
        std::cin>>x;
        float p = x * 3600;
        std::cout<<x <<" hours is  " <<p <<"seconds"<<endl;
          }

          void mintohr(float x){
            std::cout<<"Enter value in minutes :"<<endl;
        std::cin>>x;
        float p = x * (1/60);
         std::cout<<x <<" minutes is  " <<p <<"hours"<<endl;
          }

     void hrtomin(float x){ 
        std::cout<<"Enter value in hours :"<<endl;
        std::cin>>x;
        float p = x * 60;
        std::cout<<x <<" hours is  " <<p <<"minutes"<<endl;
     }

   

};

class mass{
    public:
   float ounce;
    float ton;
    float pound;

    void pound_to_ounce(float x){
        std::cout<<"Enter value in pounds :"<<endl;
        std::cin>>x;
        float p = x * 16;
        std::cout<<x <<" pounds is " <<p <<" ounces"<<endl;

          }
           void ounce_to_pound(float x){
        std::cout<<"Enter value in ounce :"<<endl;
        std::cin>>x;
        float p = x * (1/16);
        std::cout<<x <<" ounces is " <<p <<" pounds"<<endl;

          }
          void pound_to_ton(float x){
            std::cout<<"Enter value in pound :"<<endl;
        
        std::cin>>x;
        float p = x * (1/2000);
         std::cout<<x <<" pounds is " <<p <<" tonnes "<<endl;

          }
           void ton_to_pound(float x){
        std::cout<<"Enter value in tonnes :"<<endl;
        std::cin>>x;
        float p = x * (2000);
         std::cout<<x <<" tonnes is " <<p <<" pounds"<<endl;

          }
    void ton_to_ounce(float x){
        std::cout<<"Enter value in tonne :"<<endl;
        std::cin>>x;
       float p = x * (32000);
         std::cout<<x <<" tonnes is " <<p <<" ounces"<<endl;
          }

        void ounce_to_ton(float x){
        std::cout<<"Enter value in ounce :"<<endl;
        std::cin>>x;
        float p = x * (1/32000);
        std::cout<<x <<" ounces is " <<p <<" tonnes"<<endl;

          }

    


   
};
void maindisplay(){
    std::cout << "  [========]" << endl;
    std::cout << " /         \\" << endl;
    std::cout << "[ M   K   S ]" << endl;
    std::cout << " \\         /" << endl;
    std::cout << "  [========]" << endl;
    std::cout << "   SYSTEM" << endl<<endl;

    std::cout<<"Welcome to MKS Unit Convertor! The following units can be converted :"<<endl<<endl;
    std::cout<<"Choose the system you want conversions between : "<<endl;
    std::cout<<"1.Mass  2.Time  3.Length "<<endl<<endl;
    

}
} 

 // CGS system of unit conversion//
namespace CGS {
    template <class T>
    class convert_cm {
        T value;
    public:
        convert_cm(T v) {
            value = v;
        }
        T inch_to_cm() { return value * 2.54; } // corrected inch to cm conversion
        T cm_to_inch() { return value / 2.54; }
        T foot_to_cm() { return value * 30.48; }
        T cm_to_foot() { return value / 30.48; }
        T yard_to_cm() { return value * 91.44; }
        T cm_to_yard() { return value / 91.44; }
    };

    template <class T>
    class convert_gram {
        T value;
    public:
        convert_gram(T v) {
            value = v;
        }
        T pound_to_gram() { return value * 453.6; }
        T gram_to_pound() { return value / 453.6; }
        T ton_to_gram() { return value * 907200; }
        T gram_to_ton() { return value / 907200; }
        T stone_to_gram() { return value * 6350; }
        T gram_to_stone() { return value / 6350; }
    };

    template <class T>
    class convert_time {
        T value;
    public:
        convert_time(T v) {
            value = v;
        }
        T min_to_sec() { return value * 60; }
        T sec_to_min() { return value / 60; }
        T hr_to_sec() { return value * 3600; }
        T sec_to_hr() { return value / 3600; }
        T day_to_sec() { return value * 86400; } // corrected day to sec conversion
        T sec_to_day() { return value / 86400; }
        T week_to_sec() { return value * 604800; } // corrected week to sec conversion
        T sec_to_week() { return value / 604800; }
        T month_to_sec() { return value * 2592000; } // corrected month to sec conversion
        T sec_to_month() { return value / 2592000; }
        T year_to_sec() { return value * 31536000; } // corrected year to sec conversion
        T sec_to_year() { return value / 31536000; }
    };
}

using namespace mks;

using namespace CGS;
int main() {

    int system;
    
    std::cout<<"-------------------------------------WELCOME TO UNIT CONVERTER APPLICATION------------------------------------------"<<endl;
    std::cout<<"-------------------------------------------------- MAIN MENU --------------------------------------------------"<<endl;
    std::cout<<"1. MKS SYSTEM "<<endl;
    std::cout<<"2. CGS SYSTEM "<<endl;
    std::cout<<"3. SI SYSTEM"<<endl;
    std::cout<<" Choose the system by pressing 1 or 2 or 3 : ";
    std::cin>>system;

    switch(system){
        case 1:{

            //mks
            maindisplay();
    
            timee t1; 
            mass m1;
            length l1;

            int mainChoice;
            int subChoice;

            do {
                std::cin >> mainChoice;

                if (mainChoice == 1) {

                    std::cout << "Welcome to Mass conversion system. Available conversions :" << endl;
                    std::cout << "1. Pounds to ounce" << endl;
                    std::cout << "2. Ounce to pound" << endl;
                    std::cout << "3. Pounds to tonne" << endl;
                    std::cout << "4. Tonne to pound" << endl;
                    std::cout << "5. Ounce to tonne" << endl;
                    std::cout << "6. Tonne to ounce" << endl;

                    std::cin >> subChoice;

                    if (subChoice == 1) {
                        float value;
                        std::cin >> value;
                        m1.pound_to_ounce(value);
                    } 
                    else if (subChoice == 2) {
                        float value;
                        std::cin >> value;
                        m1.ounce_to_pound(value);
                    } 
                    else if (subChoice == 3) {
                        float value;
                        std::cin >> value;
                        m1.pound_to_ton(value);
                    } 
                    else if (subChoice == 4) {
                        float value;
                        std::cin >> value;
                        m1.ton_to_pound(value);
                    } 
                    else if (subChoice == 5) {
                        float value;
                        std::cin >> value;
                        m1.ounce_to_ton(value);
                    } 
                    else if (subChoice == 6) {
                        float value;
                        std::cin >> value;
                        m1.ton_to_ounce(value);
                    } 
                    else {
                        std::cout << "Invalid choice for mass conversion." << endl;
                    }
                } 
                else if (mainChoice == 2) {
                    std::cout << "Welcome to Time conversion system. Available conversions :" << endl;
                    std::cout << "1. Seconds to minutes" << endl;
                    std::cout << "2. Seconds to hours" << endl;
                    std::cout << "3. Minutes to seconds" << endl;
                    std::cout << "4. Minutes to hours" << endl;
                    std::cout << "5. Hours to seconds" << endl;
                    std::cout << "6. Hours to minutes" << endl;

                    std::cin >> subChoice;

                if (subChoice == 1) {
                float value;
                std::cin >> value;
                t1.sectomin(value);
                } 
                else if (subChoice == 2) {
                float value;
                std::cin >> value;
                t1.sectohr(value);
                } 
                else if (subChoice == 3) {
                float value;
                std::cin >> value;
                t1.mintosec(value);
                } 
                else if (subChoice == 4) {
                float value;
                std::cin >> value;
                t1.mintohr(value);
                } 
                else if (subChoice == 5) {
                float value;
                std::cin >> value;
                t1.hrtosec(value);
                } 
                else if (subChoice == 6) {
                float value;
                std::cin >> value;
                t1.hrtomin(value);
                } 
                else {
                std::cout << "Invalid choice for time conversion." << endl;
                }
                } 
                else if (mainChoice == 3) {
                    std::cout << "Welcome to Length conversion system. Available conversions :" << endl;
                    std::cout << "1. Feet to inches" << endl;
                    std::cout << "2. Feet to yards" << endl;
                    std::cout << "3. Inches to feet" << endl;
                    std::cout << "4. Inches to yards" << endl;
                    std::cout << "5. Yards to feet" << endl;
                    std::cout << "6. Yards to inches" << endl;

                    std::cin >> subChoice;

                    if (subChoice == 1) {
                        l1.feetoinch();
                    } 
                    else if (subChoice == 2) {
                        l1.feettoyards();
                    } 
                    else if (subChoice == 3) {
                        l1.inchtofeet();
                    } 
                    else if (subChoice == 4) {
                        l1.inchtoyards();
                    } 
                    else if (subChoice == 5) {
                        l1.yardstofoot();
                    } 
                    else if (subChoice == 6) {
                        l1.yardstoinch();
                    } 
                    else {
                        std::cout << "Invalid choice for length conversion." << endl;
                    }
                } 
                else {
                    std::cout << "Invalid input! Try again." << endl;
                }

            } while (mainChoice < 1 || mainChoice > 3);

            break;

        }
        // this case is for CGS SYSTEM //

        case 2: {

             int choice;
    double value;

    cout << "Choose conversion type:\n";
    cout << "1. Length\n";
    cout << "2. Mass\n";
    cout << "3. Time\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            int lengthChoice;
            cout << "Choose length conversion:\n";
            cout << "1. Inches to Centimeters\n";
            cout << "2. Centimeters to Inches\n";
            cout << "3. Centimeters to foot\n";
            cout << "4. Foot to Centimeters\n";
            cout << "5. Yard to Centimeters\n";
            cout << "6. Centimeters to Yard\n";
            cout << "Enter your choice: ";
            cin >> lengthChoice;

            cout << "Enter value: ";
            cin >> value;

            if (lengthChoice >= 1 && lengthChoice <= 6) {
                convert_cm<double> length(value);
                switch (lengthChoice) {
                    case 1:
                        cout << value << " inches in centimeters: " << length.inch_to_cm() << endl;
                        break;
                    case 2:
                        cout << value << " centimeters in inches: " << length.cm_to_inch() << endl;
                        break;
                    case 3:
                        cout << value << " centimeters in foot: " << length.cm_to_foot() << endl;
                        break;
                    case 4:
                        cout << value << " foot in centimeters: " << length.foot_to_cm() << endl;
                        break;
                    case 5:
                        cout << value << " yard in centimeters: " << length.yard_to_cm() << endl;
                        break;
                    case 6:
                        cout << value << " centimeters in yard: " << length.cm_to_yard() << endl;
                        break;
                }
            } else {
                cout << "Invalid choice!" << endl;
            }
            break;
        case 2:
            int massChoice;
            cout << "Choose mass conversion:\n";
            cout << "1. Pounds to Grams\n";
            cout << "2. Grams to Pounds\n";
            cout << "3. Tons to Grams\n";
            cout << "4. Grams to Tons\n";
            cout << "5. Stones to Grams\n";
            cout << "6. Grams to Stones\n";
            cout << "Enter your choice: ";
            cin >> massChoice;

            cout << "Enter value: ";
            cin >> value;

            if (massChoice >= 1 && massChoice <= 6) {
                convert_gram<double> mass(value);
                switch (massChoice) {
                    case 1:
                        cout << value << " pounds in grams: " << mass.pound_to_gram() << endl;
                        break;
                    case 2:
                        cout << value << " grams in pounds: " << mass.gram_to_pound() << endl;
                        break;
                    case 3:
                        cout << value << " tons in grams: " << mass.ton_to_gram() << endl;
                        break;
                    case 4:
                        cout << value << " grams in tons: " << mass.gram_to_ton() << endl;
                        break;
                    case 5:
                        cout << value << " stones in grams: " << mass.stone_to_gram() << endl;
                        break;
                    case 6:
                        cout << value << " grams in stones: " << mass.gram_to_stone() << endl;
                        break;
                }
            } else {
                cout << "Invalid choice!" << endl;
            }
            break;
        case 3: {
            int timeChoice;
            cout << "Choose time conversion:\n";
            cout << "1. Minutes to Seconds\n";
            cout << "2. Seconds to Minutes\n";
            cout << "3. Hours to Seconds\n";
            cout << "4. Seconds to Hours\n";
            cout << "5. Days to Seconds\n";
            cout << "6. Seconds to Days\n";
            cout << "7. Weeks to Seconds\n";
            cout << "8. Seconds to Weeks\n";
            cout << "9. Months to Seconds\n";
            cout << "10. Seconds to Months\n";
            cout << "11. Years to Seconds\n";
            cout << "12. Seconds to Years\n";
            cout << "Enter your choice: ";
            cin >> timeChoice;

            cout << "Enter value: ";
            cin >> value;

            if (timeChoice >= 1 && timeChoice <= 12) {
                convert_time<double> time(value);
                switch (timeChoice) {
                    case 1:
                        cout << value << " minutes in seconds: " << time.min_to_sec() << endl;
                        break;
                    case 2:
                        cout << value << " seconds in minutes: " << time.sec_to_min() << endl;
                        break;
                    case 3:
                        cout << value << " hours in seconds: " << time.hr_to_sec() << endl;
                        break;
                    case 4:
                        cout << value << " seconds in hours: " << time.sec_to_hr() << endl;
                        break;
                    case 5:
                        cout << value << " days in seconds: " << time.day_to_sec() << endl;
                        break;
                    case 6:
                        cout << value << " seconds in days: " << time.sec_to_day() << endl;
                        break;
                    case 7:
                        cout << value << " weeks in seconds: " << time.week_to_sec() << endl;
                        break;
                    case 8:
                        cout << value << " seconds in weeks: " << time.sec_to_week() << endl;
                        break;
                    case 9:
                        cout << value << " months in seconds: " << time.month_to_sec() << endl;
                        break;
                    case 10:
                        cout << value << " seconds in months: " << time.sec_to_month() << endl;
                        break;
                    case 11:
                        cout << value << " years in seconds: " << time.year_to_sec() << endl;
                        break;
                    case 12:
                        cout << value << " seconds in years: " << time.sec_to_year() << endl;
                        break;
                }
            } else {
                cout << "Invalid choice!" << endl;
            }
            break;
        }
        default:
            cout << "Invalid choice!" << endl;
            break;

           
        }

        case 3:{

            /////SI SYSTEM

 int base_quantity; 
 do{ cout<<"***** SI UNIT SYSTEM *****"<<endl; 
 cout<<"Choose the base quantity for unit conversion(eg. 3 for time): "<<endl; 
 cout<<"1. Length"<<endl; 
 cout<<"2. Mass"<<endl; 
 cout<<"3. Time"<<endl; 
 cout<<"4. Temperature"<<endl;
 cout<<"5. Electric Current"<<endl;
 cout<<"6. Amount of Substance"<<endl; 
 cout<<"7. Luminous Intensity"<<endl; 
 cout<<"8. Exit the SI system"<<endl;
 cin>> base_quantity;

switch(base_quantity){
    case 1:{
    int choice;
    do{
    cout<<"choose from the following(eg. 1 for conversion of prefix to meters): "<<endl;
    cout<<"1. convert from prefix to meter"<<endl;
    cout<<"2. convert from meter to prefix"<<endl;
    cout<<"3. exit"<<endl;
    cin>>choice;
    
        switch(choice){
            case 1:{
        float v;
        string p;
        cout<<"Enter only the value(eg. 37) for conversion to meters "<<endl;
        cin>>v;
        cout<<"Enter the prefix for the value (tera or T or centi or c)"<<endl;
        cin>>p;
        if (p == "yotta"|| p=="Y") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, 24) << " meters" << endl;
        } 
        else if (p == "zetta"|| p=="Z") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, 21) << " meters" << endl;
        }
        else if (p == "exa"|| p=="E") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, 18) << " meters" << endl;
        }
        else if (p == "peta"|| p=="P") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, 15) << " meters" << endl;
        }
        else if (p == "tera"|| p=="T") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, 12) << " meters" << endl;
        }
        else if (p == "giga"|| p=="G") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, 9) << " meters" << endl;
        }
        else if (p == "mega"|| p=="M") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, 6) << " meters" << endl;
        }
        else if (p == "kilo"|| p=="k") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, 3) << " meters" << endl;
        }
        else if (p == "hecto"|| p=="h") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, 2) << " meters" << endl;
        }
        else if (p == "deca"|| p=="da") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, 1) << " meters" << endl;
        }
        else if (p == "deci"|| p=="d") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, -1) << " meters" << endl;
        }
        else if (p == "centi"|| p=="c") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, -2) << " meters" << endl;
        }
        else if (p == "milli"|| p=="m") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, -3) << " meters" << endl;
        }
        else if (p == "micro"|| p=="u") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, -6) << " meters" << endl;
        }
        else if (p == "nano"|| p=="n") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, -9) << " meters" << endl;
        }
        else if (p == "pico"|| p=="p") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, -12) << " meters" << endl;
        }
        else if (p == "femto"|| p=="f") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, -15) << " meters" << endl;
        }
        else if (p == "atto"|| p=="a") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, -18) << " meters" << endl;
        }
        else if (p == "zepto"|| p=="z") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, -21) << " meters" << endl;
        }
        else if (p == "yocto"|| p=="y") {
            Length_converter::prefixToMeter x;
            cout << v << " " << p << " = " << x.convert(v, -24) << " meters" << endl;
        }
        else {
            cout << "Invalid prefix." << endl;
        }
        
            }break;
            case 2:{
        float v2;
        string p;
        cout<<"Enter the value in meters "<<endl;
        cin>>v2;
        cout<<"Enter the prefix in which u want the meters to be converted into"<<endl;
        cin>>p;
        if (p == "yotta"|| p=="Y") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<<  " = " << i.convert(v2, 24) << p << endl;
        } 
        else if (p == "zetta"|| p=="Z") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<<  " = " << i.convert(v2, 21) << p << endl;
        }
        else if (p == "exa"|| p=="E") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<<  " = " << i.convert(v2, 18) << p << endl;
        }
        else if (p == "peta"|| p=="P") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<<  " = " << i.convert(v2, 15) << p << endl;
        }
        else if (p == "tera"|| p=="T") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<<  " = " << i.convert(v2, 12) << p << endl;
        }
        else if (p == "giga"|| p=="G") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<< " = " << i.convert(v2, 9) <<  p <<endl;
        }
        else if (p == "mega"|| p=="M") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<< " = " << i.convert(v2, 6) <<  p <<endl;
        }
        else if (p == "kilo"|| p=="k") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<< " = " << i.convert(v2, 3) <<  p <<endl;
        }
        else if (p == "hecto"|| p=="h") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " meters"<< " = " << i.convert(v2, 2) <<  p <<endl;
        }
        else if (p == "deca"|| p=="da") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<< " = " << i.convert(v2, 1) <<  p <<endl;
        }
        else if (p == "deci"|| p=="d") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<<  " = " << i.convert(v2, -1) << p << endl;
        }
        else if (p == "centi"|| p=="c") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<<  " = " << i.convert(v2, -2) << p << endl;
        }
        else if (p == "milli"|| p=="m") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<<  " = " << i.convert(v2, -3) << p << endl;
        }
        else if (p == "micro"|| p=="u") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<<  " = " << i.convert(v2, -6) << p << endl;
        }
        else if (p == "nano"|| p=="n") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" meters"<<  " = " << i.convert(v2, -9) << p << endl;
        }
        else if (p == "pico"|| p=="p") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " meters"<< " = " << i.convert(v2, -12) << p << endl;
        }
        else if (p == "femto"|| p=="f") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " meters"<< " = " << i.convert(v2, -15) << p << endl;
        }
        else if (p == "atto"|| p=="a") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " meters"<< " = " << i.convert(v2, -18) << p << endl;
        }
        else if (p == "zepto"|| p=="z") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " meters"<< " = " << i.convert(v2, -21) << p << endl;
        }
        else if (p == "yocto"|| p=="y") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " meters"<< " = " << i.convert(v2, -24) << p << endl;
        }
        else {
            cout << "Invalid prefix." << endl;
        }
        
            }break;
            case 3:{
            cout<<" Exiting the length converter "<<endl;
            
            }break;
            default:{
                cout<<"Invalid choice. "<<endl;
            }
        }
    
    
    }while(choice != 3);
    }
    break;

    case 2:{
         int choice;
    do{
    cout<<"choose from the following(eg. 1 for conversion of prefix to kilograms): "<<endl;
    cout<<"1. convert from prefix to meter"<<endl;
    cout<<"2. convert from meter to prefix"<<endl;
    cout<<"3. exit"<<endl;
    cin>>choice;
    
        switch(choice){
            case 1:{
        float v;
        string p;
        cout<<"Enter the value(eg. 37) and its prefix(deci or d) for conversion to kilograms "<<endl;
        cin>>v>>p;
        if (p == "yotta"|| p=="Y") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, 21) << " kilograms" << endl;
        } 
        else if (p == "zetta"|| p=="Z") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, 18) << " kilograms" << endl;
        }
        else if (p == "exa"|| p=="E") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, 15) << " kilograms" << endl;
        }
        else if (p == "peta"|| p=="P") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, 12) << " kilograms" << endl;
        }
        else if (p == "tera"|| p=="T") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, 9) << " kilograms" << endl;
        }
        else if (p == "giga"|| p=="G") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, 6) << " kilograms" << endl;
        }
        else if (p == "mega"|| p=="M") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, 3) << " kilograms" << endl;
        }
        else if (p == "kilo"|| p=="k") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, 0) << " kilograms" << endl;
        }
        else if (p == "hecto"|| p=="h") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -1) << " kilograms" << endl;
        }
        else if (p == "deca"|| p=="da") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -2) << " kilograms" << endl;
        }
        else if (p == "deci"|| p=="d") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -4) << " kilograms" << endl;
        }
        else if (p == "centi"|| p=="c") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -5) << " kilograms" << endl;
        }
        else if (p == "milli"|| p=="m") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -6) << " kilograms" << endl;
        }
        else if (p == "micro"|| p=="u") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -9) << " kilograms" << endl;
        }
        else if (p == "nano"|| p=="n") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -12) << " kilograms" << endl;
        }
        else if (p == "pico"|| p=="p") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -15) << " kilograms" << endl;
        }
        else if (p == "femto"|| p=="f") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -18) << " kilograms" << endl;
        }
        else if (p == "atto"|| p=="a") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -21) << " kilograms" << endl;
        }
        else if (p == "zepto"|| p=="z") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -24) << " kilograms" << endl;
        }
        else if (p == "yocto"|| p=="y") {
            Mass_converter::prefixToKilograms  x;
            cout << v << " " << p << " = " << x.convert(v, -27) << " kilograms" << endl;
        }
        else {
            cout << "Invalid prefix." << endl;
        }
        
            }break;

     case 2:{
        float v2;
        string p;
        cout<<"Enter the value in kilograms "<<endl;
        cin>>v2;
        cout<<"Enter the prefix in which u want the kilograms to be converted into"<<endl;
        cin>>p;
        if (p == "yotta"|| p=="Y") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<<  " = " << i.convert(v2, 21) << p << endl;
        } 
        else if (p == "zetta"|| p=="Z") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<<  " = " << i.convert(v2, 18) << p << endl;
        }
        else if (p == "exa"|| p=="E") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<<  " = " << i.convert(v2, 15) << p << endl;
        }
        else if (p == "peta"|| p=="P") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<<  " = " << i.convert(v2, 12) << p << endl;
        }
        else if (p == "tera"|| p=="T") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<<  " = " << i.convert(v2, 9) << p << endl;
        }
        else if (p == "giga"|| p=="G") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<< " = " << i.convert(v2, 6) <<  p <<endl;
        }
        else if (p == "mega"|| p=="M") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<< " = " << i.convert(v2, 3) <<  p <<endl;
        }
        else if (p == "kilo"|| p=="k") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<< " = " << i.convert(v2, 0) <<  p <<endl;
        }
        else if (p == "hecto"|| p=="h") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " << " kilograms"<< " = " << i.convert(v2, -1) <<  p <<endl;
        }
        else if (p == "deca"|| p=="da") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<< " = " << i.convert(v2, -2) <<  p <<endl;
        }
        else if (p == "deci"|| p=="d") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<<  " = " << i.convert(v2, -4) << p << endl;
        }
        else if (p == "centi"|| p=="c") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<<  " = " << i.convert(v2, -5) << p << endl;
        }
        else if (p == "milli"|| p=="m") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<<  " = " << i.convert(v2, -6) << p << endl;
        }
        else if (p == "micro"|| p=="u") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<<  " = " << i.convert(v2, -9) << p << endl;
        }
        else if (p == "nano"|| p=="n") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " <<" kilograms"<<  " = " << i.convert(v2, -12) << p << endl;
        }
        else if (p == "pico"|| p=="p") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " << " kilograms"<< " = " << i.convert(v2, -15) << p << endl;
        }
        else if (p == "femto"|| p=="f") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " << " kilograms"<< " = " << i.convert(v2, -18) << p << endl;
        }
        else if (p == "atto"|| p=="a") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " << " kilograms"<< " = " << i.convert(v2, -21) << p << endl;
        }
        else if (p == "zepto"|| p=="z") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " << " kilograms"<< " = " << i.convert(v2, -24) << p << endl;
        }
        else if (p == "yocto"|| p=="y") {
            Mass_converter::KilogramsToPrefix i;
            cout << v2 << " " << " kilograms"<< " = " << i.convert(v2, -27) << p << endl;
        }
        else {
            cout << "Invalid prefix." << endl;
        }
        
            }break;
            case 3:{
            cout<<" Exiting the Mass converter "<<endl;
            
            }break;
            default:{
                cout<<"Invalid choice. "<<endl;
            }
        }
    
    
    }while(choice != 3);
    }
    break;

    case 3:{
        int choice;
    do{
    cout<<"choose from the following(eg. 1 for conversion of prefix to seconds): "<<endl;
    cout<<"1. convert from prefix to seconds"<<endl;
    cout<<"2. convert from seconds to prefix"<<endl;
    cout<<"3. exit"<<endl;
    cin>>choice;
    
        switch(choice){
            case 1:{
        float v;
        string p;
        cout<<"Enter the value(eg. 37) and its prefix(deci or d) for conversion to seconds "<<endl;
        cin>>v>>p;
        if (p == "yotta"|| p=="Y") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, 24) << " seconds" << endl;
        } 
        else if (p == "zetta"|| p=="Z") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, 21) << " seconds" << endl;
        }
        else if (p == "exa"|| p=="E") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, 18) << " seconds" << endl;
        }
        else if (p == "peta"|| p=="P") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, 15) << " seconds" << endl;
        }
        else if (p == "tera"|| p=="T") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, 12) << " seconds" << endl;
        }
        else if (p == "giga"|| p=="G") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, 9) << " seconds" << endl;
        }
        else if (p == "mega"|| p=="M") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, 6) << " seconds" << endl;
        }
        else if (p == "kilo"|| p=="k") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, 3) << " seconds" << endl;
        }
        else if (p == "hecto"|| p=="h") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, 2) << " seconds" << endl;
        }
        else if (p == "deca"|| p=="da") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, 1) << " seconds" << endl;
        }
        else if (p == "deci"|| p=="d") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, -1) << " seconds" << endl;
        }
        else if (p == "centi"|| p=="c") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, -2) << " seconds" << endl;
        }
        else if (p == "milli"|| p=="m") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, -3) << " seconds" << endl;
        }
        else if (p == "micro"|| p=="u") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, -6) << " seconds" << endl;
        }
        else if (p == "nano"|| p=="n") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, -9) << " seconds" << endl;
        }
        else if (p == "pico"|| p=="p") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, -12) << " seconds" << endl;
        }
        else if (p == "femto"|| p=="f") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, -15) << " seconds" << endl;
        }
        else if (p == "atto"|| p=="a") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, -18) << " seconds" << endl;
        }
        else if (p == "zepto"|| p=="z") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, -21) << " seconds" << endl;
        }
        else if (p == "yocto"|| p=="y") {
            Time_converter::prefixTosecond x;
            cout << v << " " << p << " = " << x.convert(v, -24) << " seconds" << endl;
        }
        else {
            cout << "Invalid prefix." << endl;
        }
        
            }break;
            case 2:{
        float v2;
        string p;
        cout<<"Enter the value in seconds "<<endl;
        cin>>v2;
        cout<<"Enter the prefix in which u want the seconds to be converted into"<<endl;
        cin>>p;
        if (p == "yotta"|| p=="Y") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<<  " = " << i.convert(v2, 24) << p << endl;
        } 
        else if (p == "zetta"|| p=="Z") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<<  " = " << i.convert(v2, 21) << p << endl;
        }
        else if (p == "exa"|| p=="E") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<<  " = " << i.convert(v2, 18) << p << endl;
        }
        else if (p == "peta"|| p=="P") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<<  " = " << i.convert(v2, 15) << p << endl;
        }
        else if (p == "tera"|| p=="T") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<<  " = " << i.convert(v2, 12) << p << endl;
        }
        else if (p == "giga"|| p=="G") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<< " = " << i.convert(v2, 9) <<  p <<endl;
        }
        else if (p == "mega"|| p=="M") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<< " = " << i.convert(v2, 6) <<  p <<endl;
        }
        else if (p == "kilo"|| p=="k") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<< " = " << i.convert(v2, 3) <<  p <<endl;
        }
        else if (p == "hecto"|| p=="h") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " << " seconds "<< " = " << i.convert(v2, 2) <<  p <<endl;
        }
        else if (p == "deca"|| p=="da") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<< " = " << i.convert(v2, 1) <<  p <<endl;
        }
        else if (p == "deci"|| p=="d") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<<  " = " << i.convert(v2, -1) << p << endl;
        }
        else if (p == "centi"|| p=="c") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<<  " = " << i.convert(v2, -2) << p << endl;
        }
        else if (p == "milli"|| p=="m") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<<  " = " << i.convert(v2, -3) << p << endl;
        }
        else if (p == "micro"|| p=="u") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<<  " = " << i.convert(v2, -6) << p << endl;
        }
        else if (p == "nano"|| p=="n") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " <<" seconds "<<  " = " << i.convert(v2, -9) << p << endl;
        }
        else if (p == "pico"|| p=="p") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " << " seconds "<< " = " << i.convert(v2, -12) << p << endl;
        }
        else if (p == "femto"|| p=="f") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " << " seconds "<< " = " << i.convert(v2, -15) << p << endl;
        }
        else if (p == "atto"|| p=="a") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " << " seconds "<< " = " << i.convert(v2, -18) << p << endl;
        }
        else if (p == "zepto"|| p=="z") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " << " seconds "<< " = " << i.convert(v2, -21) << p << endl;
        }
        else if (p == "yocto"|| p=="y") {
            Time_converter::secondToPrefix i;
            cout << v2 << " " << " seconds "<< " = " << i.convert(v2, -24) << p << endl;
        }
        else {
            cout << "Invalid prefix." << endl;
        }
        
            }break;
            
            case 3:{
            cout<<" Exiting the time converter "<<endl;
            
            }break;
            default:{
                cout<<"Invalid choice. "<<endl;
            }
        }
    
    
    }while(choice != 3);

    }
    break;

    case 4:{
        int choice;
        do{
        cout<<" choose the conversion you want from the following (eg. 2 for kelvin to celsius): "<<endl;
        cout<<"1. celsius to kelvin "<<endl;
        cout<<"2. kelvin to celsius "<<endl;
        cout<<"3. fahrenheit to kelvin"<<endl;
        cout<<"4. kelvin to fahrenheit"<<endl;
        cout<<"5. celsius to fahrenheit"<<endl;
        cout<<"6. fahrenheit to celsius"<<endl;
        cout<<"7. Exit Temperature converter"<<endl;
        cin>>choice;
        if (choice==1){
            double v;
            cout<<"enter the value"<<endl;
            cin>>v;
            Temperature_converter::CelsiusToKelvin c;
            cout<<v<<" "<<"celsius "<<"= "<<c.convert(v)<<" K"<<endl;
        }
        else if(choice==2){
            double v;
            cout<<"enter the value"<<endl;
            cin>>v;
            Temperature_converter::KelvinToCelsius k;
            cout<<v<<" "<<"K "<<"= "<<k.convert(v)<<" celsius"<<endl;
        }
        else if(choice==3){
            double v;
            cout<<"enter the value"<<endl;
            cin>>v;
            Temperature_converter::FahrenheitToKelvin f;
            cout<<v<<" "<<"F "<<"= "<<f.convert(v)<<" K"<<endl;
        }
        else if(choice==4){
            double v;
            cout<<"enter the value"<<endl;
            cin>>v;
            Temperature_converter::KelvinToFahrenheit k;
            cout<<v<<" "<<"K "<<"= "<<k.convert(v)<<" F"<<endl;
        }
        else if(choice==5){
            double v;
            cout<<"enter the value"<<endl;
            cin>>v;
            Temperature_converter::CelsiusToFahrenheit c;
            cout<<v<<" "<<"celsius "<<"= "<<c.convert(v)<<" F"<<endl;
        }
        else if(choice==6){
            double v;
            cout<<"enter the value"<<endl;
            cin>>v;
            Temperature_converter::FahrenheitToCelsius f;
            cout<<v<<" "<<"F "<<"= "<<f.convert(v)<<" celsius"<<endl;
        }
        else{
            cout<<"Invalid choice"<<endl;
        }
        }while(choice!=7);


    }
    break;
    
    case 5:{
    int choice;
    do{
    cout<<"choose from the following(eg. 1 for conversion of prefix to Amperes ): "<<endl;
    cout<<"1. convert from prefix to Amperes "<<endl;
    cout<<"2. convert from Amperes  to prefix"<<endl;
    cout<<"3. exit"<<endl;
    cin>>choice;
    
        switch(choice){
            case 1:{
        float v;
        string p;
        cout<<"Enter the value(eg. 37) and its prefix(deci or d) for conversion to Amperes  "<<endl;
        cin>>v>>p;
        if (p == "yotta"|| p=="Y") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, 24) << " Amperes " << endl;
        } 
        else if (p == "zetta"|| p=="Z") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, 21) << " Amperes " << endl;
        }
        else if (p == "exa"|| p=="E") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, 18) << " Amperes " << endl;
        }
        else if (p == "peta"|| p=="P") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, 15) << " Amperes " << endl;
        }
        else if (p == "tera"|| p=="T") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, 12) << " Amperes " << endl;
        }
        else if (p == "giga"|| p=="G") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, 9) << " Amperes " << endl;
        }
        else if (p == "mega"|| p=="M") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, 6) << " Amperes " << endl;
        }
        else if (p == "kilo"|| p=="k") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, 3) << " Amperes " << endl;
        }
        else if (p == "hecto"|| p=="h") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, 2) << " Amperes " << endl;
        }
        else if (p == "deca"|| p=="da") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, 1) << " Amperes " << endl;
        }
        else if (p == "deci"|| p=="d") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, -1) << " Amperes " << endl;
        }
        else if (p == "centi"|| p=="c") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, -2) << " Amperes " << endl;
        }
        else if (p == "milli"|| p=="m") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, -3) << " Amperes " << endl;
        }
        else if (p == "micro"|| p=="u") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, -6) << " Amperes " << endl;
        }
        else if (p == "nano"|| p=="n") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, -9) << " Amperes " << endl;
        }
        else if (p == "pico"|| p=="p") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, -12) << " Amperes " << endl;
        }
        else if (p == "femto"|| p=="f") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, -15) << " Amperes " << endl;
        }
        else if (p == "atto"|| p=="a") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, -18) << " Amperes " << endl;
        }
        else if (p == "zepto"|| p=="z") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, -21) << " Amperes " << endl;
        }
        else if (p == "yocto"|| p=="y") {
            ElectricCurrent_converter::prefixToAmpere x;
            cout << v << " " << p << " = " << x.convert(v, -24) << " Amperes " << endl;
        }
        else {
            cout << "Invalid prefix." << endl;
        }
        
            }break;

                            case 2:{
        float v2;
        string p;
        cout<<"Enter the value in Amperes "<<endl;
        cin>>v2;
        cout<<"Enter the prefix in which u want the Amperes to be converted into"<<endl;
        cin>>p;
        if (p == "yotta"|| p=="Y") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<<  " = " << i.convert(v2, 24) << p << endl;
        } 
        else if (p == "zetta"|| p=="Z") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<<  " = " << i.convert(v2, 21) << p << endl;
        }
        else if (p == "exa"|| p=="E") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<<  " = " << i.convert(v2, 18) << p << endl;
        }
        else if (p == "peta"|| p=="P") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<<  " = " << i.convert(v2, 15) << p << endl;
        }
        else if (p == "tera"|| p=="T") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<<  " = " << i.convert(v2, 12) << p << endl;
        }
        else if (p == "giga"|| p=="G") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<< " = " << i.convert(v2, 9) <<  p <<endl;
        }
        else if (p == "mega"|| p=="M") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<< " = " << i.convert(v2, 6) <<  p <<endl;
        }
        else if (p == "kilo"|| p=="k") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<< " = " << i.convert(v2, 3) <<  p <<endl;
        }
        else if (p == "hecto"|| p=="h") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " Amperes"<< " = " << i.convert(v2, 2) <<  p <<endl;
        }
        else if (p == "deca"|| p=="da") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<< " = " << i.convert(v2, 1) <<  p <<endl;
        }
        else if (p == "deci"|| p=="d") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<<  " = " << i.convert(v2, -1) << p << endl;
        }
        else if (p == "centi"|| p=="c") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<<  " = " << i.convert(v2, -2) << p << endl;
        }
        else if (p == "milli"|| p=="m") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<<  " = " << i.convert(v2, -3) << p << endl;
        }
        else if (p == "micro"|| p=="u") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<<  " = " << i.convert(v2, -6) << p << endl;
        }
        else if (p == "nano"|| p=="n") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " <<" Amperes"<<  " = " << i.convert(v2, -9) << p << endl;
        }
        else if (p == "pico"|| p=="p") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " Amperes"<< " = " << i.convert(v2, -12) << p << endl;
        }
        else if (p == "femto"|| p=="f") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " Amperes"<< " = " << i.convert(v2, -15) << p << endl;
        }
        else if (p == "atto"|| p=="a") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " Amperes"<< " = " << i.convert(v2, -18) << p << endl;
        }
        else if (p == "zepto"|| p=="z") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " Amperes"<< " = " << i.convert(v2, -21) << p << endl;
        }
        else if (p == "yocto"|| p=="y") {
            Length_converter::MeterToPrefix i;
            cout << v2 << " " << " Amperes"<< " = " << i.convert(v2, -24) << p << endl;
        }
        else {
            cout << "Invalid prefix." << endl;
        }
        
            }break;
            case 3:{
            cout<<" Exiting the electric current converter "<<endl;
            
            }break;
            default:{
                cout<<"Invalid choice. "<<endl;
            }
        }
    
    
    }while(choice != 3);
    }
    break;

            case 6:{
        int choice;
    do{
    cout<<"choose from the following(eg. 1 for conversion of prefix to moles): "<<endl;
    cout<<"1. convert from prefix to moles"<<endl;
    cout<<"2. convert from moles to prefix"<<endl;
    cout<<"3. exit"<<endl;
    cin>>choice;
    
        switch(choice){
            case 1:{
        float v;
        string p;
        cout<<"Enter the value(eg. 37) and its prefix(deci or d) for conversion to moles "<<endl;
        cin>>v>>p;
        if (p == "yotta"|| p=="Y") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, 24) << " moles" << endl;
        } 
        else if (p == "zetta"|| p=="Z") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, 21) << " moles" << endl;
        }
        else if (p == "exa"|| p=="E") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, 18) << " moles" << endl;
        }
        else if (p == "peta"|| p=="P") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, 15) << " moles" << endl;
        }
        else if (p == "tera"|| p=="T") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, 12) << " moles" << endl;
        }
        else if (p == "giga"|| p=="G") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, 9) << " moles" << endl;
        }
        else if (p == "mega"|| p=="M") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, 6) << " moles" << endl;
        }
        else if (p == "kilo"|| p=="k") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, 3) << " moles" << endl;
        }
        else if (p == "hecto"|| p=="h") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, 2) << " moles" << endl;
        }
        else if (p == "deca"|| p=="da") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, 1) << " moles" << endl;
        }
        else if (p == "deci"|| p=="d") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, -1) << " moles" << endl;
        }
        else if (p == "centi"|| p=="c") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, -2) << " moles" << endl;
        }
        else if (p == "milli"|| p=="m") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, -3) << " moles" << endl;
        }
        else if (p == "micro"|| p=="u") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, -6) << " moles" << endl;
        }
        else if (p == "nano"|| p=="n") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, -9) << " moles" << endl;
        }
        else if (p == "pico"|| p=="p") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, -12) << " moles" << endl;
        }
        else if (p == "femto"|| p=="f") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, -15) << " moles" << endl;
        }
        else if (p == "atto"|| p=="a") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, -18) << " moles" << endl;
        }
        else if (p == "zepto"|| p=="z") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, -21) << " moles" << endl;
        }
        else if (p == "yocto"|| p=="y") {
            AmountofSubstance_converter::prefixTomol x;
            cout << v << " " << p << " = " << x.convert(v, -24) << " moles" << endl;
        }
        else {
            cout << "Invalid prefix." << endl;
        }
        
            }break;

                            case 2:{
        float v2;
        string p;
        cout<<"Enter the value in moles "<<endl;
        cin>>v2;
        cout<<"Enter the prefix in which u want the moles to be converted into"<<endl;
        cin>>p;
        if (p == "yotta"|| p=="Y") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<<  " = " << i.convert(v2, 24) << p << endl;
        } 
        else if (p == "zetta"|| p=="Z") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<<  " = " << i.convert(v2, 21) << p << endl;
        }
        else if (p == "exa"|| p=="E") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<<  " = " << i.convert(v2, 18) << p << endl;
        }
        else if (p == "peta"|| p=="P") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<<  " = " << i.convert(v2, 15) << p << endl;
        }
        else if (p == "tera"|| p=="T") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<<  " = " << i.convert(v2, 12) << p << endl;
        }
        else if (p == "giga"|| p=="G") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<< " = " << i.convert(v2, 9) <<  p <<endl;
        }
        else if (p == "mega"|| p=="M") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<< " = " << i.convert(v2, 6) <<  p <<endl;
        }
        else if (p == "kilo"|| p=="k") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<< " = " << i.convert(v2, 3) <<  p <<endl;
        }
        else if (p == "hecto"|| p=="h") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " << " moles"<< " = " << i.convert(v2, 2) <<  p <<endl;
        }
        else if (p == "deca"|| p=="da") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<< " = " << i.convert(v2, 1) <<  p <<endl;
        }
        else if (p == "deci"|| p=="d") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<<  " = " << i.convert(v2, -1) << p << endl;
        }
        else if (p == "centi"|| p=="c") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<<  " = " << i.convert(v2, -2) << p << endl;
        }
        else if (p == "milli"|| p=="m") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<<  " = " << i.convert(v2, -3) << p << endl;
        }
        else if (p == "micro"|| p=="u") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<<  " = " << i.convert(v2, -6) << p << endl;
        }
        else if (p == "nano"|| p=="n") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " <<" moles"<<  " = " << i.convert(v2, -9) << p << endl;
        }
        else if (p == "pico"|| p=="p") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " << " moles"<< " = " << i.convert(v2, -12) << p << endl;
        }
        else if (p == "femto"|| p=="f") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " << " moles"<< " = " << i.convert(v2, -15) << p << endl;
        }
        else if (p == "atto"|| p=="a") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " << " moles"<< " = " << i.convert(v2, -18) << p << endl;
        }
        else if (p == "zepto"|| p=="z") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " << " moles"<< " = " << i.convert(v2, -21) << p << endl;
        }
        else if (p == "yocto"|| p=="y") {
            AmountofSubstance_converter::molToPrefix i;
            cout << v2 << " " << " moles"<< " = " << i.convert(v2, -24) << p << endl;
        }
        else {
            cout << "Invalid prefix." << endl;
        }
        
            }break;
            case 3:{
            cout<<" Exiting the amount of substance converter "<<endl;
            
            }break;
            default:{
                cout<<"Invalid choice. "<<endl;
            }
        }
    
    
    }while(choice != 3);
    }
    break;

            case 7:{
        int choice;
        do{
        cout<<" choose from the following: "<<endl;
        cout<<"1. Lumen to Candela"<<endl;
        cout<<"2. Candela to Lumen"<<endl;
        cout<<"3. Exit"<<endl;
        cin>>choice;

        if(choice==1){
            double v;
            int a;
            cout<<"enter the value in Lumen"<<endl;
            cin>>v;
            cout<<"enter the angle "<<endl;
            cin>>a;
            LuminousIntensity_converter::LumenToCandela l;
            cout<<v<<" "<<" lumen "<<"= "<<l.convert(v,a)<<" Cd"<<endl;
        }
        else if(choice==2){
            double v;
            int a;
            cout<<"enter the value in candela(Cd)"<<endl;
            cin>>v;
            cout<<"enter the angle "<<endl;
            cin>>a;
            LuminousIntensity_converter::CandelaToLumen c;
            cout<<v<<" "<<"Cd "<<"= "<<c.convert(v,a)<<" lumen"<<endl;

        }
        else{
            cout<<" Invalid choice. "<<endl;

        }
    }while(choice!=3);
    }
    break;
    
    case 8:
    {
        cout<<" Exiting the SI unit system. "<<endl;
    }
    default:
    cout<<"Wrong choice entered."<<endl;

    
}
}while(base_quantity != 8);

        break;
        }

        default:
        cout<<"Invalid choice"<<endl;
    }

    return 0;
}
}

    
   







