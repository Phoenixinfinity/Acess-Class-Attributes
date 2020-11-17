#include <iostream>

using namespace std;
//Creating Class
class Mobile
{
    public:
    string brand;
    string model;
    string type;
    string pixels;
};
int main()
{
    //Create an Object
    Mobile Obj;
    Obj.brand = "Oppo";
    Obj.model = "Oppo F15";
    Obj.type = "Android - 720 snapdragon";
    Obj.pixels = "Camera - 48";

    //Create another object
    Mobile Obj1;
    Obj1.brand = "Apple";
    Obj1.model = "Iphone 10";
    Obj1.type = "Mac Phone";
    Obj1.pixels = "Camera - 64";

    //Print Attributes
    cout<<Obj.brand<<" \n"<<Obj.model<<" \n"<<Obj.type<<" \n"<<Obj.pixels<<" \n\n";
    cout<<Obj1.brand<<" \n"<<Obj1.model<<" \n"<<Obj1.type<<" \n"<<Obj1.pixels<<" \n";

    return 0;
}
