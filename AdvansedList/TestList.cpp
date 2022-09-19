#include "TestList.h"
#include <iostream>
#include "ListFactory.h"
#include <list>
namespace ListSpace
{
	namespace TestList
	{
		
        void test1()
        {
            ListSpace::List* l = ListFactory::GenListof1el("Adel", 100);
            std::cout << "My name is: " << l->name << "; My mark is: " << static_cast<int>(l->mark) << std::endl;
            
        }
        void test2()
        {
            ListSpace::List* l2 = ListFactory::GenListof2el("Adel",100, "Almaz", 95);
            List* head = l2;
            while (head != nullptr)
            {
                std::cout << "My name is " << head->name << "; my mark is " << static_cast<int>(head->mark) << std::endl;
                head = head->next;
            }
        }
        void test3()
        {
            ListSpace::List* l2 = ListFactory::To2elLoop("Adel", 100, "Almaz", 95);
        }
       



	} // Testlist
} // Listspace