//Authors: Lokesh Kumaraguru
#include <iostream>
#include <string>

int main()
{
        std::string noun1;
        std::string place1;
        int number;
        std::string adjective;
        std::string noun2;
        std::string noun3;
        std::string adverb;
        std::string place2;

        std::cout<<"Welcome to a fun MadLib!";
        std::cout<<" Please input a singular noun.";
        std::cin>>noun1;
        std::cout<<" Please input a place.";
        std::cin>>place1;
        std::cout<<" Please input a number.";
        std::cin>>number;
        std::cout<<" Please input an adjective.";
        std::cin>>adjective;
        std::cout<<" Please input a plural noun.";
        std::cin>>noun2;
        std::cout<<" Please input a singular noun.";
        std::cin>>noun3;
        std::cout<<" Please input an adverb.";
        std::cin>>adverb;
        std::cout<<" Please input a place.";
        std::cin>>place2;

        std::cout<<" Here is your completed fun MadLib!";
        std::cout<<" As the ";
        std::cout<<noun1;
        std::cout<<" went inside the capitol building in ";
        std::cout<<place1;
        std::cout<<", he noticed there were particular ";
        std::cout<<number;
        std::cout<<" particularly ";
        std::cout<<adjective;
        std::cout<<" looking ";
        std::cout<<noun2;
        std::cout<<". He thought they were too ";
        std::cout<<noun3;
        std::cout<<", so he left ";
        std::cout<<adverb;
        std::cout<<" and went to ";
        std::cout<<place2;
        std::cout<<".";

  return 0;
}
