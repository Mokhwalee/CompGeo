#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <list> 

using namespace std;

void GenPoint(int n, int *saveorder, double* s, double* x, double* y);
void Ordering(int n, int* saveorder, double* s);

int main() {

    int n = 10;
    int saveorder[n];
    double x[n], y[n];
    double s[n];
    
    double order_x[n], order_y[n];
    //list<list<int>> rectangle;

    GenPoint(n, saveorder, s, x, y);
    Ordering(n, saveorder, s);


    std::cout << "Sorted Array looks like this." << std::endl;
    for (int i=0; i<n; i++)
        std::cout << "s("<< i+1 << ")-"<< "point("<<saveorder[i]<<")" <<" : " << s[i] << "   (x,y)=("<<x[i]<<","<<y[i]<<")"<< std::endl;

    



    return 0;
}

void GenPoint(int n, int *saveorder, double* s, double* x, double* y) {
    srand(time(NULL));
    int i;
    
    for (i = 0; i<n; i++){
        if (i == n-1){
            x[i]=0; y[i]=0; saveorder[i]=n-1;
            std::cout << "point = "<<i+1<<", x[i] = "<<x[i]<<", y[i] = "<<y[i]<< std::endl;
        }
        else {
            x[i] = std::rand() / (RAND_MAX+1.0);
            y[i] = std::rand() / (RAND_MAX+1.0);
            saveorder[i] = i+1;
            std::cout << "point = "<<i+1<<", x[i] = "<<x[i]<<", y[i] = "<<y[i]<< std::endl;
        }
    }

     for (int i = 0; i<n; i=i+1) 
         s[i] = x[i]+y[i];

}

void Ordering(int n, int* saveorder, double* s) { 
    
    double num;
    int order;

    //use L1 metric, slope -1
    // sort by decreasing order
    for (int i = 0; i < n-1; i++) {
      for (int t = i + 1; t < n; t++) {
         if (s[t] > s[i]) {
            num = s[i];
            s[i] = s[t];
            s[t] = num;

            order = saveorder[i];
            saveorder[i] = saveorder[t];
            saveorder[t] = order;
         }
      }
   }
    // std::sort(s, s+n);
    // std::reverse(s, s+n); 
}

// Compute the tiling by order 
void TilePacking(int n, int* saveorder, double* x, double* y, double* s, double* order_x, double* order_y) { 
    //order_x = (0, x_i, .., x_j, 1)
    //order_y = (0, y_k, ..., y_t, 1)
    //rectangle = save the point to make rectangle

    order_x[0] = x[saveorder[0]];       order_y[0] = y[saveorder[0]];

    for (int i=1; i<n; i++){
        while(order_x[j-1]<=x[saveorder[i]]<=order_x[j])
        if (x[saveorder[i]] < order_x[i-1]){
            order_x[i] = order_x[i-1] ;

        }


    }
    
    
}


void GreedyPacking() {




}

