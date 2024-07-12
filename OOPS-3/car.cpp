#include "vehicle.cpp"
class Car : public Vehicle{
    public:
        int numGears;


        void print(){
            cout<<"Num Tyres: "<<numTyres<<endl;
            cout<<"Color:"<<color<<endl;
            cout<<"Num Gears:"<<numGears<<endl;
            //cout<<"Max Speed:"<<<maxSpeed<<endl;
        }
};
