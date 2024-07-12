#include <iostream>
using namespace std;
int round_off(int marks){
    int new_marks=marks;
    if(marks>=38){
    if(marks%5>=3){
        int rem = marks%5;
        new_marks = marks+(5-rem);

    }
    }
    return new_marks;
}
int main(){
    int n;
    cin>>n;
    int marks_list[n];
    int new_marks[n];
    for(int i=0;i<=n-1;i++){
        cin>>marks_list[i];
        new_marks[i]= round_off(marks_list[i]);
    }
    for(int i=0;i<=n-1;i++){
        cout<<marks_list[i]<<endl;
    }

}