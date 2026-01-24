void explainQueue(){

    queue<int> q;

    q.push(1);  //{1}
    q.push(2);  //{1,2}
    q.push(3);  //{1,2,3}
    q.emplace(4);  //{1,2,3,4}

    q.back()+=5  //q.back last element

    q.back();  //print 9: 4+5

    q.front();  //1

    q.pop();   //{2,3,4}

    cout<< q.front(); //prints 2


    // size, swap same as stack

}