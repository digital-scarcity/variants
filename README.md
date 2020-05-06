## eosio-cpp Segmentation Fault
Results in a segmentation fault.
```
eosio-cpp -I=include -R=ricardian src/variants.cpp -o=variants/variants.wasm
Warning, empty ricardian clause file
zsh: segmentation fault  eosio-cpp -I=include -R=ricardian src/variants.cpp -o=variants/variants.wasm
```

## Control group
Change to the map of integers by commenting out the variant lines and uncommenting the integer lines to see that it does compile with a similar type.

