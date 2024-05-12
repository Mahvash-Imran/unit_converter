# unit_converter
Our unit converter project offers a user-friendly interface for accurate bidirectional conversion of various units. 
Catering to the needs of students, professionals in engineering, architecture, science, finance, as well as educators and the general public,
it provides a convenient tool for seamless conversion across different disciplines.
This is for CGS system 
// converting the CGS units into subunits//

#include<iostream>
using namespace std;
//using namespace //
namespace CGS{
    //use class template//
    template <class T>
    //base class for conversion of length//
    class convert_cm{
        T value;
        public:
        convert_cm(T v){
            value =v;
        }
        // functions for conversion//
        T inch_to_cm(){return value*25.4;}
        T cm_to_inch(){return value/25.4;}
         T foot_to_cm(){return value*30.48;}
        T cm_to_foot(){ return value/30.48;}
     T yard_to_cm(){return value*91.44;}
        T cm_to_yard(){return value/91.44;} 
    };
    // derived class of converT_cm class to access the member of base class//
    // add template to take any type of data type//
     template <class T>
   template <class T>
    class convert_gram : public convert_cm<T> {
    public:
        convert_gram(T value) : convert_cm<T>(value) {}

        T pound_to_gram() { return value * 453.6; } // make functions for conversions//
        T gram_to_pound() { return value / 453.6; }
        T ton_to_gram() { return value * 907200; }
        T gram_to_ton() { return value / 907200; }
        T stone_to_gram() { return value * 6350; }
        T gram_to_stone() { return value / 6350; }
    };
    // DERIVED CLSS TO CONVERT_SECONDS INTO SUBUNITS//
    // add  template//
    template <class T>
    class convert_time : public convert_cm<T> {
    public:
        convert_time(T value) : convert_cm<T>(value) {}

