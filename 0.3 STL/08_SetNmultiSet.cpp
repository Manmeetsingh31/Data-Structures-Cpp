void explainSet(){
    st<int> st;

    st.insert(1);
    st.insert(11);
    st.insert(7);
    st.insert(17);
    st.insert(19);


    //begin,end,rend,rbegin, size, empty, swap are same as  above

    //{1,7,11,17,19}
    auto it= st.find(7);

    auto it= st.find(1);

    st.erase(7); //erases 7 takes logrithmuc time

    int cnt= st.count(11);  //if 1 present u get 1 otherwise 0


    //{1,11,17,19}
    auto it= st.find(1);
    auto it= st.find(17);
    st.erase(it1,it2); //result: {17,19}

    auto it =st.lower_bound(2);
    auto it =st.upper_bound(2);


//Mutliset: ordered but not unique...........................................

void explainMultiset(){

    multiset<int>ms;

    ms.insert(1);
    ms.insert(1);
    ms.insert(1); //{1,1,1}

    ms.erase(1); //all 1's erased

    int cnt= ms.count(1);
    ms.erase(ms.find(1)); // only single 1 erased


    //rest all same as set
}

//Unordered set: unique but not sorted.......................................

void explainUset(){

    unordered_set<int> st;

    //lower and upper bound functions doesnt work there but rest all
    //are same as above
    // doesnt store in a particular order but it has better complexity
    //than set in most cases, except some when collisio happens
}