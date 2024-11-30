# Ex1
<h3>Step 1:</h3>
      I created a folder called "ex 1" and placed the .zip files in it, then extracted them and created this .txt file
      
<h3>Step 2: </h3>
      Ran an instance of the terminal, navigated to the aforementioned folder and sourced the terminal using 

      source /opt/ros/humble/setup.bash

<h3><p align="center">|-------------------------------------------------(Answer 1)----------------------------------------------------|</p></h3>
<p align="center">(Determine how many topics are in the bag.)</p>
<h3>Step 3:</h3>
using the command
  
    ros2 bag info rosbag2_2024_11_22-00_32_31/
  
  I read the bag infos, under the "Topic Information:" tab the following topics are shown:
  
    1. "/imu/acceleration"
	2. "/imu/angular_velocity"
	3. "/imu/data"
	4. "/zed2i/zed_node/left_gray/image_rect_gray"
	5. "/system_info"
Therefore the answer to the second bulletpoint should be '5'.




<h3><p align="center">|-------------------------------------------------(Answer 2/3)--------------------------------------------------|</p></h3>

<h4><p align="center">***********************[From now on every command needing "sudo"]**********************</p></h4>
<h4><p align="center">************************[will be reported without it as I ran "sudo -s"]************************</p></h4>


<h3>Step 4:</h3>
Since trying to run the command 

	ros2 bag play rosbag2_2024_11_22-00_32_31/

returned an ERROR message, I tried updating ROS2 Humble after-which the error became: 

	"[ERROR] [1732788832.164239145] [rosbag2_storage]: Could not load/open plugin with storage id 'mcap' 
which lead me to the realisation that I probably didn't have the "MCAP" plugin installed on my machine.	
Running 

	apt-get install ros-$ROS_DISTRO-rosbag2-storage-mcap" 
 indeed solved my issue.

It is worth mentioning though that a warning is now generated when the "bag play" command is launched. 

	[WARN] [1732789533.867398404] [rosbag2_player]: Ignoring a topic '/system_info', reason: package 'sysmonitor_interfaces' not found, searching: [/opt/ros/humble].

nonetheless to answer the question i tried having 2 terminals open at the same time and while the bag was playing on one i typed "ros2 topic list" in the other one resulting in:
	
 	/events/read_split
	/imu/acceleration
	/imu/angular_velocity
	/imu/data
	/parameter_events
	/rosout
	/zed2i/zed_node/left_gray/image_rect_gray
which as expected is missing the aforementioned **_system_info_** topic.

I looked into why and discoverd I had to somehow source the 'interfaces' folder too

After some time i found the "Implementing Custom Interfaces" page in the documentation for ROS2 foxy and decided to follow what it said.

I just made some modifications to the _CMakeLists.txt_ file as they suggested but this didn't fix my problem

<h3>Step 5:</h3>
after asking Matteo & Luigi i found out that my mistake was trying to build the whole workspace without building the 'instance' on it's own.
	so i ran 
 
  	colcon build --path ~/Desktop/ex1/interfaces/sysmonitor_interfaces/
building the package took 2.9sec

and it was built without any problems.
I went on to build the whole package with: 

	colcon build --path ~/Desktop/ex1/
and it compiled in 0.2s.
	
Furthermore, talking to Luigi we discovered that the .rar file I downloaded had a folder which was not meant to be there resulting in a problem.
"ex1/interfaces/sysmonitor_interfaces" **was meant to be** "ex1/sysmonitor_interfaces"
 
after that i built the package and sourced 

	./install/local_setup.bash
 and once again built the project.

