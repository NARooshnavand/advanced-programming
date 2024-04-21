#include<iostream>
//Parent class
class Shape{
    private:
        int width;
        int height;
    public:
        void set_width(int w)
        {
            width = w;
        }
        void set_height(int h)
        {
            height = h;
        }
        int get_width()
        {
            return width;
        }
        int get_height()
        {
            return height;
        }
        int area=0;
};
//Child class
class Rectangular: public Shape{
    public:
        void calculateArea()
        {
            area =  get_width()*get_height();
        }
};
int main(){
    Rectangular r;
    r.set_height(4);
    r.set_width(3);
    r.calculateArea();
    std::cout << r.area <<std::endl;
    return 0;
}