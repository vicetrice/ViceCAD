#include "VertexBuffer.hpp"
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include "Error.hpp"


namespace Vicetrice
{
	VertexBuffer::VertexBuffer(const void* data, unsigned int size)
	{
		GLCall(glGenBuffers(1, &m_RendererID));


		GLCall(glBindBuffer(GL_ARRAY_BUFFER, m_RendererID));


		GLCall(glBufferData(GL_ARRAY_BUFFER, size, data, GL_STATIC_DRAW));

	}

	VertexBuffer::~VertexBuffer()
	{
		GLCall(glDeleteBuffers(1, &m_RendererID));
	}

	void VertexBuffer::Bind() const
	{
		
			GLCall(glBindBuffer(GL_ARRAY_BUFFER, m_RendererID));
		
	}

	void VertexBuffer::Unbind() const
	{
		GLCall(glBindBuffer(GL_ARRAY_BUFFER, 0));

	}
}