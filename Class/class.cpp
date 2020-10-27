#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:
        int age, standard;
        string first_name, last_name;
    public:
        void set_age(int ageIn){
            age=ageIn;
        }
        void set_standard(int standardIn){
            standard=standardIn;
        }
        void set_first_name(string first_nameIn){
            first_name=first_nameIn;
        }
        void set_last_name(string last_nameIn){
            last_name=last_nameIn;
        }
        int get_age(){
            return age;
        }
        int get_standard(){
            return standard;
        }
        string get_first_name(){
            return first_name;
        }
        string get_last_name(){
            return last_name;
        }
        string to_string(){
            stringstream ss_1;
            stringstream ss_2;

            string ageS;
            string standardS;

            ss_1 << age;
            ss_1 >> ageS;

            ss_2 << standard;
            ss_2 >> standardS;
            
            return ageS + "," + first_name + "," + last_name + "," + standardS;

        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
