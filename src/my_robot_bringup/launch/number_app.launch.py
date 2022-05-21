from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    remap_number_topic = ("number" , "srijith_number")
    remap_service = ("reset_counter" , "srijith_reset_counter")

    parameter_list = [{"number_to_publish": 4}, {"number_publish_frequency": 2.0}]

    number_publisher_node = Node(
        #package = "ros2_app_py",
        package = "ros2_app_cpp",
        executable = "number_publisher",
        name = "srijith_publisher",
        remappings = [
            remap_number_topic
        ],
        parameters = parameter_list
    )

    number_counter_node = Node(
        #package = "ros2_app_py",
        package = "ros2_app_cpp",
        executable = "number_counter",
        name = "srijith_counter",
        remappings = [
            remap_number_topic,
            remap_service
        ] 

    )

    ld.add_action(number_publisher_node)
    ld.add_action(number_counter_node)

    return ld
