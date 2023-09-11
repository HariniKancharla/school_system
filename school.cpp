#include<iostream>
#include<fstream>
#include<string>
#include<conio.h>
#include<windows.h>
using namespace std;

struct student{
    string first_name;
    string last_name;
    string registration;
    string classes;
}student_data;

struct teacher{
    string fst_name;
    string lst_name;
    string qualification;
    string experience;
    string salary;
    string subj;
    string lec;
    string addrs;
    string cell_no;
    string blood_grp;
    string serves;
}techr[50];

int main(){
    int i=0,j;
    char choice;
    string find;
    string search;

    while(1){
        system("cls");
        cout<<"--------------------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\tSCHOOL MANAGEMENT PROGRAM\n\n";
        cout<<"--------------------------------------------------------------------------------------------";
        cout<<"\n\n\t\t\tMAIN SCREEN\n\n";
        cout<<"Enter your choice:"<<endl;
        cout<<"1.Student Information"<<endl;
        cout<<"2.Teacher Information"<<endl;
        cout<<"3.Exit Program"<<endl;
        cin>>choice;
        system("cls");

        switch(choice){
            case '1':
            {
                while(1){
                    system("cls");
                    cout<<"\t\t\tSTUDENT INFORMATION\n\n\n";
                    cout<<"Enter your choice: "<<endl;
                    cout<<"1.New Admission"<<endl;
                    cout<<"2.Find and display"<<endl;
                    cout<<"3.GO TO MAIN"<<endl;
                    cin>>choice;

        switch(choice){
            case '1':
            { ofstream f1("student.txt",ios::app);
            for( i=0;choice!='n';i++){
                if((choice=='y')||(choice=='Y')||(choice=='1')){
                    cout<<"Enter First Name: ";
                    cin>>student_data.first_name;
                    cout<<"Enter Last Name: ";
                    cin>>student_data.last_name;
                    cout<<"Enter Registration Number: ";
                    cin>>student_data.registration;
                    cout<<"Enter Class: ";
                    cin>>student_data.classes;

                    f1<<student_data.first_name<<endl<<student_data.last_name<<endl<<student_data.registration<<endl<<student_data.classes<<endl;
                    cout<<"Do you want to enter data: ";
                    cout<<"Press Y for continue and N for finish: ";
                    cin>>choice;
                }
            }  
            f1.close();
            }
            continue;

            case '2':
            {ifstream f2("student.txt");
            cout<<"Enter student first name: ";
            cin>>find;
            cout<<endl;
            int nostu=0;
            for(j=0;(j<i)||(!f2.eof());j++){
                getline(f2,student_data.first_name);
                if(student_data.first_name==find){
                    nostu=1;
                    cout<<"First Name: "<<student_data.first_name<<endl;
                    getline(f2,student_data.last_name);
                    cout<<"Last Name: "<<student_data.last_name<<endl;
                    getline(f2,student_data.registration);
                    cout<<"Registration Number: "<<student_data.registration<<endl;
                    getline(f2,student_data.classes);
                    cout<<"Class : "<<student_data.classes<<endl;
                }
            }
            if(nostu==0){
                cout<<"No Record Found"<<endl;
            }
            f2.close();
            cout<<"Press any key 2 times to proceed";
            getch();
            getch();
            }
            continue;

            case '3':
            {
                break;
            }
        }             
        break;     
                }
                continue;
            }

            case '2':
            {
                while(1){
                    system("cls");
                    cout<<"\t\t\tTEACHER INFORMATION\n\n\n";
                    cout<<"Enter your choice: "<<endl;
                    cout<<"1.New Joining"<<endl;
                    cout<<"2.Find and display"<<endl;
                    cout<<"3.GO TO MAIN"<<endl;
                    cin>>choice;

        switch(choice){
            case '1':
            { ofstream t1("teacher.txt",ios::app);
            for( i=0;choice!='n'&&choice!='N';i++){
                if((choice=='y')||(choice=='Y')||(choice=='1')){
                    cout<<"Enter First Name: ";
                    cin>>techr[i].fst_name;
                    cout<<"Enter Last Name: ";
                    cin>>techr[i].lst_name;
                    cout<<"Enter Qualification: ";
                    cin>>techr[i].qualification;
                    cout<<"Enter Experience(in years): ";
                    cin>>techr[i].experience;
                    cout<<"Enter Number of years worked in this school: ";
                    cin>>techr[i].serves;
                    cout<<"Enter Teaching subject: ";
                    cin>>techr[i].subj;
                    cout<<"Enter Lectures per week: ";
                    cin>>techr[i].lec;
                    cout<<"Enter Address: ";
                    cin>>techr[i].addrs;
                    cout<<"Enter Salary: ";
                    cin>>techr[i].salary;
                    cout<<"Enter Phone Number: ";
                    cin>>techr[i].cell_no;
                    cout<<"Enter Blood Group: ";
                    cin>>techr[i].blood_grp;

                    t1<<techr[i].fst_name<<endl<<techr[i].lst_name<<endl<<techr[i].qualification<<endl
                    <<techr[i].experience<<endl<<techr[i].serves<<endl<<techr[i].subj<<endl<<techr[i].lec<<endl
                    <<techr[i].salary<<endl<<techr[i].cell_no<<endl<<techr[i].blood_grp<<endl;
                    cout<<"Do you want to enter data: ";
                    cout<<"Press Y for continue and N for finish: ";
                    cin>>choice;
                }
            }
            system("cls");

            t1.close();
            }
            continue;

            case '2':
            {ifstream t2("teacher.txt");
            cout<<"Enter teacer's first name: ";
            cin>>find;
            cout<<endl;
            int notec=0;
            for(j=0;(j<i)||(!t2.eof());j++){
                getline(t2,techr[j].fst_name);
                if(techr[j].fst_name==find){
                    notec=1;
                    cout<<"First Name: "<<techr[j].fst_name<<endl;
                    getline(t2,techr[j].lst_name);
                    cout<<"Last Name: "<<techr[j].lst_name<<endl;
                    getline(t2,techr[j].qualification);
                    cout<<"Qualification: "<<techr[j].qualification<<endl;
                    getline(t2,techr[j].experience);
                    cout<<"Experience : "<<techr[j].experience<<endl;
                    getline(t2,techr[j].serves);
                    cout<<"Number of years in school  : "<<techr[j].serves<<endl;
                    getline(t2,techr[j].subj);
                    cout<<"Subject : "<<techr[j].subj<<endl;
                    getline(t2,techr[j].lec);
                    cout<<"Number of lectures per week : "<<techr[j].lec<<endl;
                    getline(t2,techr[j].addrs);
                    cout<<"Address: "<<techr[j].addrs<<endl;
                    getline(t2,techr[j].salary);
                    cout<<"Salary : "<<techr[j].salary<<endl;
                    getline(t2,techr[j].cell_no);
                    cout<<"Phone Number : "<<techr[j].cell_no<<endl;
                    getline(t2,techr[j].blood_grp);
                    cout<<"Blood Group : "<<techr[j].blood_grp<<endl;
                }
            }
            t2.close();
            if(notec==0){
                cout<<"No Record Found"<<endl;
            }
            cout<<"Press any key 2 times to proceed";
            getch();
            getch();
            }
            continue;

            case '3':
            {
                break;
            }
        }             
        break;     
                }
                continue;
            }
            case '3':
            {
                break;
            }
        }
        break;
    }
}
