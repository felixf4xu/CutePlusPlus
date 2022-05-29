//https://stackoverflow.com/a/68139582/10838321

#include <iostream>
#include <string_view>

template<typename T>
struct TypeName 
{
    constexpr static std::string_view fullname_intern() 
    {
        #if defined(__clang__) || defined(__GNUC__)
            return __PRETTY_FUNCTION__;
        #elif defined(_MSC_VER)
            return __FUNCSIG__;
        #else
            #error "Unsupported compiler"
        #endif
    }

    constexpr static std::string_view name() 
    {
        size_t prefix_len = TypeName<void>::fullname_intern().find("void");
        size_t multiple   = TypeName<void>::fullname_intern().size() - TypeName<int>::fullname_intern().size();
        size_t dummy_len  = TypeName<void>::fullname_intern().size() - 4*multiple;

        size_t target_len = (fullname_intern().size() - dummy_len)/multiple;
        std::string_view rv = fullname_intern().substr(prefix_len, target_len);
        if (rv.rfind(' ') == rv.npos)
            return rv;
        return rv.substr(rv.rfind(' ')+1);
    }

    constexpr static std::string_view Name = name();
};
