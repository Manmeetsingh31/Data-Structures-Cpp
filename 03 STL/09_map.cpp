void explainMap(){  //unique key in sorted order

    map <int, int> mpp;
    map <int, pair<int, int>> mpp;
    map < <pair<int, int>, int> mpp;

    mpp[1]=2;             // it will store {1,2}
    mpp.evaluate({3,1});  //{3,1}

    mpp.insert({2,4});   // {2,4}

// these will be stores in order as: [ {1,2} {3,1} {2,4}   ]


    mpp({2,3})=10;       //{{2,3},10}


    for (auto it:mpp){
        cout<< it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1];  // 2
    cout<<mpp[5];  // if doesnt exist: 0 or null

    auto it= mpp.find(3);   //{3,1}
    cout<< *(it).second:    //1

    
    auto it= mpp.find(5);  //mpp.end()


    auto it= mpp.lower_bound(2);
    auto it= mpp.upper_bound(3);

    //erase, swap, empty, size are same as above
}


//Multiset_map : .............................................................
void explainMultimap(){

    //everything is same but u can have duplicate keys
}

//Unordered Map:.............................................................
void explainunorderedset(){

    //unique but sorted

}