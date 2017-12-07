// Name         : main.cpp
// Author       : Kevin Tran
// Version      : 1.04 -- Fixed tests to represent testing with no weird
// constructor arguments and nothing that tests size limitations as stacks
// do not have that evven though it is made out of a linked list.
// uncommented to test LinkedStacks of different cases. When uncommented, the
// console program performs tests on 5 different sizes of LinkedStacks. These
// sizes are unlimited, one, and three. They will be tested in extreme cases
// like successful empty checking, successful popping, over popping, successful
// pushing, over pushing, printing in empty and non-empty cases,reading top
// value of empty and non-empty cases, and checking if LinkedStacks are full in
// empty, full, and unlimited sizes. Other than the three foretold sizes, there
// is also size 0 and -1, both of which should print a console message and
// default back to unlimited (size=-1).

#include "LinkedStack.h"

using namespace std;
struct intObj{
    int i;
    intObj(int j=0){
        this->i=j;
    }
    friend ostream& operator<<(ostream& os, intObj inp){
        return os << to_string(inp.i);
    }
};

int main() {
    LinkedStack<intObj> *unlimited = new LinkedStack<intObj>();
    LinkedStack<intObj> *max3 = new LinkedStack<intObj>();
    LinkedStack<intObj> *max1 = new LinkedStack<intObj>();
    intObj* j = new intObj(1);
 
    //Testing of size one LinkedStack
    cout<<"LinkedStack of max1 isEmpty? (1=yes/0=no) "<<max1->isEmpty()<<endl;
    cout<<"Top of stack: ";
    max1->printTop();
    cout<<endl;
    cout<<"Expected empty output: "<<max1<<endl;
    cout<<"Added 1 to max1"<<endl;
    max1->push(*j);
    cout<<"Top of stack: "<<max1->printTop();
    cout<<endl;
    cout<<"Expected one integer output: "<<max1<<endl;
    cout<<"Expected size (Number of elements) to be 1: ";
    cout<<max1->getElementCount();
    cout<<endl;
    cout<<"Attempt to add 1 to max1 again. Expect error message. "<<endl;
    max1->push(*j);
    cout<<"Remove only one value from top of stack: "<<max1->pop()<<endl;
    cout<<"Expected empty output: "<<max1<<endl;
    cout<<"Attempt to remove top value from max1 again. Expect error message. ";
    cout<<endl;
    max1->pop();
    cout<<endl;
 
    //Stack of Size Three Linked Stack
    cout<<endl<<"LinkedStack of max3 isEmpty? (1=yes/0=no) "<<max3->isEmpty()<<endl;
    cout<<"Expected empty output: "<<max3<<endl;
    cout<<"Added 1 to max3"<<endl;
    max3->push(*j);
    cout<<"Added 2 to max3"<<endl;
    j = new intObj(2);
    max3->push(*j);
    j = new intObj(3);
    cout<<"Added 3 to max3"<<endl;
    max3->push(*j);
    cout<<"Expected three integers outputed: "<<max3<<endl;
    cout<<"Expected size (Number of elements) to be 3: ";
         cout<<max3->getElementCount();
    cout<<endl;
    cout<<"Attempt to add 1 to max3 again. Expect error message. "<<endl;
    max3->push(*j);
    cout<<"Remove only one value from top of stack: "<<max3->pop()<<endl;
    cout<<"Remove only one value from top of stack: "<<max3->pop()<<endl;
    cout<<"Remove only one value from top of stack: "<<max3->pop()<<endl;
    cout<<"Attempt to remove top from unlimited again. Expect error message. ";
    cout<<endl;
    max3->pop();
    cout<<"Expected empty output: "<<max3<<endl;
 
 
    //Unlimited Stack testing
    cout<<endl<<endl<<"LinkedStack of unlimited isEmpty? (1=yes/0=no) "<<
        unlimited->isEmpty();
    cout<<endl;
    cout<<"Expected empty output: "<<unlimited<<endl;
    for(int i=0; i<10; i++){
        cout<<"Added "<<i<<" to unlimited LinkedStack"<<endl;
        j = new intObj(i);
        unlimited->push(*j);
    }
    cout<<"Expected size (Number of elements) to be 10: ";
        cout<<unlimited->getElementCount();
    cout<<endl;
    cout<<endl;
    cout<<"Expected ten integer elements outputed: "<<unlimited<<endl;
    for(int i=0; i<10; i++){
        cout<<"Added "<<unlimited->pop()<<" to unlimited LinkedStack"<<endl;
    }
    cout<<endl;
    cout<<"Attempt to remove top from max1 again. Expect error message. "<<endl;
    max3->pop();
    cout<<"Expected empty output: "<<unlimited<<endl;
    return 0;
}

