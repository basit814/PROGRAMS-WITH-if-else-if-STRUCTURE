#include <iostream>
using namespace std;
int main() {
    float matric, inter, entry;
    cout << "Enter Matric %, Inter %, Entry Test %: ";
    cin >> matric >> inter >> entry;
    if(inter>85&&entry>80)
    cout<<"addmission approved eith merit scholarship";
    else if(matric>60&&inter>65&&entry>50)
    cout<<"addmission approved";
    else
    cout<<"addmission rejected";
    return 0;
}
