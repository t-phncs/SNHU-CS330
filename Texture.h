#ifndef TEXTURE_CLASS_H
#define TEXTURE_CLASS_H

#include <glad/glad.h>
#include <stb_image.h>

#include "shaderClass.h"

class Texture {
public:
	GLuint ID;
	const char* type;
	GLuint unit;

	Texture(const char* image, const char* texType, GLuint slot, GLenum format, GLenum pixelType);

	// Assigns a texture unit to a texture
	void texUnit(Shader& shader, const char* uniform, GLuint unit);

	// Bind a texture
	void Bind();

	// Unbinds
	void Unbind();

	// Delete
	void Delete();

};

#endif // !TEXTURE_CLASS_H

