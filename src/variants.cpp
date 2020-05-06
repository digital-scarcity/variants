#include <variants.hpp>


void variants::setconfig(const map<string, variant<name, string, asset, uint64_t>> my_values) { 
   require_auth(get_self());

	config_table config_s(get_self(), get_self().value);
	Config c = config_s.get_or_create(get_self(), Config());
	
	c.variants = my_values;	
	config_s.set(c, get_self());
}


// void variants::setconfig(const map<string, uint64_t> my_values) { 
//    require_auth(get_self());

// 	config_table config_s(get_self(), get_self().value);
// 	Config c = config_s.get_or_create(get_self(), Config());
	
// 	c.ints = my_values;	
// 	config_s.set(c, get_self());
// }