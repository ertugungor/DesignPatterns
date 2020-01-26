#ifndef SINGLETON_OBJECT
#define SINGLETON_OBJECT

class SingletonObject
{
  public:
    // static keyword makes this initialization occur only once
    static SingletonObject& getInstance()
    {
      static SingletonObject uniqueInstance;
      return uniqueInstance;
    };

    void setData(int data);
    int getData();
    // delete move and copy constructor/assignments
    SingletonObject(const SingletonObject&) = delete;
    SingletonObject& operator=(const SingletonObject&) = delete;
    SingletonObject(SingletonObject &&) = delete;
    SingletonObject& operator=(SingletonObject &&) = delete;

  private:
    int data;
    SingletonObject(){};

};

#endif //SINGLETON_OBJECT