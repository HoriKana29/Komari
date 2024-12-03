#include <iostream>
#include <string>
using namespace std;

int main(){
    cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout<<"?????: ";
    string a;
    getline(cin, a);
    cout<<"Fahsai: Wow!!! "<< a <<" is a really cool name.\n";
    cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout<< a <<": ";
    string b;
    getline(cin, b);
    int c = (int(b[0])-48)*10+(int(b[1])-48)-12;
    cout<<"Fahsai: I think you may be GEAR "<< c <<". I have a free movie ticket for you.\n";
    cout<<"Fahsai: Let's go to the cinema together!!!\n";
    cout<<"Fahsai: What movie do you want to watch?\n";
    cout<< a << ": ";
    string d;
    getline(cin,d);
    cout<<"Fahsai: So....which day are you free to go with me?\n";
    cout<< a << ": ";
    string e;
    getline(cin,e);
    cout<<"Fahsai: "<< e <<"....that is OK!!! I'm looking forward to watching "<< d <<" with you.\n";
    cout<< a << ": ";
    string f;
    getline(cin,f);
    cout<<"Fahsai: 555+ see you "<< e <<". Bye Bye " << "\\(^ ^)/";
    
    return 0;

}
