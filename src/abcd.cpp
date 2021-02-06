#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "abcd");
  ros::NodeHandle nh;

  int Count = 0;

  Count = 3;

  if(Count ==3)
  {
    std::cout << "message : " << Count << std::endl;
    std::cout << "message : " << Count << std::endl;
  }


  ROS_INFO("Hello world!");
}
