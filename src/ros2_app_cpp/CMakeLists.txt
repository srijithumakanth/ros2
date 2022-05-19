cmake_minimum_required(VERSION 3.5)
project(ros2_app_cpp)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

# Add excecutables similar to ROS1
add_executable(number_publisher src/number_publisher.cpp)
add_executable(number_counter src/number_counter.cpp)

# Instead of target_link_libraries in ROS1, we use, ament_target_dependencies in ROS2
ament_target_dependencies(number_publisher rclcpp)
ament_target_dependencies(number_counter rclcpp)

# Additional instructions --> ROS2 specific.
install(TARGETS
    number_publisher
    number_counter
    DESTINATION lib/${PROJECT_NAME}/
)

ament_package()
