#include<iostream>
#include<string>
using namespace std;


class Course{
    string courseName;
    int creditHours;
    char grade;

public: 
    void setCourseName(){
        cout<<"Enter Course Name: ";
        cin>>courseName;
    }

    string getCourseName(){
        return courseName;
    }

    void setCreditHours(){
        cout<<"Enter Number of Credit Hours(1 - 6): ";
        cin>>creditHours;
        while(creditHours<1 || creditHours>6){
            cout<<"Enter Valid Number Of Credit Hours !"<<endl;
            cout<<"Enter Number of Credit Hours(1 - 6): ";
            cin>>creditHours;
        }
    }

    int getCreditHours(){
        return creditHours;
    }

    void setGrade(){
        cout<<"Enter Grade(A - F): ";
        cin>>grade;
        
        if(grade >= 'a' && grade <= 'f'){
            grade = grade - 32; 
        }

        while(grade<'A' || grade>'F'){
            cout<<"Enter Valid Grade !"<<endl;
            cout<<"Enter Grade(A - F): ";
            cin>>grade;
            
            if(grade >= 'a' && grade <= 'f'){
                grade = grade - 32; 
            }
        }
    }

    char getGrade(){
        return grade;
    }

    double getGradePoints(){
        if(grade == 'A') return 4.0;
        else if(grade == 'B') return 3.5;
        else if(grade == 'C') return 3.0;
        else if(grade == 'D') return 2.0;
        else if(grade == 'E') return 1.0;
        else return 0.0;
    }
};


class Student{
    string name;
    int numberOfCourses;
    Course* courseList;

public:
    void setName(){
        cout<<"Enter Name of Student: ";
        cin>>name;
    }

    string getName(){
        return name;
    }

    void setNumberOfCourses(){
        cout<<"Enter Number of Courses(1 - 8): ";
        cin>>numberOfCourses;
        while(numberOfCourses<1 || numberOfCourses>8){
            cout<<"Enter Valid Number Of Courses !"<<endl;
            cout<<"Enter Number of Courses(1 - 8): ";
            cin>>numberOfCourses;
        }

        courseList = new Course[numberOfCourses];
    }

    int getNumberOfCourses(){
        return numberOfCourses;
    }

    void displayReport(){
        double totalPoints = 0.0;
        int totalCredits = 0;

        cout<<"\n=======================================\n";
        cout<<"             STUDENT REPORT            \n";
        cout<<"=======================================\n";
        cout<<"Name: "<<name<<"\n\n";

        for(int i=0; i<numberOfCourses; i++){
            cout<<"Course: "<<courseList[i].getCourseName()
                <<"   |   Credits: "<<courseList[i].getCreditHours()
                <<"   |   Grade: "<<courseList[i].getGrade()<<"\n";
            
            totalCredits += courseList[i].getCreditHours();
            totalPoints += (courseList[i].getGradePoints() * courseList[i].getCreditHours());
        }

        cout<<"---------------------------------------\n";
        
        double cgpa = 0.0;
        if(totalCredits > 0){
            cgpa = totalPoints / totalCredits;
        }

        cout<<"Total Credits Attempted: "<<totalCredits<<"\n";
        cout<<"Final CGPA: "<<cgpa<<"\n";
        cout<<"=======================================\n";
    }

    void runStudent(){
        setName();
        setNumberOfCourses();

        for(int i=0; i<numberOfCourses; i++){
            cout<<"\n===  COURSE :  "<<i+1<<" ==="<<endl;
            courseList[i].setCourseName();
            courseList[i].setCreditHours();
            courseList[i].setGrade();
        }

        displayReport();
    }

    ~Student() {
        delete[] courseList;
    }
};


int main(){
    Student s1;
    s1.runStudent();

    return 0;
}