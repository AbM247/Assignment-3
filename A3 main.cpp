#include "A3.h"
#include  "A3.cpp"

int main(){
    //Q1-A Makes queue and fills it with ten intgers
    queue <int>Q;
    for(int i = 1; i < 11; i++){
        Q.push(i);
    }
    //Displays all intgers by using frontE function then popping it 
    cout<<"Q1-B"<<endl;
    for(int i = 1; i < 11; i++){
        Q.frontE();
        Q.pop();
    }
    //Move to rear function in action
    cout<<endl;
     cout<<"Q1-C"<<endl;
    Q.push(6);
    Q.push(9);
    Q.push(13);
    Q.frontE();
    Q.moveTR();
    Q.frontE();

    //Modified linear search
    vector<int> vec = {1,2,3,4,5};
    int t = 3;
    linearSearch(vec,t,0);

    //Modified insertion sort
    list<int> l ={2,3,4,7,9,5};
    insertion_sort(l);

    return 0;
}
