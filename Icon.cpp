#include "Icon.hpp"
#include <cassert>

namespace Vicetrice
{
	Icon::Icon()
	{}

	void Icon::Draw()
	{
	}

	void Icon::OnClick(void(*func)())
	{
	}

	void Icon::AddIcon()
	{
	}

	void Icon::AddToContext(std::vector<float>& ContextVertices, std::vector<unsigned int>& Indices, bool IsWindow, unsigned int IconNumber)
	{

		assert(ContextVertices.size() >= 28);
		if (IsWindow)
		{
			if (IconNumber == 1)
			{
				float aux[] =
				{	//Positions															//Color									//VertexID

					ContextVertices[21], ContextVertices[22] - (0.1f),		0.0f,	1.0f	,1.0f,	1.0f			,ContextVertices.back() + 1.0f,
					ContextVertices[14], ContextVertices[15] - (0.1f),		0.0f,	1.0f	,1.0f,	1.0f			,ContextVertices.back() + 2.0f,
					ContextVertices[21], ContextVertices[22] - (0.2f),		0.0f,	1.0f	,1.0f,	1.0f			,ContextVertices.back() + 3.0f,
					ContextVertices[14], ContextVertices[15] - (0.2f),		0.0f,	1.0f	,1.0f,	1.0f			,ContextVertices.back() + 4.0f,
				};

				float IndexAux[] =
				{
					aux[6],	aux[13]	,aux[27],
					aux[6],	aux[20]	,aux[27]
				};

				for (size_t i = 0; i < sizeof(aux) / sizeof(float); ++i)
				{
					ContextVertices.emplace_back(aux[i]);
				}

				for (size_t i = 0; i < sizeof(IndexAux) / sizeof(float); i++)
				{
					Indices.emplace_back(static_cast<unsigned int>(IndexAux[i]));
				}
				return;
			}
			else
			{

				float aux[] =
				{	//Positions																	//Color									//VertexID

					ContextVertices[21], ContextVertices[22] - ((IconNumber + 1) * 0.1f),		0.0f,	1.0f	,1.0f,	1.0f			,ContextVertices.back() + 1.0f,
					ContextVertices[14], ContextVertices[15] - ((IconNumber + 1) * 0.1f),		0.0f,	1.0f	,1.0f,	1.0f			,ContextVertices.back() + 2.0f
				};

				float IndexAux[] =
				{
					aux[6] - 2.0f,	aux[6] - 1.0f,	aux[13],
					aux[6] - 2.0f,	aux[6]		 ,	aux[13]
				};

				for (size_t i = 0; i < sizeof(aux) / sizeof(float); ++i)
				{
					ContextVertices.emplace_back(aux[i]);
				}

				for (size_t i = 0; i < sizeof(IndexAux) / sizeof(float); i++)
				{
					Indices.emplace_back(static_cast<unsigned int>(IndexAux[i]));
				}
				return;
			}
		}



	}


}; //namespace Vicetrice
