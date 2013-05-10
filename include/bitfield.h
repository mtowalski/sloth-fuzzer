#ifndef FUZZER_BITFIELD_H
#define FUZZER_BITFIELD_H

#include <vector>
#include <tuple>
#include "field_impl.h"
#include "field.h"
#include "block_field.h"
#include "exceptions.h"

class compound_bitfield_impl : public clonable_field_impl<compound_bitfield_impl> {
public:
    void set(size_t index, value_type value);
    value_type get(size_t index) const;
    size_t size() const;
    size_t field_count() const;
    void prepare(generation_context &);
    
    void add_field(field child);
    dependents_type dependent_fields() const;
    void accept_visitor(const visitor_type& visitor) const;
private:
    typedef std::vector<field> fields_type;

    fields_type fields;
    std::vector<bool> data;
};

typedef generic_block_field_impl<std::vector<bool>> bitfield_impl;

template<>
inline void generic_block_field_impl<std::vector<bool>>::set_value(double value)
{
    uint64_t value_int = value;
    for(auto iter = data.rbegin(); iter != data.rend(); ++iter) {
        *iter = value_int & 1;
        value_int >>= 1;
    }
    if(value_int > 0)
        throw value_too_large();
}

template<>
inline double generic_block_field_impl<std::vector<bool>>::get_value() const
{
    uint64_t value_int{};
    for(auto iter = data.rbegin(); iter != data.rend(); ++iter) {
        value_int = (value_int << 1) | static_cast<bool>(*iter);
    }
    return value_int;
}

#endif