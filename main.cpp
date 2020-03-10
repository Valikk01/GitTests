#include <iostream>
#include <thread>

using namespace std;



void print (){
    for (int i = 0; i < 10000; ++i) {
        cout << i << endl;
    }
}


int main(int argc, const char * argv[]) {
   
    thread f(print);
    thread b(print);
    f.join();
    b.join();
    
    
    
    return 0;
}
