#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
string n, m, d, t;
int studentno; 
int G;

cout << "Fahsai: Sawadee ka...Can you tell me your name?\n?????: ";
getline(cin, n);
cout << "Fahsai: Wow!!! " << n << " is a really cool name.\n";
cout << "Fahsai: I think you are an Engineering student. What is your student ID?\n" << n << ": ";
cin >> studentno;
cin.ignore();
G = ((studentno/pow(10,7))-12);
cout << "Fahsai: I think you may be GEAR " << G << ". I have a free movie ticket for you.\n";
cout << "Fahsai: Let's go to the cinema together!!!\n";
cout << "Fahsai: What movie do you want to watch?\n";
cout << n << ": ";
getline(cin, m);
cout << "Fahsai: So....which day are you free to go with me?\n" << n << ": ";
getline(cin, d);
cout << "Fahsai: " << d << "....that is OK!!! I'm looking forward to watching " << m << " with you.\n" << n << ": ";
getline(cin, t);
cout << "Fahsai: 555+ see you " << d << ". Bye Bye \\(^ ^)/";
return 0;
}
