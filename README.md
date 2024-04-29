# unit_converter
Our unit converter project offers a user-friendly interface for accurate bidirectional conversion of various units. 
Catering to the needs of students, professionals in engineering, architecture, science, finance, as well as educators and the general public,
it provides a convenient tool for seamless conversion across different disciplines.

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
