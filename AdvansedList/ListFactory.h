#pragma once
#include "List.h"
namespace ListSpace 
{
	class ListFactory
	{
		static ListSpace::List* GenListof1el(const std::string& name, unsigned char mark);
		static ListSpace::List* GenListof2el(const std::string& name1, unsigned char mark1, const std::string& name2, unsigned char mark2);
		ListSpace::List* 
	};

}

