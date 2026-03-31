#include <iostream>
using namespace std;

class Parent {
    public:
        void parent_func(){
            cout << "Parent\n";}
        };

    class Child : public Parent {
        public:
        void child_func() {
            cout << "Child\n";
        }
    };

    class GrandChild : public Child {
        public:
        void grandchild_func() {
            cout << "Grandchild\n";
        }
        };

        int main (){
            GrandChild gc;
            gc.parent_func();
            gc.child_func();
            gc.grandchild_func();
            return 0;
        }