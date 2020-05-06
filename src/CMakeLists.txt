project(variants)

set(EOSIO_WASM_OLD_BEHAVIOR "Off")
find_package(eosio.cdt)

add_contract( variants variants variants.cpp )
target_include_directories( variants PUBLIC ${CMAKE_SOURCE_DIR}/../include )
target_ricardian_directory( variants ${CMAKE_SOURCE_DIR}/../ricardian )