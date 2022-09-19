#include "ListFactory.h"
#include<iostream>
namespace ListSpace
{
	List* ListFactory::GenListof1el(const std::string& name, unsigned char mark) // по ссылке на чтение передаем
	{
		//ListSpace::List list(name, mark);
		List* l = new List(name,mark);

		return l;
	}
	List* ListFactory::GenListof2el(const std::string& name1, unsigned char mark1,
		const std::string& name2, unsigned char mark2) 
	{
		List* l = new List(name1, mark1);
		l->next = new List(name2, mark2);
		return l;
	}
	List* ListFactory::To2elLoop(const std::string& name1, unsigned char mark1,
		const std::string& name2, unsigned char mark2) 
	{   
		List* l = new List(name1, mark1);
		l->next = new List(name2, mark2);
		l = ListFactory::SetLoop(l);
		return l;
	}
	 List* ListFactory::SetLoop(List* list)  // изначально нет цикла в списке -> вручную зацикливаем путем присвоения последнему элементу первого (list)
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