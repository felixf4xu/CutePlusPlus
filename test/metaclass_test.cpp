

#include <gtest/gtest.h>

#include <cutepp.h>

class MyClass1 : public MetaClass<MyClass1>
{

};



TEST(MetaClass, ClassName) 
{
    //Both MSVC, G++ and Clang++ have passed test.
    MyClass1 class1;
    auto className = std::string(class1.ClassName).c_str();
    EXPECT_STRCASEEQ(className, "MyClass1");

    // std::cout<<"FULLNAME> "<<TypeName<void>::fullname_intern()<<std::endl;

    // Expect equality.
    EXPECT_EQ(7 * 6, 42);
}


class MetaClassTestFixture: public ::testing::Test { 
public: 
   MetaClassTestFixture( ) { 
       // initialization code here
   } 

   void SetUp( ) { 
       // code here will execute just before the test ensues 
   }

   void TearDown( ) { 
       // code here will be called just after the test completes
       // ok to through exceptions from here if need be
   }

   ~MetaClassTestFixture( )  { 
       // cleanup any pending stuff, but no exceptions allowed
   }

   // put in any custom data members that you need 
};


TEST_F (MetaClassTestFixture, UnitTest1) { 
   

}

TEST_F (MetaClassTestFixture, UnitTest2) { 
   

}
