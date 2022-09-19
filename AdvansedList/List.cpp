#include "List.h"

namespace ListSpace
{
	List::List(const std::string& name, Mark mark, List* next) noexcept :
		name{ name },
		mark{ mark },
		next{ next }
	{}
}

