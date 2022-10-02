#include "ListFactory.h"
#include<iostream>
namespace ListSpace
{
	// generates a list of zeo elements --- returns a nullptr --- it is a base for a variadic template recursive function
	// it is only a helper function that is used by the ListFactory class methods
	constexpr List* helperListGenerator()
{
    return nullptr;
}

	// generates a list, element by element using a variadic template recursive function
template<typename Name, typename Mark, typename... Args>
constexpr List* helperListGenerator(Name name, Mark mark, Args... args)
{
    List* l = new List{ name, mark, helperListGenerator(args...) };
    return l;
}

template< typename... Args>
constexpr List* ListFactory::generateList(Args... args)
{
    static_assert(((sizeof...(args)) % 2 == 0), "The last list element cannot be created: not enough constructor arguments!"); // check the parameter count
    return helperListGenerator(args...);
}
	
	
template< typename... Args>
constexpr List* ListFactory::generateListLoop(Args... args)
{
    static_assert(((sizeof...(args)) % 2 == 0), "The last list element cannot be created: not enough constructor arguments!"); // check the parameter count
	
    List* head{helperListGenerator(args...)}};
	return SetLoop(head);
}
	
	
	
	 List* ListFactory::SetLoop(List* list)  // èçíà÷àëüíî íåò öèêëà â ñïèñêå -> âðó÷íóþ çàöèêëèâàåì ïóòåì ïðèñâîåíèÿ ïîñëåäíåìó ýëåìåíòó ïåðâîãî (list)
	 {
     	 	List* head = list;

		 while (head->next != nullptr)
		 {
			 head = head->next;
		 }
		 head ->next = list;
		 return list;
	 }
	
	
	

} // ListSpace
