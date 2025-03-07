#ifdef COMMONSTART
__COMMONSTART = DIAG_START_COMMON,
#undef COMMONSTART
#endif

DIAG(err_arcmt_nsinvocation_ownership, CLASS_ERROR, (unsigned)diag::Severity::Error, "NSInvocation's %0 is not safe to be used with an object with ownership other than __unsafe_unretained", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_asm_invalid_type_in_input, CLASS_ERROR, (unsigned)diag::Severity::Error, "invalid type %0 in asm input for constraint '%1'", 0, SFINAE_SubstitutionFailure, false, true, 12)
DIAG(err_attribute_not_type_attr, CLASS_ERROR, (unsigned)diag::Severity::Error, "%0 attribute cannot be applied to types", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_attribute_uuid_malformed_guid, CLASS_ERROR, (unsigned)diag::Severity::Error, "uuid attribute contains a malformed GUID", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_cannot_open_file, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "cannot open file '%0': %1", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_default_special_members, CLASS_ERROR, (unsigned)diag::Severity::Error, "only special member functions may be defaulted", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_deleted_non_function, CLASS_ERROR, (unsigned)diag::Severity::Error, "only functions can have deleted definitions", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_duplicate_declspec, CLASS_ERROR, (unsigned)diag::Severity::Error, "duplicate '%0' declaration specifier", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_enum_template, CLASS_ERROR, (unsigned)diag::Severity::Error, "enumeration cannot be a template", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_expected, CLASS_ERROR, (unsigned)diag::Severity::Error, "expected %0", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_expected_after, CLASS_ERROR, (unsigned)diag::Severity::Error, "expected %1 after %0", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_expected_colon_after_setter_name, CLASS_ERROR, (unsigned)diag::Severity::Error, "method name referenced in property setter attribute must end with ':'", 0, SFINAE_SubstitutionFailure, false, true, 1)
DIAG(err_expected_either, CLASS_ERROR, (unsigned)diag::Severity::Error, "expected %0 or %1", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_expected_namespace_name, CLASS_ERROR, (unsigned)diag::Severity::Error, "expected namespace name", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_expected_string_literal, CLASS_ERROR, (unsigned)diag::Severity::Error, "expected string literal %select{in %1|for diagnostic message in static_assert|for optional message in 'availability' attribute|for %select{language|source container}1 name in 'external_source_symbol' attribute}0", 0, SFINAE_SubstitutionFailure, false, true, 1)
DIAG(err_file_modified, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "file '%0' modified since it was first processed", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_file_too_large, CLASS_ERROR, (unsigned)diag::Severity::Error, "sorry, unsupported: file '%0' is too large for Clang to process", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_fixed_point_not_enabled, CLASS_ERROR, (unsigned)diag::Severity::Error, "compile with '-ffixed-point' to enable fixed point types", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_friend_decl_spec, CLASS_ERROR, (unsigned)diag::Severity::Error, "'%0' is invalid in friend declarations", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_integer_literal_too_large, CLASS_ERROR, (unsigned)diag::Severity::Error, "integer literal is too large to be represented in any %select{signed |}0integer type", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_invalid_character_udl, CLASS_ERROR, (unsigned)diag::Severity::Error, "character literal with user-defined suffix cannot be used here", 0, SFINAE_SubstitutionFailure, false, true, 1)
DIAG(err_invalid_member_in_interface, CLASS_ERROR, (unsigned)diag::Severity::Error, "%select{data member |non-public member function |static member function |user-declared constructor|user-declared destructor|operator |nested class }0%1 is not permitted within an interface type", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_invalid_numeric_udl, CLASS_ERROR, (unsigned)diag::Severity::Error, "numeric literal with user-defined suffix cannot be used here", 0, SFINAE_SubstitutionFailure, false, true, 1)
DIAG(err_invalid_storage_class_in_func_decl, CLASS_ERROR, (unsigned)diag::Severity::Error, "invalid storage class specifier in function declarator", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_invalid_string_udl, CLASS_ERROR, (unsigned)diag::Severity::Error, "string literal with user-defined suffix cannot be used here", 0, SFINAE_SubstitutionFailure, false, true, 1)
DIAG(err_mips_fp64_req, CLASS_ERROR, (unsigned)diag::Severity::Error, "'%0' can only be used if the target supports the mfhc1 and mthc1 instructions", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_module_build_disabled, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "module '%0' is needed but has not been provided, and implicit use of module files is disabled", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_module_build_shadowed_submodule, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "build a shadowed submodule '%0'", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_module_cycle, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "cyclic dependency in module '%0': %1", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_module_format_unhandled, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "no handler registered for module format '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_module_header_missing, CLASS_ERROR, (unsigned)diag::Severity::Error, "%select{|umbrella }0header '%1' not found", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_module_not_built, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "could not build module '%0'", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_module_not_found, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "module '%0' not found", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_module_prebuilt, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "error in loading module '%0' from prebuilt module path", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_module_shadowed, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "import of shadowed module '%0'", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_module_unavailable, CLASS_ERROR, (unsigned)diag::Severity::Error, "module '%0' %select{is incompatible with|requires}1 feature '%2'", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_mt_message, CLASS_ERROR, (unsigned)diag::Severity::Error, "[rewriter] %0", 0, SFINAE_SubstitutionFailure, false, false, 0)
DIAG(err_nullability_conflicting, CLASS_ERROR, (unsigned)diag::Severity::Error, "nullability specifier %0 conflicts with existing specifier %1", 0, SFINAE_SubstitutionFailure, false, true, 21)
DIAG(err_omp_more_one_clause, CLASS_ERROR, (unsigned)diag::Severity::Error, "directive '#pragma omp %0' cannot contain more than one '%1' clause%select{| with '%3' name modifier| with 'source' dependence}2", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_opencl_unknown_type_specifier, CLASS_ERROR, (unsigned)diag::Severity::Error, "%select{OpenCL C|C++ for OpenCL}0 version %1 does not support the '%2' %select{type qualifier|storage class specifier}3", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_openclcxx_not_supported, CLASS_ERROR, (unsigned)diag::Severity::Error, "'%0' is not supported in C++ for OpenCL", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_opt_not_valid_on_target, CLASS_ERROR, (unsigned)diag::Severity::Error, "option '%0' cannot be specified on this target", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_opt_not_valid_with_opt, CLASS_ERROR, (unsigned)diag::Severity::Error, "option '%0' cannot be specified with '%1'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_opt_not_valid_without_opt, CLASS_ERROR, (unsigned)diag::Severity::Error, "option '%0' cannot be specified without '%1'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_param_redefinition, CLASS_ERROR, (unsigned)diag::Severity::Error, "redefinition of parameter %0", 0, SFINAE_SubstitutionFailure, false, true, 4)
DIAG(err_seh___except_block, CLASS_ERROR, (unsigned)diag::Severity::Error, "%0 only allowed in __except block or filter expression", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_seh___except_filter, CLASS_ERROR, (unsigned)diag::Severity::Error, "%0 only allowed in __except filter expression", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_seh___finally_block, CLASS_ERROR, (unsigned)diag::Severity::Error, "%0 only allowed in __finally block", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_seh_expected_handler, CLASS_ERROR, (unsigned)diag::Severity::Error, "expected '__except' or '__finally' block", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_target_unknown_abi, CLASS_ERROR, (unsigned)diag::Severity::Error, "unknown target ABI '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_target_unknown_cpu, CLASS_ERROR, (unsigned)diag::Severity::Error, "unknown target CPU '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_target_unknown_fpmath, CLASS_ERROR, (unsigned)diag::Severity::Error, "unknown FP unit '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_target_unknown_triple, CLASS_ERROR, (unsigned)diag::Severity::Error, "unknown target triple '%0', please use -triple or -arch", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_target_unsupported_abi, CLASS_ERROR, (unsigned)diag::Severity::Error, "ABI '%0' is not supported on CPU '%1'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_target_unsupported_abi_for_triple, CLASS_ERROR, (unsigned)diag::Severity::Error, "ABI '%0' is not supported for '%1'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_target_unsupported_cpu_for_micromips, CLASS_ERROR, (unsigned)diag::Severity::Error, "micromips is not supported for target CPU '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_target_unsupported_execute_only, CLASS_ERROR, (unsigned)diag::Severity::Error, "execute only is not supported for the %0 sub-architecture", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_target_unsupported_fpmath, CLASS_ERROR, (unsigned)diag::Severity::Error, "the '%0' unit is not supported with this instruction set", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_target_unsupported_mcmse, CLASS_ERROR, (unsigned)diag::Severity::Error, "-mcmse is not supported for %0", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_target_unsupported_unaligned, CLASS_ERROR, (unsigned)diag::Severity::Error, "the %0 sub-architecture does not support unaligned accesses", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_too_large_for_fixed_point, CLASS_ERROR, (unsigned)diag::Severity::Error, "this value is too large for this fixed point type", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_unable_to_make_temp, CLASS_ERROR, (unsigned)diag::Severity::Error, "unable to make temporary file: %0", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_unable_to_rename_temp, CLASS_ERROR, (unsigned)diag::Severity::Error, "unable to rename temporary '%0' to output file '%1': '%2'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_unimplemented_conversion_with_fixed_point_type, CLASS_ERROR, (unsigned)diag::Severity::Error, "conversion between fixed point and %0 is not yet supported", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_unknown_analyzer_checker, CLASS_ERROR, (unsigned)diag::Severity::Error, "no analyzer checkers or packages are associated with '%0'", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_unsupported_abi_for_opt, CLASS_ERROR, (unsigned)diag::Severity::Error, "'%0' can only be used with the '%1' ABI", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_unsupported_bom, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "%0 byte order mark detected in '%1', but encoding is not supported", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(err_use_of_tag_name_without_tag, CLASS_ERROR, (unsigned)diag::Severity::Error, "must use '%1' tag to refer to type %0%select{| in this scope}2", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(ext_c99_longlong, CLASS_EXTENSION, (unsigned)diag::Severity::Ignored, "'long long' is an extension when C99 mode is not enabled", 369, SFINAE_Suppress, false, false, 0)
DIAG(ext_clang_diagnose_if, CLASS_EXTENSION, (unsigned)diag::Severity::Ignored, "'diagnose_if' is a clang extension", 257, SFINAE_Suppress, false, false, 0)
DIAG(ext_clang_enable_if, CLASS_EXTENSION, (unsigned)diag::Severity::Ignored, "'enable_if' is a clang extension", 257, SFINAE_Suppress, false, false, 0)
DIAG(ext_cxx11_longlong, CLASS_EXTENSION, (unsigned)diag::Severity::Ignored, "'long long' is a C++11 extension", 84, SFINAE_Suppress, false, false, 0)
DIAG(ext_duplicate_declspec, CLASS_EXTENSION, (unsigned)diag::Severity::Ignored, "duplicate '%0' declaration specifier", 197, SFINAE_Suppress, false, false, 0)
DIAG(ext_integer_literal_too_large_for_signed, CLASS_EXTENSION, (unsigned)diag::Severity::Warning, "integer literal is too large to be represented in a signed integer type, interpreting as unsigned", 308, SFINAE_Suppress, false, false, 0)
DIAG(ext_old_implicitly_unsigned_long_cxx, CLASS_EXTENSION, (unsigned)diag::Severity::Warning, "integer literal is too large to be represented in type 'long' and is subject to undefined behavior under C++98, interpreting as 'unsigned long'; this literal will %select{have type 'long long'|be ill-formed}0 in C++11 onwards", 77, SFINAE_Suppress, false, false, 0)
DIAG(ext_variadic_templates, CLASS_EXTENSION, (unsigned)diag::Severity::Warning, "variadic templates are a C++11 extension", 81, SFINAE_Suppress, false, false, 4)
DIAG(ext_warn_duplicate_declspec, CLASS_EXTENSION, (unsigned)diag::Severity::Warning, "duplicate '%0' declaration specifier", 197, SFINAE_Suppress, false, false, 0)
DIAG(fatal_too_many_errors, CLASS_ERROR, (unsigned)diag::Severity::Fatal, "too many errors emitted, stopping now", 0, SFINAE_SubstitutionFailure, false, true, 0)
DIAG(note_also_found, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "also found", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_decl_hiding_tag_type, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "%1 %0 is hidden by a non-type declaration of %0 here", 0, SFINAE_Suppress, false, false, 4)
DIAG(note_declared_at, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "declared here", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_duplicate_case_prev, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "previous case defined here", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_forward_declaration, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "forward declaration of %0", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_invalid_subexpr_in_const_expr, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "subexpression not valid in a constant expression", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_matching, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "to match this %0", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_mt_message, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "[rewriter] %0", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_possibility, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "one possibility", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_pragma_entered_here, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "#pragma entered here", 0, SFINAE_Suppress, false, false, 4)
DIAG(note_previous_declaration, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "previous declaration is here", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_previous_definition, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "previous definition is here", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_previous_implicit_declaration, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "previous implicit declaration is here", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_previous_use, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "previous use is here", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_suggest_disabling_all_checkers, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "use -analyzer-disable-all-checks to disable all static analyzer checkers", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_type_being_defined, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "definition of %0 is not complete until the closing '}'", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_using, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "using", 0, SFINAE_Suppress, false, false, 0)
DIAG(note_valid_options, CLASS_NOTE, (unsigned)diag::Severity::Fatal, "valid target CPU values are: %0", 0, SFINAE_Suppress, false, false, 0)
DIAG(remark_module_lock_failure, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "could not acquire lock file for module '%0': %1", 428, SFINAE_Suppress, false, false, 4)
DIAG(remark_module_lock_timeout, CLASS_REMARK, (unsigned)diag::Severity::Ignored, "timed out waiting to acquire lock file for module '%0'", 428, SFINAE_Suppress, false, false, 4)
DIAG(warn_arcmt_nsalloc_realloc, CLASS_WARNING, (unsigned)diag::Severity::Warning, "[rewriter] call returns pointer to GC managed memory; it will become unmanaged in ARC", 0, SFINAE_Suppress, false, false, 0)
DIAG(warn_conflicting_nullability_attr_overriding_param_types, CLASS_WARNING, (unsigned)diag::Severity::Warning, "conflicting nullability specifier on parameter types, %0 conflicts with existing specifier %1", 468, SFINAE_Suppress, false, false, 21)
DIAG(warn_conflicting_nullability_attr_overriding_ret_types, CLASS_WARNING, (unsigned)diag::Severity::Warning, "conflicting nullability specifier on return types, %0 conflicts with existing specifier %1", 468, SFINAE_Suppress, false, false, 21)
DIAG(warn_cxx20_compat_consteval, CLASS_WARNING, (unsigned)diag::Severity::Ignored, "consteval is incompatible with C++ standards before C++20", 98, SFINAE_Suppress, false, false, 0)
DIAG(warn_cxx98_compat_longlong, CLASS_WARNING, (unsigned)diag::Severity::Ignored, "'long long' is incompatible with C++98", 112, SFINAE_Suppress, false, false, 0)
DIAG(warn_cxx98_compat_variadic_templates, CLASS_WARNING, (unsigned)diag::Severity::Ignored, "variadic templates are incompatible with C++98", 108, SFINAE_Suppress, false, false, 4)
DIAG(warn_dup_category_def, CLASS_WARNING, (unsigned)diag::Severity::Warning, "duplicate definition of category %1 on interface %0", 0, SFINAE_Suppress, false, false, 0)
DIAG(warn_duplicate_declspec, CLASS_WARNING, (unsigned)diag::Severity::Warning, "duplicate '%0' declaration specifier", 197, SFINAE_Suppress, false, false, 0)
DIAG(warn_method_param_declaration, CLASS_WARNING, (unsigned)diag::Severity::Ignored, "redeclaration of method parameter %0", 199, SFINAE_Suppress, false, false, 4)
DIAG(warn_method_param_redefinition, CLASS_WARNING, (unsigned)diag::Severity::Warning, "redefinition of method parameter %0", 0, SFINAE_Suppress, false, false, 4)
DIAG(warn_mt_message, CLASS_WARNING, (unsigned)diag::Severity::Warning, "[rewriter] %0", 0, SFINAE_Suppress, false, false, 0)
DIAG(warn_nullability_duplicate, CLASS_WARNING, (unsigned)diag::Severity::Warning, "duplicate nullability specifier %0", 468, SFINAE_Suppress, false, false, 21)
DIAG(warn_old_implicitly_unsigned_long, CLASS_WARNING, (unsigned)diag::Severity::Warning, "integer literal is too large to be represented in type 'long', interpreting as 'unsigned long' per C89; this literal will %select{have type 'long long'|be ill-formed}0 in C99 onwards", 115, SFINAE_Suppress, false, false, 0)
DIAG(warn_old_implicitly_unsigned_long_cxx, CLASS_WARNING, (unsigned)diag::Severity::Warning, "integer literal is too large to be represented in type 'long', interpreting as 'unsigned long' per C++98; this literal will %select{have type 'long long'|be ill-formed}0 in C++11 onwards", 77, SFINAE_Suppress, false, false, 0)
DIAG(warn_unknown_attribute_ignored, CLASS_WARNING, (unsigned)diag::Severity::Warning, "unknown attribute %0 ignored", 710, SFINAE_Suppress, false, false, 0)
