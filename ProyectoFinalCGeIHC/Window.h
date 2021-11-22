#pragma once
#include<stdio.h>
#include<glew.h>
#include<glfw3.h>

class Window
{
public:
	Window();
	Window(GLint windowWidth, GLint windowHeight);
	int Initialise();
	GLfloat getBufferWidth() { return bufferWidth; }
	GLfloat getBufferHeight() { return bufferHeight; }
	GLfloat getXChange();
	GLfloat getYChange();
	GLfloat getmuevex() { return muevex ; }
	GLfloat getmuevey() { return muevey; }
	GLfloat getgiraplanta() { return giraplanta; }
	GLfloat getrotallanta() { return rotallanta; }
	GLfloat getapagalinterna() { return apagalinterna; }
	GLfloat getapagalinterna2() { return apagalinterna2; }
	GLfloat getapagalinterna3() { return apagalinterna3; }
	GLfloat getapagalinterna4() { return apagalinterna4; }
	GLfloat getcambio() { return cambiocam; }
	bool getShouldClose() {
		return  glfwWindowShouldClose(mainWindow);}
	bool* getsKeys() { return keys; }
	void swapBuffers() { return glfwSwapBuffers(mainWindow); }
	
	~Window();
private: 
	GLFWwindow *mainWindow;
	GLint width, height;
	bool keys[1024];
	GLint bufferWidth, bufferHeight;
	void createCallbacks();
	GLfloat lastX;
	GLfloat lastY;
	GLfloat xChange;
	GLfloat yChange;
	GLfloat muevex;
	GLfloat muevey;
	GLfloat giraplanta;
	GLfloat rotallanta;
	GLfloat apagalinterna = 1;
	GLfloat apagalinterna2 = 1;
	GLfloat apagalinterna3 = 1;
	GLfloat apagalinterna4 = 1;


	GLfloat cambiocam = 0.0;
	bool mouseFirstMoved;
	static void ManejaTeclado(GLFWwindow* window, int key, int code, int action, int mode);
	static void ManejaMouse(GLFWwindow* window, double xPos, double yPos);

};

