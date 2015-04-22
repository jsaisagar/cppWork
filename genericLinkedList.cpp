#include <iostream>

using namespace std;

template <class datatype> class genList{
        genList *next;
        public:
                datatype data;
                genList(datatype dat)
                {
                        data = dat;
                        next = NULL;
                }
                void add(genList *node)
                {
                        node->next = this;
                        next = NULL;
                }
};

template <typename T>
void println(genList<T> head)
{
        cout<<"Printing head "<< head.data<<endl;
}
int main()
{
        genList<char> start('a');

        println(start);
}
