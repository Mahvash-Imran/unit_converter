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
