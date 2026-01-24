void explainStack(){    

    stack<int> st;          //last in first out
    st.push(1); //{1}
    st.push(2);  //{2,1}
    st.push(3);  //{3,2,1,}
    st.push(4);  //{4,3,2,1}
    st.emplace(5); //pushes too  //{5,4,3,2,1}

    cout<<st.top(); //print 5

    cout<<pop();  // pops top ie 5 {4,3,2,1}

    cout<<top();  //print 4

    st.size();    // print 4
    cout<<st.empty();  // true if really empty

    stack<int> st1,st2;
    st1.swap(st2);

}