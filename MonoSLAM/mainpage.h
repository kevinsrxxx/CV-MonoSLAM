/** @mainpage 
*
* @date Jan 1, 2014
*
* @version v1.0.0
*
* <hr>
*
* @section Introduction
* This project proposes a new approach of monocular ceiling vision based
* simultaneous localization and mapping (SLAM) by utilizing an improved
* Square Root Unscented Kalman Filter (SRUKF). With a monocular camera mounted 
* on the top of a mobile robot and looking upward to the ceiling, the robot
* only needs to process salient features, which greatly reduce the computational
* complexity and have a high accuracy. SRUKF is used instead of the standard
* Extended Kalman Filter (EKF) to improve the linearization problem in
* both motion and perception models. To address the numerical instability problems
* in the standard SRUKF, several optimization methods are utilized in the project.
* <hr>
*
* @section Requirements
* This project was developed under Microsoft Visual Studio 2010, and 
* depends on the following software:
	- OpenCV v2.4.3.
	- GSL GnuWin32 v1.8.
	- OpenGL.
	- doxygen v1.8.6.
* 
* <hr>
*
* @section Acknowledgments
* Many thanks to Xinyuan Zhai for his previous work with this project. 
* Thanks also to Dr. Chen for his supervision of this project, and the help
* from Baoxian Zhang.
*/