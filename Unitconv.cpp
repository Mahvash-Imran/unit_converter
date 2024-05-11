#include <iostream>
using namespace std;


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
        float p = inches / 12.0; // corrected conversion
        cout << inches << " inches is " << p << " feet" << endl;
    }

    void inchtoyards() {
        cout << "Enter value in inches:" << endl;
        cin >> inches;
        float p = inches / 36.0; // corrected conversion
        cout << inches << " inches is " << p << " yards" << endl;
    }

    void yardstoinch() {
        cout << "Enter value in yards :" << endl;
        cin >> yards;
        float p = yards * 36; // corrected conversion
        cout << yards << " yards is " << p << " inches" << endl;
    }

    void yardstofoot() {
        cout << "Enter value in yards :" << endl;
        cin >> yards;
        float p = yards * 3; // corrected conversion
        cout << yards << " yards is " << p << " foot" << endl;
    }

    void feettoyards() {
        cout << "Enter value in feet :" << endl;
        cin >> feet;
        float p = feet / 3.0; // corrected conversion
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

