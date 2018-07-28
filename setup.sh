#!/bin/sh
sudo apt-get install build-essential
sudo apt-get install libgl1-mesa-dev
sudo apt-get install libglu1-mesa-dev
sudo apt-get install freeglut3-dev
#sudo apt-get install libglfw

GLFW="glfw-3.2.1"

if [ ! -f $PWD/${GLFW}.zip ]
then
	echo "file is not exist"	
	wget https://github.com/glfw/glfw/releases/download/3.2.1/glfw-3.2.1.zip 
else
	echo "file is exist"

fi




function install_glfw()
{
	echo "install glfw file is $1"
	if [ -d $GLFW ]
	then
		echo "target dir is exist"
	else
		unzip $1
	fi
  	cd $GLFW && mkdir ${GLFW}-build && cd ${GLFW}-build
	cmake ../
	make && make install
		

}



install_glfw ${GLFW}.zip

