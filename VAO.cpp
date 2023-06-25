#include "VAO.h"

VAO::VAO()
{
	// Generate the VAO with only 1 object each
	glGenVertexArrays(1, &ID);
}

void VAO::LinkAttrib(VBO& VBO, GLuint layout, GLuint numComponents, GLenum type, GLsizeiptr stride, void* offset)
{
	VBO.Bind();
	// Configure the Vertex Attribute so that OpenGL knows how to read the VBO
	glVertexAttribPointer(layout, numComponents, type, GL_FALSE, stride, offset);
	// Enable the Vertex Attribute so that OpenGL knows to use it
	glEnableVertexAttribArray(layout);
	VBO.Unbind();
}

void VAO::Bind()
{
	glBindVertexArray(ID);

}

void VAO::Unbind()
{

	// Bind VAO to 0 so that we don't accidentally modify the VAO we created
	glBindVertexArray(0);
}

void VAO::Delete()
{
	// Delete all objects
	glDeleteVertexArrays(1, &ID);

}
