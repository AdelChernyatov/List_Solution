#pragma once
#include "List.h"
namespace ListSpace 
{
	struct ListFactory
	{
		static ListSpace::List* GenListof1el(const std::string& name, unsigned char mark);
		static ListSpace::List* GenListof2el(const std::string& name1, unsigned char mark1, const std::string& name2, unsigned char mark2);
		static ListSpace::List* To2elLoop(const std::string& name1, unsigned char mark1,
			const std::string& name2, unsigned char mark2);
		static ListSpace::List* SetLoop(List* list);
	};

} //ListSpace

