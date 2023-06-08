    #include<iostream>
    using namespace std;

   

    void fun(int);
    void fun(float);
    void fun(long);
    void fun(double);

    void fun(int i){
        cout<<"this is long:"<<i<<endl;
    }
    void fun(float i){
        cout<<"this is long:"<<i<<endl;
    }
    void fun(long i){
        cout<<"this is long:"<<i<<endl;
    }
    void fun(double i){
        cout<<"this is double :"<<i<<endl;
    }

   

    int main(){

        fun((long)12);

        fun(4); //by default the parameter of function is integer

        float f = 1.3;
        fun(f);

        fun(1.4); //by default decimal value ogf function is double
    }