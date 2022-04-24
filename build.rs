use std::env;
use std::path::PathBuf;

fn main() {
    println!("cargo:rustc-link-search=native=build/Release");
    println!("cargo:rustc-link-lib=my_lib");
    println!("cargo:rerun-if-changed=my_lib/source/wrapper.h");

    let bindings = bindgen::Builder::default()
        .header("my_lib/source/wrapper.h")
        .clang_arg("-v")
        .parse_callbacks(Box::new(bindgen::CargoCallbacks))
        .generate()
        .expect("Unable to generate bindings");

    let out_path = PathBuf::from(env::var("OUT_DIR").unwrap());
    bindings
        .write_to_file(out_path.join("bindings.rs"))
        .expect("Couldn't write bindings!");
}