#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

class student{
    public:
    string name;
    string dob;
    string address;
    int roll,sid;

    int math,phy,chem;
    char gm,gp,gc;

}stud[20];

int sno;

void set_data(int n);
void display(int n);
void set_grade(int n);

int main(){
    cout<<"Enter no. of student you want to :";
    cin>>sno;
    set_data(sno);
    set_grade(sno);
    display(sno);


    return 0;
}

void set_data(int n){
    for(int i=0;i<n;i++){
        cout<<"\t\t\tEnter data of Student "<<i+1<<endl;
        cout<<"Name: ";
        cin>>stud[i].name;
        cout<<"Roll no: ";
        cin>>stud[i].roll; 
        cout<<"Student ID: ";
        cin>>stud[i].sid;
        cout<<"DOB: ";
        cin>>stud[i].dob;
        cout<<"Address: ";
        cin>>stud[i].address;
        cout<<"Enter the marks in each subject: (Out of 100) "<<endl;
        cout<<"Math: ";
        cin>>stud[i].math;
        cout<<"Physics: ";
        cin>>stud[i].phy;
        cout<<"Chemistry: ";
        cin>>stud[i].chem;

    }
}

void set_grade(int n){
    for(int i=0;i<n;i++){
        if(stud[i].math>=60){
            stud[i].gm ='A';
        }
        else if(stud[i].math<=40){
            stud[i].gm='C';
        }
        else{
            stud[i].gm='B';
        }
        
        if(stud[i].phy>=60){
            stud[i].gp ='A';
        }
        else if(stud[i].phy<=40){
            stud[i].gp='C';
        }
        else{
            stud[i].gp='B';
        }

        if(stud[i].chem>=60){
            stud[i].gc ='A';
        }
        else if(stud[i].chem<=40){
            stud[i].gc='C';
        }
        else{
            stud[i].gc='B';
        }
    }
}

void display(int n){
    for(int i=0;i<n;i++){
        cout<<"\t\t\t Basic credentials of Student "<<i+1<<endl<<endl;
        cout<<"\tS_ID\tRoll No.\tName\tDOB\tAddress"<<endl;
        cout<<"\t"<<stud[i].sid;
        cout<<"\t"<<stud[i].roll;
        cout<<"\t\t"<<stud[i].name;
        cout<<"\t"<<stud[i].dob;
        cout<<"\t"<<stud[i].address;
        cout<<endl<<endl;

        cout<<"\t\t\t Results:- "<<endl<<endl;
        cout<<"\tSubject \tMarks \tGrade"<<endl;
        cout<<"\tMath \t"<<"\t"<<stud[i].math<<"\t"<<stud[i].gm<<endl;
        cout<<"\tPhysics \t"<<stud[i].phy<<"\t"<<stud[i].gp<<endl;
        cout<<"\tChemistry \t"<<stud[i].chem<<"\t"<<stud[i].gc<<endl;
        cout<<endl;
    }

    cout<<"...........................EOF.........................."<<endl;
}
