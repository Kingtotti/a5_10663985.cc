#include<iostream>
#include<fstream>
#include<string>

using namespace std;

struct studentdetail{
	
	int idnumber;
	string name;
	int age;
	string gender;
	float score;
	char grade;
};
   
   int main ()
   {
   int i,j,a=1, totalscore,totalage,malecount = 0, femalecount = 0;
   double average,avgscore;
   studentdetail student [5];
   
   for (i = 0; i<5; i++)
   {
   cout << "student:" <<a<<endl<<endl;
   a++;
   cout <<"id number:"; cin>>student [i].idnumber;
    cout <<"name:"; cin>>student [i].name;
     cout <<"age:"; cin>>student [i].age;
      cout <<"gender:"; cin>>student [i].gender;
       cout <<"score:"; cin>>student [i].score;
      
      if(student [i].gender == "male")
      {
	  malecount++;
}
else
femalecount++;

cout <<"score:"; cin>>student[i].score;
if (student[i].score>=80)
student[i].grade='A';
else if (student[i].score>=70)
student[i].grade='B';
   else if (student[i].score>=60)
student[i].grade='C';
else if (student[i].score>=50)
student[i].grade='D';
else if (student[i].score>=40)
student[i].grade='E';
else if (student[i].score>=30)
student[i].grade='F';

  cout <<"grade:"<<student [i].grade;
  cout <<endl<<endl<<endl;
}
totalage = student [0].age + student[1].age + student[2].age + student[3].age + student[4].age;
totalscore = student [0].score + student[1].score + student[2].score + student[3].score + student[4].score;
average=totalage/5.0;
avgscore=totalscore/5.0;

fstring.cout("student.txt");
   
   cout<<"idnumber" <<"name" <<"age" <<"gender" <<"score" <<"grade"<<endl;
   cout << "***************************************************************************************************";

   for( j=0; j<=5; j++){
   	cout<< j <<"   "<< "  "<<"   "<< student[j].idnumber << "  "<< student[j].name <<student[j].score << student[j].age << student[j].grade ;
   cout<< "****************************************************************************************************"<<endl;
   
   cout<< "number of males:"<< malecount << endl;
     cout<< "number of female:"<< femalecount << endl;
      cout<< "average age:"<< averageage << endl;
   

   
  

   
   
   
   
	return 0;
}
