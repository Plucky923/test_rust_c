pub mod bindings;
use crate::bindings::Mystruct;


#[no_mangle]
pub extern "C" fn op_my_struct(input: Mystruct) -> i32 {
    input.a + input.b + input.c
}
