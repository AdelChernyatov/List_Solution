#include "TestList.h"
#include <iostream>
#include <list>
namespace ListSpace
{
	namespace TestList
	{
		
        void test1()
        {
            ListSpace::List l{ "Adel", 100 };
            std::cout << "My name is " << l.name << "; my mark is " << static_cast<int>(l.mark) << std::endl;

        }
        void test2()
        {
            List* head{ nullptr };
            head = new List{ "Albina", 99 };
            List l2{ "Artur", 56 };
            head->next = &l2;
            List* root{ head };
            while (root != nullptr)
            {
                std::cout << "My name is " << root->name << "; my mark is " << static_cast<int>(root->mark) << std::endl;
                root = root->next;
            }
            /*ListSpace::List l;
            l.next = new List{ "Mariya", 88 };
            std::cout << "My name is " << l.next->name << "; my mark is " << static_cast<int>(l.next->mark) << std::endl;*/
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