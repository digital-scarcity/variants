#include <eosio/eosio.hpp>
#include <eosio/asset.hpp>
#include <eosio/singleton.hpp>

using namespace eosio;
using std::variant;
using std::map;
using std::string;

CONTRACT variants : public contract {
   public:
      using contract::contract;

   struct [[eosio::table, eosio::contract("variants")]] Config
   {
      map<string, variant<name, string, asset, uint64_t>> variants;
      // map<string, uint64_t> ints;       
   };

   typedef singleton<name("config"), Config> config_table;
   
   ACTION setconfig(const map<string, variant<name, string, asset, uint64_t>> my_values) ;
   // ACTION setconfig(const map<string, uint64_t> ints) ;
};