#include <ros/ros.h>

int main(int argc, char **argv)
{
  ros::init(argc, argv, "aud");
  ros::NodeHandle nh;

  ROS_INFO("Hello school!");
}
