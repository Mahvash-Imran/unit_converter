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
