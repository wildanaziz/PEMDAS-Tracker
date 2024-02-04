#include <iostream>
using namespace std;

// Two-dimentional-figure Generator
// Author wilson
double circumference_of_a_square(double s);
double circumference_of_4(double a, double b, double c, double d);
double circumference_of_a_rectangle(double p, double l);
double circumference_of_a_triangle(double a, double b, double c);
double circumference_of_a_circle(double r);
double square_area(double s);
double rectangle_area(double p, double l);
double parallelogram_area(double a, double t);
double triangle_area(double a, double t);
double trapezoid_area(double a, double t, double b);
double area_of_2_shapes(double d1, double d2);
double circle_area(double r);
void show_square(double s);
void show_rectangle(double p, double l);
void show_circle(double r);
void show_c_4(double a, double b, double c, double d);
void show_a_parallelogram(double a, double t);
void show_c_triangle(double a, double b, double c);
void show_a_triangle(double a, double t);
void show_a_2(double d1, double d2);
void show_a_trapezoid(double a, double b, double t);
void threshold();
void list();

int main () {
    int input_a, input_b, input_c, input_d, input_d1, input_d2, input_t;
    char option;

    while(true) {
        cout << "Welcome to Two-Dimentional Figure Generator ^_^" << endl;
        list();
        cout << "Input your choice: ";
        cin >> option;

        if (option == '1')
        {
            cout << "Circumference of the square & Area of the square (need s)" << endl;
            cout << "Input your (s) number: ";
            cin >> input_a;

            show_square(input_a);
            cout << endl;
        } else if (option == '2')
        {
            cout << "Circumference of the rectangle & Area of the rectangle (need p & l)" << endl;
            cout << "Input your (p) number: ";
            cin >> input_a;
            cout << "Input your (l) number: ";
            cin >> input_b;

            show_rectangle(input_a, input_b);
            cout << endl;
        } else if (option == '3')
        {
            cout << "Circumference of the parallelogram & Area of the parallelogram (need a,b,c,d,t)" << endl;
            cout << "Circumstance" << endl;
            cout << "Input your (a) number: ";
            cin >> input_a;
            cout << "Input your (b) number: ";
            cin >> input_b;
            cout << "Input your (c) number: ";
            cin >> input_c;
            cout << "Input your (d) number: ";
            cin >> input_d;
            cout <<  endl << "Area" << endl;
            cout << "Input your (t) number: ";
            cin >> input_t;

            show_c_4(input_a, input_b, input_c, input_d);
            show_a_parallelogram(input_a, input_t);
            cout << endl;
        } else if (option == '4')
        {
            cout << "Circumference of the triangle & Area of the triangle (need a,b,c,t)" << endl;
            
            cout << "Circumference" << endl;
            cout << "Input your (a) number: ";
            cin >> input_a;
            cout << "Input your (b) number: ";
            cin >> input_b;
            cout << "Input your (c) number: ";
            cin >> input_c;
            cout <<  endl << "Area" << endl;
            cout << "Input your (t) number: ";
            cin >> input_t;

            show_c_triangle(input_a, input_b, input_c);
            show_a_triangle(input_a, input_t);
            cout << endl;
        } else if (option == '5')
        {
            cout << "Circumference of the Rhombus & Area of the Rhombus (need a,b,c,d,d1,d2)" << endl;
            
            cout << "Circumference" << endl;
            cout << "Input your (a) number: ";
            cin >> input_a;
            cout << "Input your (b) number: ";
            cin >> input_b;
            cout << "Input your (c) number: ";
            cin >> input_c;
            cout << "Input your (d) number: ";
            cin >> input_d;
            cout <<  endl << "Area" << endl;
            cout << "Input your (d1) number: ";
            cin >> input_d1;
            cout << "Input your (d2) number: ";
            cin >> input_d2;
            

            show_c_4(input_a, input_b, input_c, input_d);
            show_a_2(input_d1, input_d2);
            cout << endl;
        } else if (option == '6')
        {
            cout << "Circumference of the kite & Area of the kite (need a,b,c,d,d1,d2)" << endl;
            
            cout << "Circumference" << endl;
            cout << "Input your a (number): ";
            cin >> input_a;
            cout << "Input your b (number): ";
            cin >> input_b;
            cout << "Input your c (number): ";
            cin >> input_c;
            cout << "Input your d (number): ";
            cin >> input_d;
            cout <<  endl << "Area" << endl;
            cout << "Input your d1 (number): ";
            cin >> input_d1;
            cout << "Input your d2 (number): ";
            cin >> input_d2;
            

            show_c_4(input_a, input_b, input_c, input_d);
            show_a_2(input_d1, input_d2);
            cout << endl;
        } else if (option == '7')
        {
            cout << "Circumference of the trapezoid & Area of the trapezoid (need a,b,c,d,t)" << endl;
            
            cout << "Circumference" << endl;
            cout << "Input your a (number): ";
            cin >> input_a;
            cout << "Input your b (number): ";
            cin >> input_b;
            cout << "Input your c (number): ";
            cin >> input_c;
            cout << "Input your d (number): ";
            cin >> input_d;
            cout <<  endl << "Area" << endl;
            cout << "Input your t (number): ";
            cin >> input_t;
            

            show_c_4(input_a, input_b, input_c, input_d);
            show_a_trapezoid(input_a, input_b, input_t);
            cout << endl;
        } else if (option == '8')
        {
            cout << "Circumference of the cirlce & Area of the circle (need a,b,c,d,t)" << endl;
            
            cout << "Input your r (number): ";
            cin >> input_a;
            

            show_circle(input_a);
            cout << endl;
        } else if(option == '9')
        {
            cout << "The program has stopped :(" << endl;
            break;
        } else {
            cout << endl << "Your input doesn't match try again!" << endl;
        }

    }

    return 0;
}

