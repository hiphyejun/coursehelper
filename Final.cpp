// Final projecy of 21700209 Hyejun Kim 
// take input from use "subject name, Preliminary number of applicants, class capacity" and return the priority order of registration.

#include <stdio.h>
#include <string.h>
#include <queue>
#include <iostream>

using namespace std;

struct course{
  string name;
  int priority;
  course(string subject, int order) : name(subject), priority(order) {}
  };

struct cmp {
    bool operator()(course a, course b) {
        return a.priority < b.priority;
    }
};


//void getPriority(string subject, int priority) {}

int main(void) {
  priority_queue<course, vector<course>, cmp> pq;  
  printf("Course Registration Supporter\n"); //title

  int applicant;
  int coursecapacity;
  int priority; // higher value is higher priority
  char subject[100] ; // subject name
  

  for(int i=0; i<4; i++){
  cout<< "과목명: ";
  cin >>subject;
  cout<<"수강정원: ";
  cin>> coursecapacity;
  cout<<"예비수강신청자 수: ";
  cin>> applicant;
  cout<<endl;
    
  priority = applicant -coursecapacity;
  pq.push(course(subject, priority));
}
  
  int i =1;
    while(!pq.empty()) {
      course s = pq.top();
      pq.pop();
      cout<<i<<". "<<s.name <<endl;
      i++;
    }
  
  
}
