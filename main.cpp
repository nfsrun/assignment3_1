// Name         : main.cpp
// Author       : Kevin Tran
// Version      : 1.00 -- Initial Commit
// Description  : main.cpp class has a commented main method that can be uncommented to test LinkedStacks of different
// cases. When uncommented, the console program performs tests on 5 different sizes of LinkedStacks. These sizes are
// unlimited, one, and three. They will be tested in extreme cases like successful empty checking, successful popping,
// over popping, successful pushing, over pushing, printing in empty and non-empty cases,reading top value of empty and
// non-empty cases, and checking if LinkedStacks are full in empty, full, and unlimited sizes. Other than the three
// foretold sizes, there is also size 0 and -1, both of which should print a console message and default back to
// unlimited (size=-1).

#include "LinkedStack.h"

using namespace std;

/*
int main() {
    LinkedStack<int> *unlimited = new LinkedStack<int>();
    LinkedStack<int> *max3 = new LinkedStack<int>(3);
    LinkedStack<int> *max1 = new LinkedStack<int>(1);
    int j = 1;

    //Testing of size one LinkedStack
    cout<<"LinkedStack of max1 isEmpty? "<<max1->isEmpty()<<endl;
    cout<<"Top of stack: ";
    max1->printTop();
    cout<<endl;
    cout<<"Expected empty output: "<<max1<<endl;
    cout<<"LinkedStack of max1 isFull? "<<max1->isFull()<<endl;
    cout<<"Added 1 to max1"<<endl;
    max1->push(j);
    cout<<"Top of stack: "<<max1->printTop();
    cout<<endl;
    cout<<"Expected one integer output: "<<max1<<endl;
    cout<<"LinkedStack of max1 isFull? "<<max1->isFull()<<endl;
    cout<<"Attempt to add 1 to max1 again. Expect error message. "<<endl;
    max1->push(j);
    cout<<"Remove only one value from top of stack: "<<max1->pop()<<endl;
    cout<<"LinkedStack of max1 isFull? "<<max1->isFull()<<endl;
    cout<<"Expected empty output: "<<max1<<endl;
    cout<<"Attempt to remove top value from max1 again. Expect error message. "<<endl;
    max1->pop();
    cout<<endl;

    //Stack of Size Three Linked Stack
    cout<<endl<<"LinkedStack of max3 isEmpty? "<<max3->isEmpty()<<endl;
    cout<<"LinkedStack of max3 isFull? "<<max3->isFull()<<endl;
    cout<<"Expected empty output: "<<max3<<endl;
    cout<<"Added 1 to max3"<<endl;
    max3->push(j);
    cout<<"Added 2 to max3"<<endl;
    max3->push(j=2);
    cout<<"Added 3 to max3"<<endl;
    max3->push(j=3);
    cout<<"Expected three integers outputed: "<<max3<<endl;
    cout<<"LinkedStack of max1 isFull? "<<max1->isFull()<<endl;
    cout<<"Attempt to add 1 to max3 again. Expect error message. "<<endl;
    max3->push(j);
    cout<<"Remove only one value from top of stack: "<<max3->pop()<<endl;
    cout<<"Remove only one value from top of stack: "<<max3->pop()<<endl;
    cout<<"Remove only one value from top of stack: "<<max3->pop()<<endl;
    cout<<"Attempt to remove top from unlimited again. Expect error message. "<<endl;
    max3->pop();
    cout<<"Expected empty output: "<<max3<<endl;


    //Unlimited Stack testing
    cout<<endl<<endl<<"LinkedStack of unlimited isEmpty? "<<unlimited->isEmpty()<<endl;
    cout<<"LinkedStack of unlimited should always be isFull=0? "<<unlimited->isFull()<<endl;
    cout<<"Expected empty output: "<<unlimited<<endl;
    for(int i=0; i<10; i++){
        cout<<"Added "<<i<<" to unlimited LinkedStack"<<endl;
        unlimited->push(j=i);
    }
    cout<<"LinkedStack of unlimited should always be isFull=0? "<<unlimited->isFull()<<endl;
    cout<<"Expected ten integer elements outputed: "<<unlimited<<endl;
    for(int i=0; i<10; i++){
        cout<<"Added "<<unlimited->pop()<<" to unlimited LinkedStack"<<endl;
    }
    cout<<"LinkedStack of unlimited should always be isFull=0? "<<unlimited->isFull()<<endl;
    cout<<"Attempt to remove top from max1 again. Expect error message. "<<endl;
    max3->pop();
    cout<<"Expected empty output: "<<unlimited<<endl;

    //Invalid constructor testing
    cout<<endl<<endl<<"Testing on creating LinkedStack of zero size: ";
    LinkedStack<int> *max0 = new LinkedStack<int>(0);
    cout<<endl<<"Testing on creating LinkedStack of -2 size: ";
    LinkedStack<int> *maxNegative2 = new LinkedStack<int>(-2);
    return 0;
}
*/
