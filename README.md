bindgen hello.h -o bindings.rs
gcc -o test Mystruct.c libtest.a -lpthread -ldl