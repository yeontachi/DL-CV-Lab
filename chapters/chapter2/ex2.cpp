#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;

int main(void){
    cout<<"Hello OpenCV"<< CV_VERSION <<endl;

    cv::Mat img;
    img = cv::imread("images/lenna.bmp");

    if(img.empty()){
        cerr<<"Image load failed"<<endl;
        return -1;
    }

    cv::namedWindow("image");
    cv::imshow("image", img);

    cv::waitKey();
    return 0;
}