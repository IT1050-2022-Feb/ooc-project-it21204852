//examResults class
#include<string>
#include<iostream>
using namespace std;

class examResults{
private:
string examID;
string empID;
float results;

public:
examResults(){
  examID="";
  empID="";
}
examResults(int r){
  results = r;
}
void setResults();
float getResults();
void displayResults();
~examResults(){
  cout<<"examResults deleted"<<endl;
  }
};