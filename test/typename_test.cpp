
#include <gtest/gtest.h>

#include <cutepp.h>

namespace s1 {
    class MyClass;
}

TEST(TypeName, Name) 
{
    //Both MSVC, G++ and Clang++ have passed test.
    auto typeName = std::string(TypeName<s1::MyClass>::Name).c_str();
    EXPECT_STRCASEEQ(typeName, "s1::MyClass");

    // std::cout<<"FULLNAME> "<<TypeName<void>::fullname_intern()<<std::endl;

    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}


