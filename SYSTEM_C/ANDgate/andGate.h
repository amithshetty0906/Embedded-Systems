#include<systemc.h>

SC_MODULE(andGate){

    sc_in<bool>a;
    sc_in<bool>b;
    sc_out<bool>out;

    void andOPeration(){
        out.write(a.read() && b.read();)
    }

    SC_CTOR(andGate){
        SC_METHOD(andOperation);
        sensitive<<a<<b<<out;
    }

}