<h3>Step 6:</h3>
I read through the documentation (https://docs.ros.org/en/crystal/Tutorials/Custom-ROS2-Interfaces.html) and made sure nothing was missing.

<h3>Step 7:</h3>
I opened a new instance of the terminal (let's call it "terminal2") as requested by the documentation (point 6)
and sourced it as they were showing (. install/setup.bash) 

	-launch the bag 		in terminal1
	-ros2 topic hz  /system_info 	in terminal2

<h4><p align="center">-------------------------output--------------------------</p></h4>
 	
	average rate: 2.434
		min: 0.232s max: 0.500s std dev: 0.12619s window: 3
	average rate: 2.240
		min: 0.232s max: 0.501s std dev: 0.10709s window: 5
	average rate: 2.165
		min: 0.232s max: 0.501s std dev: 0.09369s window: 7
	average rate: 2.113
		min: 0.232s max: 0.501s std dev: 0.08029s window: 10
	average rate: 2.093
		min: 0.232s max: 0.501s std dev: 0.07399s window: 12
	average rate: 2.074
		min: 0.232s max: 0.501s std dev: 0.06677s window: 15
	average rate: 2.065
		min: 0.232s max: 0.501s std dev: 0.06299s window: 17
	
 	
<h4><p align="center">------------------------endOfOutput-----------------------</p></h4>

which feels like it's giving me the frequency of every topic in the bag(?)




<h4><p align="center">|------------------------------------(Answer 4)---------------------------------|</p></h4>

running "ros2 topic echo /system_info" in terminal2 while the bag is running on terminal1
returns :

<h4><p align="center">-------------------------output--------------------------</p></h4>

	...
	cpu_usage: 15.4
	cpu_temp: 56.75
	ram_usage: 9.7
	gpu_usage: 59.6
	gpu_temp: 51.62
	gpuram_usage: 1181.0
	...

<h4><p align="center">------------------------edOfOutput-----------------------</p></h4>
multiple times with slightly different values 
so I'd say the answer to "Determine what does the topic system return" is a record of the stats of the machine that recorded the bag



<h4><p align="center">|------------------------------------(Answer 5)---------------------------------|</p></h4>

<h3>Step 8:</h3>
Following the documentation (https://docs.ros.org/en/foxy/Tutorials/Beginner-Client-Libraries/Writing-A-Simple-Cpp-Publisher-And-Subscriber.html) i created a new 'src' dir in my workspace and ran the command: 

	'ros2 pkg create --build-type ament_cmake myTalker'. 

A warning popped up which was letting me know i hadn't set a licence and showed me a series of licences i could choose from. i decided to go with the MIT one even though he documentation says that not setting one shouldn't affect the project.

To set a package licence you can simply get to the directory that was just created and edit the **package.xml** file and set line 8 to '<license>MIT</license>' or whichever you prefer. I decided to ignore this step though.
	
<h3>Step 9:</h3>
	we'll have to create the node now,
	let's navigate to the package directory "cd myTalker/src"
	to create the node we'll have to create a c++ source file named 'talker.cpp' so we'll "touch talker.cpp" and open it with our fav. text editor.
	
 The following step might be a bit hard to describe but i'll try my best to describe what i did.
	
All of the following snippets will be written in 
	our talker.cpp file
	
```Cpp snippet
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/float64.hpp"
```
his includes the necessary headers for ROS2 and the standard message type
 
 then we define a Talker class:
 
 ```Cpp snippet
class Talker : public rclcpp::Node {
public:
	Talker()
	: Node("talker")
	{
		publisher_ = this->create_publisher<std_msgs::msg::Float64>("/test", 10);
		subscription_ = this->create_subscription<std_msgs::msg::Float64>(
		"/system_topic", 10, std::bind(&Talker::topic_callback, this, std::placeholders::_1));
	}
	
private:
	void topic_callback(const std_msgs::msg::Float64::SharedPtr msg)
	{
		auto message = std_msgs::msg::Float64();
		message.data = (msg->data > 0) ? 1.0 : 0.0;  // Example logic
		publisher_->publish(message);
		RCLCPP_INFO(this->get_logger(), "Publishing: '%f'", message.data);
	}
	rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_;
	rclcpp::Subscription<std_msgs::msg::Float64>::SharedPtr subscription_;
};
 ```
-Class Declaration: A class named Talker that inherits from rclcpp::Node.
-Constructor: The constructor Talker():
-Calls the base class constructor with the node name "talker".
-Creates a publisher for std_msgs::msg::Float64 messages on the /test topic.
-Creates a subscription to the /system_topic for std_msgs::msg::Float64 messages and sets up a callback function topic_callback.
    
   
Then we'll have to create a callback function:

```Cpp snippet
void topic_callback(const std_msgs::msg::Float64::SharedPtr msg)
{
	auto message = std_msgs::msg::Float64();
	message.data = (msg->data > 0) ? 1.0 : 0.0;  // Example logic
	publisher_->publish(message);
	RCLCPP_INFO(this->get_logger(), "Publishing: '%f'", message.data);
}
```
This function is called whenever a message is received on the /system_topic.
 
 
Then we obviously need a main function, which in our case will be structured like this:
 ```Cpp snippet
int main(int argc, char * argv[])
{
	rclcpp::init(argc, argv);
	rclcpp::spin(std::make_shared<Talker>());
	rclcpp::shutdown();
	return 0;
}
```
Those lines simply behave like this:
 
-Initialization: Initializes ROS2.
-Node Execution: Creates an instance of the Talker node and spins it, allowing it to process callbacks.
-Shutdown: Cleans up and shuts down ROS2.



<h3>Step 10:</h3>
we'll also have to update the CMakeList.txt file which is just one "cd .." away.
and replace it's contents with the following

```Cpp snippet
cmake_minimum_required(VERSION 3.5)
project(myTalker)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(talker src/talker.cpp)
ament_target_dependencies(talker rclcpp std_msgs)

install(TARGETS
  talker
  DESTINATION lib/${PROJECT_NAME})

ament_package()
```
This:
	-Finds and includes the necessary packages: ament_cmake, rclcpp, and std_msgs.
	-Adds the executable named talker and points to the source file talker.cpp.
	-Sets the target dependencies for the talker executable.
	-Installs the talker executable to the appropriate destination.
	-Declares this as an ament package.


<h3>Step 11:</h3>
Now we have to build our new package!
To do this let's go back to our workspace directory (the main folder of the project)
and let's just try to run a complete "colcon build" and we should get a summary back which says "2 packages finised"

if we get any type of error i suggest doing as we did before and remove the src folder making
"ex1/src/myTalker" -> "ex1/myTalker" and rebuilt the package on it's own.

now on a terminal which is not going to be the bag player we gotta Source ROS and the setup file to update your environment:	
	
 	-change directory and open the workSpace then
	-source /opt/ros/humble/setup.bash
	-source install/setup.bash
then to start it we just use the command 

 	ros2 run myTalker talker" 		in a terminal
to test if it works we can lunch <ros2 topic pub /system_topic std_msgs/msg/Float64 "{data: 2.0}"> in another terminal, the latter terminal should now show a series of:

	publishing #N: std_msgs.msg.Float64(data=2.0)		//N will be an incremental Value
to stop it press Ctrl+C.


Now all that's left to do is upload our project to Github.




And here's the last step:
(Download Foxglove, open the bag with foxglove, create a plot of the system and one with the image, take a screenshot and put it in the GitHub readme file.)
![image](https://github.com/user-attachments/assets/519e105c-325d-4004-9b8a-e89b8c09f6a7)
