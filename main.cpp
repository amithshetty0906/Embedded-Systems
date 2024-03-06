#include<systemc.h>

SC_MODULE(HelloWorld) {
    SC_CTOR(HelloWorld) {
        // Constructor logic here
    }
    
    void say_hello() {
        // Print "Hello, World!" to the console
        cout << "Hello, World!" << endl;
    }
};

int sc_main(int argc, char* argv[]) {
    // Instantiate the HelloWorld module
    HelloWorld hello("hello_instance");

    // Call the say_hello function
    hello.say_hello();
    
    // Terminate simulation
    sc_stop();
    
    return 0;
}
