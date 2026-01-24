void explainPQ(){

    priority queue<int> pq;

    //MAX HEAP : smaller to higher.....................
    pq.push(5); //{5}
    pq.push(2); //{5,2}
    pq.push(6); //{6,5,2}
    pq.emplace(9); // {9,6,5,2}

    cout<<pq.top(); //print 9

    //swap ,size are same

    //MINIMUM HEAP......................................
    priority queue< int,vector<itn>, greater<int> >pq;
    pq.push(5);  //{5}
    pq.push(2);  //{2,5}
    pq.push(8);  //{2,5,8}
    pq.push(10);   //{2,5,8,10}

    cout<< pq.top(); //prints 2
}