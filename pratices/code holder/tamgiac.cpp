#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct triangle
{
    int edge1,edge2,edge3;
    triangle(int initEdge1,int initEdge2, int initEdge3)
    {
        // your code here
        initEdge1 = edge1;
        initEdge2 = edge2;
        initEdge3 = edge3;
    }

    double getArea()
    {
        // your code here
        if(edge1 + edge2 <= edge3 || edge1 + edge3 <= edge2 || edge2 + edge3 <= edge1) return -1;
        else{
            double p = 0.5 *(edge3 + edge2 + edge1);
            double area = sqrt(p*(p-edge1)*(p-edge2)*(p-edge3));
        return area;
        }
    }
};

int main()
{
    int edge1,edge2,edge3;
    triangle tri(edge1,edge2,edge3);
    cin >> tri.edge1 >> tri.edge2 >> tri.edge3;
    double area = tri.getArea();
    if (area == -1) cout << "invalid" << endl;
    else cout << fixed << setprecision(2) << area << endl;
    return 0;
}
