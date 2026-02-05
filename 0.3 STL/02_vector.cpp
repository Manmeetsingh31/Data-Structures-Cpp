#include <bits/stdc++.h>
using namespace std;

void expVector(){ // vector is dynamic in nature

    vector<pair<int,int>>vec;

    vec.push_back({3,1});
    vec.emplace_back(3,1); //automaticallly takes it as pair n input

    vector<int> v1(5,100);   // {100,100,100,100,100}
    vector<int> v2(5);        // {0,0,0,0,0}

    //copying vector
    vector<int> v9(v1); // // copy of v1(deep copy)

    vector<int> v7= {10, 20, 30, 40};
    //iteration
    vector<int>::iterator it=v7.begin(); // {10,20,30,40} points to 10

    it++;
    cout<<*(it)<<" "<<endl;

    it=it+2;                            //begin element to 10 se aage 2 ka gap and the next element i.e 40
    cout<<*(it)<<" "<<endl;


//  vector<int>:: iterator it=v.end(); // {10,20,30,40} points to right after 40 
//  vector<int>:: iterator it=v.rend(); // {10,20,30,40} points to right before 10 
//  vector<int>:: iterator it=v.rbegin(); // {10,20,30,40} points to last element

    /*-------------------------------------------------------------------*/

    vector<int> v;
    v.push_back(7);
    v.emplace_back(40);

    cout<<v[0]<<" "<<v.at(0)<<endl;  //v[0] → no bounds check     |   v.at(0) → does bounds check (throws exception if invalid)
    cout<<v.back(); // lat element


}

void test(){
    vector<int> v4;
    v4.push_back(7);
    v4.emplace_back(40);

    cout<<v4[0]<<" "<<v4.at(1)<<endl;
    
    cout<<v4.back(); // last element
}

void printvector(){
    vector<int> v1={12,34,33,45,89};

    for(vector<int>:: iterator it= v1.begin(); it!= v1.end(); it++){
        cout<<*(it)<<" ";
    }

//---------------------OR------------------------------------------//
    cout<<endl;
    for(auto it= v1.begin(); it!= v1.end(); it++){
        cout<<*(it)<<" ";
    }

//------------OR-----------for each loop-------------------------------//
    cout<<endl;
    for(auto it:v1){     // it on v
        cout<<it<<" ";
    }
}

void deletev(){
    vector<int> v1={12,34,33,45,89};

    v1.erase(v1.begin()+2);
    for(auto it:v1){           // deletes one element: {12,34,33,45,89}, like 33
        cout<<it<<" ";
    }

    cout<<endl;

    v1.erase(v1.begin()+2,v1.begin()+3 );
    for(auto it:v1){          // deletes a particular sequence: {12,34,33,45,89}, like 33-89
        cout<<it<<" ";
    }
}

//insert funciton
void insertev(){

    vector<int> v10(2,100); //{100,100}
    v10.insert(v10.begin(),300); //{300,100,100}
    v10.insert(v10.begin()+1,2,10); //{300,10,10,100,100}

    //adding one vector to another
    vector<int> copy{2,50}; //{50,50}
    v10.insert(v10.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}

    cout<<v10.size();   //size of vector
    
    v10.pop_back();     //pops last element

    //swaping two vectors
    v10.swap(v1);

    v10.clear(); //erases the entire vector
    
    cout<< v.empty();   //return True if vector is empty

}

int main() {
    // expVector();  
    // cout<<endl;
    // cout<<endl;
    // test();     
    // cout<<endl;
    // cout<<endl;
    // printvector();
    // deletev();
    insertev();
    return 0;
}