
  const char features[] = {"\n"
"C_FEATURE:"
<<<<<<< HEAD
#if (__GNUC__ * 100 + __GNUC_MINOR__) >= 304
=======
#if ((__clang_major__ * 100) + __clang_minor__) >= 400
>>>>>>> f2cc599249e467a1434858c5bf71b79737a30076
"1"
#else
"0"
#endif
"c_function_prototypes\n"
"C_FEATURE:"
<<<<<<< HEAD
#if (__GNUC__ * 100 + __GNUC_MINOR__) >= 304 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
=======
#if ((__clang_major__ * 100) + __clang_minor__) >= 400 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
>>>>>>> f2cc599249e467a1434858c5bf71b79737a30076
"1"
#else
"0"
#endif
"c_restrict\n"
"C_FEATURE:"
<<<<<<< HEAD
#if (__GNUC__ * 100 + __GNUC_MINOR__) >= 406 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201000L
=======
#if ((__clang_major__ * 100) + __clang_minor__) >= 400 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 201112L
>>>>>>> f2cc599249e467a1434858c5bf71b79737a30076
"1"
#else
"0"
#endif
"c_static_assert\n"
"C_FEATURE:"
<<<<<<< HEAD
#if (__GNUC__ * 100 + __GNUC_MINOR__) >= 304 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
=======
#if ((__clang_major__ * 100) + __clang_minor__) >= 400 && defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
>>>>>>> f2cc599249e467a1434858c5bf71b79737a30076
"1"
#else
"0"
#endif
"c_variadic_macros\n"

};

int main(int argc, char** argv) { (void)argv; return features[argc]; }
