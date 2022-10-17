#include"Animal.h"
using namespace std;

int main()
{
	//Animal* ptr = new Parrot("Ara",2,"Africa");
	//ptr->Eat();
	//ptr->Move();
	//ptr->Print();
	//delete ptr;

	IAnimal* ptr = nullptr;

	ptr = new Parrot("Ara", 2, "Africa");
	ptr->Eat();
	ptr->Move();
	Parrot* p = static_cast<Parrot*>(ptr);
	p->Print();

	IFly* ifly = p;
	ifly->Fly();

	IAnimal* ptr2 = nullptr;

	ptr2 = new Dolphin("Dolphin", 10, "-");
	ptr->Eat();
	ptr->Move();
	Dolphin* p2 = static_cast<Dolphin*>(ptr2);
	p2->Print();

	ISwim* iswim = p2;
	iswim->Swim();

}