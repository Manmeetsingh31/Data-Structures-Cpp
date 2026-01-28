void explainDeque(){

    deque<int> dq;

    dq.pushback(2);
    dq.emplaceback(4);

    dq.push_front(5);
    dq.emplace_front(3);

    dq.pop_back();
    dq.pop_front();

    dq.back();
    dq.front();

    //rest are same as vector
    //begin, end, rbegin, rend, clear, insert, size, swap

}