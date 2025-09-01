#include<iostream>
#include<string>
using namespace std;

class staff {
protected:
    string name, department;
    int staffID;

public:
    void accept() {
        cout<<"\nEnter Staff name: ";
        cin>>name;
        cout<<"Enter Staff department: ";
        cin>>department;
        cout<<"Enter Staff ID: ";
        cin>>staffID;
    }

    void display() {
        cout<<"\nStaff name: "<< name;
        cout<<"\nStaff department: "<< department;
        cout<<"\nStaff ID: "<< staffID;
    }
};

class teacher : public staff {
    string role, section;
public:
    void accept2() {
        accept();
        cout<<"Enter Staff Role: ";
        cin>>role;
        cout<<"Enter Staff section: ";
        cin>>section;
    }

    void display2() {
        display();
        cout<<"\nStaff Role: "<<role;
        cout<<"\nStaff section: "<<section;
    }
};

class supportstaff : public staff {
    string position;
public:
    void accept3() {
        accept();
        cout<<"Enter Support staff position: ";
        cin>>position;
    }

    void display3() {
        display();
        cout<<"\nSupport staff Position: "<<position;
    }
};

int main()
{
    int n, m;
    
    cout<<"Enter number of teachers: ";
    cin>>n;
    teacher t[n];  
    for(int i = 0; i < n; i++) {
        cout<<"\nEnter details for Teacher "<< i+1<<":\n";
        t[i].accept2();
    }

    cout<<"\nDisplaying Teacher Details:";
    for(int i = 0; i < n; i++) {
        cout<<"\n\nTeacher "<< i+1 << ":";
        t[i].display2();
    }

    cout<<"\n\nEnter number of support staff: ";
    cin>>m;
    supportstaff s[m]; 
    for(int i = 0; i < m; i++) {
        cout<<"\nEnter details for Support Staff "<<i+1 << ":\n";
        s[i].accept3();
    }

    cout<<"\nDisplaying Support Staff Details:";
    for(int i = 0; i < m; i++) {
        cout<<"\n\nSupport Staff "<<i+1<<":";
        s[i].display3();
    }

    return 0;
}
