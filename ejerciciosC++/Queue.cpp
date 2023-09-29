#include <iostream>
#include <queue>

using namespace std;

int main() {
    /*queue<int> myQueue;
    myQueue.push(5);
    myQueue.push(2);
    myQueue.push(3);

    while (!myQueue.empty()) {
        cout << myQueue.front() << " ";
        myQueue.pop();
    }
    cout << endl;*/

    queue<string> myfullname;

    myfullname.push("Rodrigo");
    myfullname.push("Vladimir");
    myfullname.push("Rodríguez");
    myfullname.push("Zamora");

    int count = myfullname.size();

    for (int i = 0; i < count; i++)
    {
        cout << myfullname.front() << " ";
        myfullname.pop();
    }

    return 0;
}