        T min_to_sec() { return value * 60; }
        T sec_to_min() { return value / 60; }      // 12 functions for conversions//
        T hr_to_sec() { return value * 3600; }
        T sec_to_hr() { return value / 3600; }
        T day_to_sec() { return value * 86400; }
        T sec_to_day() { return value / 86400; }
        T week_to_sec() { return value * 604800; }
        T sec_to_week() { return value / 604800; }
        T month_to_sec() { return value * 2629800; }
        T sec_to_month() { return value / 2629800; }
        T year_to_sec() { return value * 31557600; }
        T sec_to_year() { return value / 31557600; }
    };
}
using namespace CGS;
int main() {
    int choice;
    double value;

    cout << "Choose conversion type:\n";
    cout << "1. Length\n";
    cout << "2. Mass\n";
    cout << "3. Time\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            int lengthChoice;
            cout << "Choose length conversion:\n";
            cout << "1. Inches to Centimeters\n";
            cout << "2. Centimeters to Inches\n";
            cout << "3. Centimeters to Foot\n";
            cout << "4. Foot to Centimeters\n";
            cout << "5. Yard to Centimeters\n";
            cout << "6. Centimeters to Yard\n";
            cout << "Enter your choice: ";
            cin >> lengthChoice;

            cout << "Enter value: ";
            cin >> value;

            if (lengthChoice >= 1 && lengthChoice <= 6) {
                CGS::convert_cm<double> length(value);
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
        } 
        case 2: {
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
                CGS::convert_gram<double> mass(value);
                switch (massChoice) {          // give the choice to the user
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
        }
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
                CGS::convert_time<double> time(value);
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

    return 0;
}
        


//SI SYSTEM
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
        virtual double convert(double value,int exponent) const = 0;
    };

    class prefixToKilograms: public unitconverter{
        double convert(double value, int exponent) const override {
            return value*pow(10,exponent);
        }

    };

    class KilogramsToPrefix: public unitconverter{
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

#include <iostream>
using namespace std;
namespace mks{

class length {
public:
    float feet;
    float inches;
    float yards;

    void feetoinch() {
        cout << "Enter value in feet:" << endl;
        cin >> feet;
        float p = feet * 12;
        cout << feet << " feet is " << p << " inches" << endl;
    }

    void inchtofeet() {
        cout << "Enter value in inches :" << endl;
        cin >> inches;
        float p = inches / 12.0;
        cout << inches << " inches is " << p << " feet" << endl;
    }

    void inchtoyards() {
        cout << "Enter value in inches:" << endl;
        cin >> inches;
        float p = inches / 36.0; 
        cout << inches << " inches is " << p << " yards" << endl;
    }

    void yardstoinch() {
        cout << "Enter value in yards :" << endl;
        cin >> yards;
        float p = yards * 36; 
        cout << yards << " yards is " << p << " inches" << endl;
    }

    void yardstofoot() {
        cout << "Enter value in yards :" << endl;
        cin >> yards;
        float p = yards * 3; 
        cout << yards << " yards is " << p << " foot" << endl;
    }

    void feettoyards() {
        cout << "Enter value in feet :" << endl;
        cin >>feet;
        float p = feet / 3.0;
        cout << feet << " feet is " << p << " yards" << endl;
    }
};

class timee{
    public:
    float secs;
    double hours;
    double mins;

     void sectomin(float x){
        cout<<"Enter value in seconds :"<<endl;
        cin>>x;
        float p = x * (1/60);
        cout<<x <<" seconds is  " <<p <<" minutes"<<endl;
     }

        void mintosec(float x){
            cout<<"Enter value in minutes :";
        cin>>x;
        float p = x * 60;
        cout<<x <<" minutes is " <<p <<" seconds"<<endl;
        }

          void sectohr(float x){
            cout<<"Enter value in seconds :";
        cin>>x;
        float p = x * (1/3600);
        cout<<x <<" seconds is  " <<p <<" hours"<<endl;
          }

            void hrtosec(float x){
                cout<<"Enter value in hours :"<<endl;
        cin>>x;
        float p = x * 3600;
        cout<<x <<" hours is  " <<p <<"seconds"<<endl;
          }

          void mintohr(float x){
            cout<<"Enter value in minutes :"<<endl;
        cin>>x;
        float p = x * (1/60);
         cout<<x <<" minutes is  " <<p <<"hours"<<endl;
          }

     void hrtomin(float x){ 
        cout<<"Enter value in hours :"<<endl;
        cin>>x;
        float p = x * 60;
        cout<<x <<" hours is  " <<p <<"minutes"<<endl;
     }

   

};

class mass{
    public:
   float ounce;
    float ton;
    float pound;

    void pound_to_ounce(float x){
        cout<<"Enter value in pounds :"<<endl;
        cin>>x;
        float p = x * 16;
        cout<<x <<" pounds is " <<p <<" ounces"<<endl;

          }
           void ounce_to_pound(float x){
        cout<<"Enter value in ounce :"<<endl;
        cin>>x;
        float p = x * (1/16);
        cout<<x <<" ounces is " <<p <<" pounds"<<endl;

          }
          void pound_to_ton(float x){
            cout<<"Enter value in pound :"<<endl;
        
        cin>>x;
        float p = x * (1/2000);
         cout<<x <<" pounds is " <<p <<" tonnes "<<endl;

          }
           void ton_to_pound(float x){
        cout<<"Enter value in tonnes :"<<endl;
        cin>>x;
        float p = x * (2000);
         cout<<x <<" tonnes is " <<p <<" pounds"<<endl;

          }
    void ton_to_ounce(float x){
        cout<<"Enter value in tonne :"<<endl;
        cin>>x;
       float p = x * (32000);
         cout<<x <<" tonnes is " <<p <<" ounces"<<endl;
          }

        void ounce_to_ton(float x){
        cout<<"Enter value in ounce :"<<endl;
        cin>>x;
        float p = x * (1/32000);
        cout<<x <<" ounces is " <<p <<" tonnes"<<endl;

          }

    


   
};
void maindisplay(){
    cout << "  [========]" << endl;
    cout << " /         \\" << endl;
    cout << "[ M   K   S ]" << endl;
    cout << " \\         /" << endl;
    cout << "  [========]" << endl;
    cout << "   SYSTEM" << endl<<endl;

    cout<<"Welcome to MKS Unit Convertor! The following units can be converted :"<<endl<<endl;
    cout<<"Choose the system you want conversions between : "<<endl;
    cout<<"1.Mass  2.Time  3.Length "<<endl<<endl;
    

}
} 
using namespace mks;
int main() {

    maindisplay();
    
    timee t1; 
    mass m1;
    length l1;

    int mainChoice;
    int subChoice;

    do {
        cin >> mainChoice;

        if (mainChoice == 1) {
            cout << "Welcome to Mass conversion system. Available conversions :" << endl;
            cout << "1. Pounds to ounce" << endl;
            cout << "2. Ounce to pound" << endl;
            cout << "3. Pounds to tonne" << endl;
            cout << "4. Tonne to pound" << endl;
            cout << "5. Ounce to tonne" << endl;
            cout << "6. Tonne to ounce" << endl;

            cin >> subChoice;

            if (subChoice == 1) {
                float value;
                cin >> value;
                m1.pound_to_ounce(value);
            } 
            else if (subChoice == 2) {
                float value;
                cin >> value;
                m1.ounce_to_pound(value);
            } 
            else if (subChoice == 3) {
                float value;
                cin >> value;
                m1.pound_to_ton(value);
            } 
            else if (subChoice == 4) {
                float value;
                cin >> value;
                m1.ton_to_pound(value);
            } 
            else if (subChoice == 5) {
                float value;
                cin >> value;
                m1.ounce_to_ton(value);
            } 
            else if (subChoice == 6) {
                float value;
                cin >> value;
                m1.ton_to_ounce(value);
            } 
            else {
                cout << "Invalid choice for mass conversion." << endl;
            }
        } 
        else if (mainChoice == 2) {
            cout << "Welcome to Time conversion system. Available conversions :" << endl;
            cout << "1. Seconds to minutes" << endl;
            cout << "2. Seconds to hours" << endl;
            cout << "3. Minutes to seconds" << endl;
            cout << "4. Minutes to hours" << endl;
            cout << "5. Hours to seconds" << endl;
            cout << "6. Hours to minutes" << endl;

            cin >> subChoice;

            if (subChoice == 1) {
                float value;
                cin >> value;
                t1.sectomin(value);
            } 
            else if (subChoice == 2) {
                float value;
                cin >> value;
                t1.sectohr(value);
            } 
            else if (subChoice == 3) {
                float value;
                cin >> value;
                t1.mintosec(value);
            } 
            else if (subChoice == 4) {
                float value;
                cin >> value;
                t1.mintohr(value);
            } 
            else if (subChoice == 5) {
                float value;
                cin >> value;
                t1.hrtosec(value);
            } 
            else if (subChoice == 6) {
                float value;
                cin >> value;
                t1.hrtomin(value);
            } 
            else {
                cout << "Invalid choice for time conversion." << endl;
            }
        } 
        else if (mainChoice == 3) {
            cout << "Welcome to Length conversion system. Available conversions :" << endl;
            cout << "1. Feet to inches" << endl;
            cout << "2. Feet to yards" << endl;
            cout << "3. Inches to feet" << endl;
            cout << "4. Inches to yards" << endl;
            cout << "5. Yards to feet" << endl;
            cout << "6. Yards to inches" << endl;

            cin >> subChoice;

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
                cout << "Invalid choice for length conversion." << endl;
            }
        } 
        else {
            cout << "Invalid input! Try again." << endl;
        }
    } while (mainChoice < 1 || mainChoice > 3);

    return 0;
}

