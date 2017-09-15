#include <iostream>   // http://ide.geeksforgeeks.org/xRrADm
#include <stdio.h>
using namespace std;

struct point
{
    int x;
    int y;
};
int segment(struct point p1,struct point p2, struct point p3)
{
    if(p2.x>=min(p1.x,p3.x) && p2.x<=max(p1.x,p3.x))
    {
        return 1;
    }
    return 0;
}

int orientation(struct point p1,struct point p2, struct point p3)
{
    int x1=p2.x - p1.x;
    int y1=p2.y - p1.y;
    int x2=p3.x - p1.x;
    int y2=p3.y - p1.y;
    
    int det = x2*y1 - x1*y2;
    if(det==0) return 0;       //collinear
    if(det>0) return 1;       //anticlock wise
    else if(det<0) return 2;  //clock wise
}
int ifintersect(struct point p1,struct point q1,struct point p2,struct point q2)
{
    int o1=orientation(p1,q1,p2);
    int o2=orientation(p1,q1,q2);
    int o3=orientation(p2,q2,p1);
    int o4=orientation(p2,q2,q1);
    
    if(o1!=o2 && o3!=o4)
     return 1;
     
    if(o1==0 && o2==0 && o3==0 && o4==0)
    {
        if(segment(p1,p2,q1) || segment(p2,p1,q2))
        {
            return 1;
        }
    }
    return 0;
}
int main() {
	
	struct point p1={1,1},q1={10,1};
	struct point p2={1,3},q2={10,3};    // Does not intersect
	
	if(ifintersect(p1,q1,p2,q2))
	printf("Intersect");
	else printf("Does not Intersect");
	
	return 0;

}
