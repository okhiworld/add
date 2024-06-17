#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main() {
   
    Mat image = imread("/home/OPENCVC/1.jpg");
    if (image.empty()) {
        cout << "Could not open or find the image" << endl;
        return -1;
    }

    
    vector<Mat> channels;
    split(image, channels);

    
    namedWindow("Red Channel", WINDOW_AUTOSIZE);
    imshow("Red Channel", channels[2]);
    namedWindow("Green Channel", WINDOW_AUTOSIZE);
    imshow("Green Channel", channels[1]);
    namedWindow("Blue Channel", WINDOW_AUTOSIZE);
    imshow("Blue Channel", channels[0]);

   
    Mat bgr_image;
    transpose(channels[0], bgr_image); 
    Mat bgr_channels[3] = {bgr_image, channels[1], channels[2]}; 
    Mat bgr_combined;
    merge(bgr_channels, 3, bgr_combined); 

   
    namedWindow("BGR Image", WINDOW_AUTOSIZE);
    imshow("BGR Image", bgr_combined);

    waitKey(0);
    return 0;
}
