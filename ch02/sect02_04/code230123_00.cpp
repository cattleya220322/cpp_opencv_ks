#include <opencv2/opencv.hpp>

auto main() -> int {
  // CV_8UC3 はマクロ定義
  cv::Mat img_src = cv::Mat::zeros(cv::Size(640, 480), CV_8UC3);
  cv::imshow("src", img_src);
  cv::waitKey(0);
  return 0;
}
