#include<iostream>
using namespace std;
template <class T>
class Stack
{
   private:
    int top;
    T *arr;
    int size;
  public:
    void push(T x);
    T pop();
   T peek();
   Stack(int size);
};
template <class T>
 T Stack<T>:: peek()
    {
        if(top!=-1)
        {
            return arr[top];
        }
        else
        {
            return T();
        }
    }
    template<class T>
     T Stack<T>::  pop()
    { 
        if(top!=-1) 
        {
            T x=arr[top];
            arr[top--]=0;
            return x;
            
        }
        return T();
    }
    template <class T>
      void Stack<T>:: push(T x)
    {
        if(top!=size-1)arr[++top]=x;
    }
    template <class T>
    Stack<T>::Stack(int size)
    {
        arr=new T[size];
        top=-1;
        this->size=size;
    }
int main()
{
  Stack<int> mystack(8);
  mystack.push(8);
  mystack.push(9);
  cout<<"The top of the stack at this moment is:"<<mystack.peek()<<endl;
  cout<<"The popped value is:"<<mystack.pop();
}