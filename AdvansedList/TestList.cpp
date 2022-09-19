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
            std::cout << "My name is: " << l->name << "\nMy mark is: " << l->mark << std::endl;
            
        }
        void test2()
        {
            ListSpace::List* l = ListFactory::GenListof1el("Adel", 100);
            ListSpace::List* l2 = ListFactory::GenListof2el(l->name,l->mark,"Almaz",95);
            List* head = l2;
            while (head != nullptr)
            {
                std::cout << "My name is " << head->name << "; my mark is " << static_cast<int>(head->mark) << std::endl;
                head = head->next;
            }
        }
        void test3()
        {
            List* list3{ nullptr };
            bool f = has_loop(list3);
            std::cout << f << std::endl;
        }
        bool has_loop(List* head)
        {
            auto hare = head;
            auto tortois = head;
            head = new List{ "mariyam", 100 };
            while (hare != NULL && hare->next != NULL)
            {
                hare = hare->next->next;
                tortois = tortois->next;
                if (hare == tortois)
                    return true;
            }
            return false;
        }



	} // Testlist
} // Listspace