double circumference_of_a_square(double s){
    double k;
    k = 4*s;
    return k;
}

double circumference_of_4(double a, double b, double c, double d){
    double k;
    k = a+b+c+d;
    return k;
}

double circumference_of_a_rectangle(double p, double l){
    double k;
    k = 2*(p+l);
    return k;
}

double circumference_of_a_triangle(double a, double b, double c){
    double k;
    k = a+b+c;
    return k;
}

double circumference_of_a_circle(double r){
    double phi = 3.14;
    double k;
    k = 2*phi*r;
    return k;
}

double square_area(double s) {
    double l;
    l = s*s;
    return l;
}

double rectangle_area(double p, double l) {
    double a;
    a = p*l;
    return a;
}

double parallelogram_area(double a, double t) {
    double l;
    l = a*t;
    return l;
}

double triangle_area(double a, double t) {
    double l;
    l = ((a*t)/2);
    return l;
}

double trapezoid_area(double a, double t, double b) {
    double l;
    l = ((a+b)/2) * t;
    return l;
}

double area_of_2_shapes(double d1, double d2) {
    double l;
    l = ((d1*d2)/2);
    return l;
}

double circle_area(double r) {
    double phi = 3.14;
    double l;
    l = phi * r * r;
    return l;
}

void show_square(double s) {
    cout << "The result of circumstance: " << circumference_of_a_square(s) << endl;
    cout << "The result of area: " << square_area(s) << endl;
}

void show_rectangle(double p, double l) {
    cout << "The result of circumstance: " << circumference_of_a_rectangle(p, l) << endl;
    cout << "The result of area: " << rectangle_area(p, l) << endl;
}

void show_circle(double r) {
    cout << "The result of circumstance: " << circumference_of_a_circle(r) << endl;
    cout << "The result of area: " << circle_area(r) << endl;
}

void show_c_4(double a, double b, double c, double d) {
    cout << "The result of circumstance: " << circumference_of_4(a, b, c, d) << endl;
}

void show_a_parallelogram(double a, double t) {
    cout << "The result of area: " << parallelogram_area(a, t) << endl;
}

void show_c_triangle(double a, double b, double c) {
    cout << "The result of circumstance: " << circumference_of_a_triangle(a, b, c) << endl;
}

void show_a_triangle(double a, double t) {
    cout << "The result of area: " << triangle_area(a, t) << endl;
}

void show_a_2(double d1, double d2) {
    cout << "The result of area: " << area_of_2_shapes(d1, d2) << endl;
}

void show_a_trapezoid(double a, double b, double t){
    cout << "The result of area: " << trapezoid_area(a, b, t) << endl;
}

void threshold() {
    cout << "=================================================" << endl;
}

void list() {
    threshold();
    cout << "1. Square (circumference & area)\n2. Rectangle (circumference & area)\n3. Parallelogram (circumference & area)\n";
    cout << "4. Triangle (circumference & area)\n5. Rhombus (circumference & area)\n6. Kite (circumference & area)\n";
    cout << "7. Trapezoid (circumference & area)\n8. Circle (circumference & area)\n9. Exit\n";
    threshold();
}