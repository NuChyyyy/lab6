#include<iostream>
#include<string>

using namespace std;

int main()
{
    string name;
    int id;
    cout << "Fahsai: Sawadee ka...Can you tell me your name?\n";
    cout << "?????: ";
    getline(cin,name);
    cout << "Fahsai: Wow!!! "<< name << " is a really cool name.\n";
    cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n";
    cout << name << ": ";
    getline(cin,id);
    char i1 = id[0],i2 = id[1]
    int y1 = atoi(i1);
    int y2 = atoi(i2);
    int gg,gear;
    gg = y1*10+y2;
    gear = gg - 12;
    cout << "Fahsai: I think you may be GEAR "<< gear <<". I have a free movie ticket for you.\n";
    cout << "Fahsai: Let's go to the cinema together!!!\n";
    cout << "Fahsai: What movie do you want to watch?\n";
    string mov;
    cout << name << ": ";
    getline(cin,mov)
    cout << "Fahsai: So....which day are you free to go with me?\n";
    string time; 
    cout << name << ": ";
    getline(cin,time);
    cout << "Fahsai: "<< time <<"....that is OK!!! I'm looking forward to watching "<< mov <<" with you.\n";
    string con;
    cout << name << ": ";
    getline(cin,con);
    cout << "Fahsai: 555+ see you "<< time <<". Bye Bye \\(^ ^)/";
    return 0;
}
