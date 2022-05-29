#include <string_view>

#include <typename.h>

using namespace std;

template<class ChildClass>
class MetaClass
{
public:
    MetaClass()
    {

    }


public:
    static constexpr string_view ClassName = MetaClass::childTypeName.Name;


private:
    static TypeName<ChildClass> childTypeName;
};
