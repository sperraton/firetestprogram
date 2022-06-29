/* Generated code for Python module 'wx.lib.agw.aui.aui_constants'
 * created by Nuitka version 0.8.4
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_wx$lib$agw$aui$aui_constants" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_wx$lib$agw$aui$aui_constants;
PyDictObject *moduledict_wx$lib$agw$aui$aui_constants;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[452];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[452];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("wx.lib.agw.aui.aui_constants"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 452; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_wx$lib$agw$aui$aui_constants(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 452; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5db6744f785b702f4e89737f6b483f4d;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[449]); CHECK_OBJECT(module_filename_obj);
    codeobj_5db6744f785b702f4e89737f6b483f4d = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[450], NULL, NULL, 0, 0, 0);
}

// The module function declarations.


// The module function definitions.


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_wx$lib$agw$aui$aui_constants[] = {

    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_wx$lib$agw$aui$aui_constants;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_wx$lib$agw$aui$aui_constants) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_wx$lib$agw$aui$aui_constants[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_wx$lib$agw$aui$aui_constants,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_wx$lib$agw$aui$aui_constants(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("wx.lib.agw.aui.aui_constants");

    // Store the module for future use.
    module_wx$lib$agw$aui$aui_constants = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIternext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("wx.lib.agw.aui.aui_constants: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("wx.lib.agw.aui.aui_constants: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("wx.lib.agw.aui.aui_constants: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initwx$lib$agw$aui$aui_constants\n");

    moduledict_wx$lib$agw$aui$aui_constants = MODULE_DICT(module_wx$lib$agw$aui$aui_constants);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_wx$lib$agw$aui$aui_constants,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_wx$lib$agw$aui$aui_constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[451]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_wx$lib$agw$aui$aui_constants,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_wx$lib$agw$aui$aui_constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_wx$lib$agw$aui$aui_constants,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_wx$lib$agw$aui$aui_constants);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_wx$lib$agw$aui$aui_constants);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5db6744f785b702f4e89737f6b483f4d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_5db6744f785b702f4e89737f6b483f4d = MAKE_MODULE_FRAME(codeobj_5db6744f785b702f4e89737f6b483f4d, module_wx$lib$agw$aui$aui_constants);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_5db6744f785b702f4e89737f6b483f4d);
    assert(Py_REFCNT(frame_5db6744f785b702f4e89737f6b483f4d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[9];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[11];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_wx$lib$agw$aui$aui_constants;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[12];
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 25;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[13];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_wx$lib$agw$aui$aui_constants;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[14];
        tmp_level_value_2 = mod_consts[12];
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 26;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_wx$lib$agw$aui$aui_constants,
                mod_consts[15],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_8);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[19];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_9);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[22];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_10);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[24];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_11);
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[25];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[27];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = mod_consts[29];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 61;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[31]);

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 68;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[33]);

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_3;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 83;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[35]);

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 100;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[37]);

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 108;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[39]);

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_6;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 118;
        tmp_assign_source_20 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[41]);

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_7;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 129;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_7, mod_consts[43]);

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_8;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 136;
        tmp_assign_source_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_8, mod_consts[45]);

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 151;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[47]);

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[82];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[84];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[86];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[88];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[90];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[92];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[93], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[94];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_left_value_3;
        PyObject *tmp_left_value_4;
        PyObject *tmp_left_value_5;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_1;
        PyObject *tmp_right_value_2;
        PyObject *tmp_right_value_3;
        PyObject *tmp_right_value_4;
        PyObject *tmp_right_value_5;
        PyObject *tmp_right_value_6;
        tmp_left_value_6 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_left_value_6 == NULL)) {
            tmp_left_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_left_value_6 == NULL));
        tmp_right_value_1 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_right_value_1 == NULL)) {
            tmp_right_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        assert(!(tmp_right_value_1 == NULL));
        tmp_left_value_5 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_6, tmp_right_value_1);
        assert(!(tmp_left_value_5 == NULL));
        tmp_right_value_2 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_right_value_2 == NULL)) {
            tmp_right_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        assert(!(tmp_right_value_2 == NULL));
        tmp_left_value_4 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_5, tmp_right_value_2);
        Py_DECREF(tmp_left_value_5);
        assert(!(tmp_left_value_4 == NULL));
        tmp_right_value_3 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_right_value_3 == NULL)) {
            tmp_right_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        assert(!(tmp_right_value_3 == NULL));
        tmp_left_value_3 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_4, tmp_right_value_3);
        Py_DECREF(tmp_left_value_4);
        assert(!(tmp_left_value_3 == NULL));
        tmp_right_value_4 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_right_value_4 == NULL)) {
            tmp_right_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_right_value_4 == NULL));
        tmp_left_value_2 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_3, tmp_right_value_4);
        Py_DECREF(tmp_left_value_3);
        assert(!(tmp_left_value_2 == NULL));
        tmp_right_value_5 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_right_value_5 == NULL)) {
            tmp_right_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        assert(!(tmp_right_value_5 == NULL));
        tmp_left_value_1 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_2, tmp_right_value_5);
        Py_DECREF(tmp_left_value_2);
        assert(!(tmp_left_value_1 == NULL));
        tmp_right_value_6 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_right_value_6 == NULL)) {
            tmp_right_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        assert(!(tmp_right_value_6 == NULL));
        tmp_assign_source_48 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_1, tmp_right_value_6);
        Py_DECREF(tmp_left_value_1);
        assert(!(tmp_assign_source_48 == NULL));
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_called_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 231;
        tmp_assign_source_49 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[97]);

        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_assign_source_56 == NULL)) {
            tmp_assign_source_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        assert(!(tmp_assign_source_56 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        tmp_assign_source_59 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        tmp_assign_source_60 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        tmp_assign_source_67 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = mod_consts[70];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        tmp_assign_source_69 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = mod_consts[74];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        tmp_assign_source_71 = mod_consts[76];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        tmp_assign_source_72 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_left_value_7;
        PyObject *tmp_left_value_8;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_7;
        PyObject *tmp_right_value_8;
        PyObject *tmp_right_value_9;
        tmp_left_value_9 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_left_value_9 == NULL)) {
            tmp_left_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        assert(!(tmp_left_value_9 == NULL));
        tmp_right_value_7 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_right_value_7 == NULL)) {
            tmp_right_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        assert(!(tmp_right_value_7 == NULL));
        tmp_left_value_8 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_9, tmp_right_value_7);
        assert(!(tmp_left_value_8 == NULL));
        tmp_right_value_8 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_right_value_8 == NULL)) {
            tmp_right_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        assert(!(tmp_right_value_8 == NULL));
        tmp_left_value_7 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_8, tmp_right_value_8);
        Py_DECREF(tmp_left_value_8);
        assert(!(tmp_left_value_7 == NULL));
        tmp_right_value_9 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_right_value_9 == NULL)) {
            tmp_right_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        assert(!(tmp_right_value_9 == NULL));
        tmp_assign_source_74 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_7, tmp_right_value_9);
        Py_DECREF(tmp_left_value_7);
        assert(!(tmp_assign_source_74 == NULL));
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        tmp_assign_source_75 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        tmp_assign_source_76 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        tmp_assign_source_78 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_81);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = mod_consts[134];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_82);
    }
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_83);
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = mod_consts[137];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_84);
    }
    {
        PyObject *tmp_assign_source_85;
        tmp_assign_source_85 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_85);
    }
    {
        PyObject *tmp_assign_source_86;
        tmp_assign_source_86 = mod_consts[141];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_86);
    }
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = mod_consts[143];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_87);
    }
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = mod_consts[145];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_88);
    }
    {
        PyObject *tmp_assign_source_89;
        tmp_assign_source_89 = mod_consts[147];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_89);
    }
    {
        PyObject *tmp_assign_source_90;
        tmp_assign_source_90 = mod_consts[149];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_90);
    }
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_91);
    }
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[152];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_92);
    }
    {
        PyObject *tmp_assign_source_93;
        tmp_assign_source_93 = mod_consts[154];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_93);
    }
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = mod_consts[156];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_94);
    }
    {
        PyObject *tmp_assign_source_95;
        tmp_assign_source_95 = mod_consts[158];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_95);
    }
    {
        PyObject *tmp_assign_source_96;
        tmp_assign_source_96 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_97);
    }
    {
        PyObject *tmp_assign_source_98;
        tmp_assign_source_98 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_98);
    }
    {
        PyObject *tmp_assign_source_99;
        tmp_assign_source_99 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        tmp_assign_source_100 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_100);
    }
    {
        PyObject *tmp_assign_source_101;
        tmp_assign_source_101 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_101);
    }
    {
        PyObject *tmp_assign_source_102;
        tmp_assign_source_102 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_103);
    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_104);
    }
    {
        PyObject *tmp_assign_source_105;
        tmp_assign_source_105 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_105);
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_106);
    }
    {
        PyObject *tmp_assign_source_107;
        tmp_assign_source_107 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[171], tmp_assign_source_107);
    }
    {
        PyObject *tmp_assign_source_108;
        tmp_assign_source_108 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_108);
    }
    {
        PyObject *tmp_assign_source_109;
        tmp_assign_source_109 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_109);
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = mod_consts[175];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[176], tmp_assign_source_111);
    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_112);
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_113);
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_114);
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = mod_consts[180];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_115);
    }
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = mod_consts[182];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_116);
    }
    {
        PyObject *tmp_assign_source_117;
        tmp_assign_source_117 = mod_consts[184];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_117);
    }
    {
        PyObject *tmp_assign_source_118;
        tmp_assign_source_118 = mod_consts[186];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_118);
    }
    {
        PyObject *tmp_assign_source_119;
        tmp_assign_source_119 = mod_consts[188];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_119);
    }
    {
        PyObject *tmp_assign_source_120;
        tmp_assign_source_120 = mod_consts[190];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_120);
    }
    {
        PyObject *tmp_assign_source_121;
        tmp_assign_source_121 = mod_consts[192];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_121);
    }
    {
        PyObject *tmp_assign_source_122;
        tmp_assign_source_122 = mod_consts[194];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_122);
    }
    {
        PyObject *tmp_assign_source_123;
        tmp_assign_source_123 = mod_consts[196];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[197], tmp_assign_source_123);
    }
    {
        PyObject *tmp_assign_source_124;
        tmp_assign_source_124 = mod_consts[198];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[199], tmp_assign_source_124);
    }
    {
        PyObject *tmp_assign_source_125;
        tmp_assign_source_125 = mod_consts[200];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        tmp_assign_source_126 = mod_consts[202];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = mod_consts[204];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        tmp_assign_source_128 = mod_consts[206];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_128);
    }
    {
        PyObject *tmp_assign_source_129;
        tmp_assign_source_129 = mod_consts[208];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_129);
    }
    {
        PyObject *tmp_assign_source_130;
        tmp_assign_source_130 = mod_consts[210];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_130);
    }
    {
        PyObject *tmp_assign_source_131;
        tmp_assign_source_131 = mod_consts[212];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_131);
    }
    {
        PyObject *tmp_assign_source_132;
        tmp_assign_source_132 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_132);
    }
    {
        PyObject *tmp_assign_source_133;
        tmp_assign_source_133 = mod_consts[216];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[217], tmp_assign_source_133);
    }
    {
        PyObject *tmp_assign_source_134;
        tmp_assign_source_134 = mod_consts[218];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[219], tmp_assign_source_134);
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_135);
    }
    {
        PyObject *tmp_assign_source_136;
        tmp_assign_source_136 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_136);
    }
    {
        PyObject *tmp_assign_source_137;
        tmp_assign_source_137 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[222], tmp_assign_source_137);
    }
    {
        PyObject *tmp_assign_source_138;
        tmp_assign_source_138 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[223], tmp_assign_source_138);
    }
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[224], tmp_assign_source_139);
    }
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[225], tmp_assign_source_140);
    }
    {
        PyObject *tmp_assign_source_141;
        tmp_assign_source_141 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[226], tmp_assign_source_141);
    }
    {
        PyObject *tmp_assign_source_142;
        tmp_assign_source_142 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[227], tmp_assign_source_142);
    }
    {
        PyObject *tmp_assign_source_143;
        tmp_assign_source_143 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[228], tmp_assign_source_143);
    }
    {
        PyObject *tmp_assign_source_144;
        tmp_assign_source_144 = mod_consts[108];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[229], tmp_assign_source_144);
    }
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[230], tmp_assign_source_145);
    }
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = mod_consts[231];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[232], tmp_assign_source_146);
    }
    {
        PyObject *tmp_assign_source_147;
        tmp_assign_source_147 = mod_consts[231];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_147);
    }
    {
        PyObject *tmp_assign_source_148;
        tmp_assign_source_148 = mod_consts[105];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_148);
    }
    {
        PyObject *tmp_assign_source_149;
        tmp_assign_source_149 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[235], tmp_assign_source_149);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[19];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_150;
        tmp_assign_source_150 = mod_consts[20];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_150);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[22];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;

            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_151;
        tmp_assign_source_151 = mod_consts[23];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_151);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_152;
        tmp_assign_source_152 = mod_consts[237];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[236], tmp_assign_source_152);
    }
    branch_end_4:;
    branch_end_3:;
    {
        PyObject *tmp_assign_source_153;
        tmp_assign_source_153 = mod_consts[238];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[239], tmp_assign_source_153);
    }
    {
        PyObject *tmp_assign_source_154;
        tmp_assign_source_154 = mod_consts[240];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[241], tmp_assign_source_154);
    }
    {
        PyObject *tmp_assign_source_155;
        tmp_assign_source_155 = mod_consts[242];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        tmp_assign_source_156 = mod_consts[244];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        tmp_assign_source_157 = LIST_COPY(mod_consts[246]);
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[247], tmp_assign_source_157);
    }
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_value_11;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 525;
        tmp_assign_source_158 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_11, mod_consts[248]);

        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[249], tmp_assign_source_158);
    }
    {
        PyObject *tmp_assign_source_159;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 542;
        tmp_assign_source_159 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_12, mod_consts[250]);

        if (tmp_assign_source_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[251], tmp_assign_source_159);
    }
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 559;
        tmp_assign_source_160 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_13, mod_consts[252]);

        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[253], tmp_assign_source_160);
    }
    {
        PyObject *tmp_assign_source_161;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 576;
        tmp_assign_source_161 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_14, mod_consts[254]);

        if (tmp_assign_source_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 576;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[255], tmp_assign_source_161);
    }
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 593;
        tmp_assign_source_162 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[256]);

        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 593;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[257], tmp_assign_source_162);
    }
    {
        PyObject *tmp_assign_source_163;
        PyObject *tmp_called_value_16;
        tmp_called_value_16 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_16 == NULL)) {
            tmp_called_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 610;
        tmp_assign_source_163 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[258]);

        if (tmp_assign_source_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 610;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[259], tmp_assign_source_163);
    }
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_called_value_17;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 627;
        tmp_assign_source_164 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[260]);

        if (tmp_assign_source_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 627;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[261], tmp_assign_source_164);
    }
    {
        PyObject *tmp_assign_source_165;
        PyObject *tmp_called_value_18;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 646;
        tmp_assign_source_165 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[262]);

        if (tmp_assign_source_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 646;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[263], tmp_assign_source_165);
    }
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_called_value_19;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 665;
        tmp_assign_source_166 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_19, mod_consts[264]);

        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 665;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[265], tmp_assign_source_166);
    }
    {
        PyObject *tmp_assign_source_167;
        PyObject *tmp_called_value_20;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 682;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 682;
        tmp_assign_source_167 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_20, mod_consts[266]);

        if (tmp_assign_source_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 682;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[267], tmp_assign_source_167);
    }
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_called_value_21;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 699;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 699;
        tmp_assign_source_168 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_21, mod_consts[268]);

        if (tmp_assign_source_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 699;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[269], tmp_assign_source_168);
    }
    {
        PyObject *tmp_assign_source_169;
        PyObject *tmp_called_value_22;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 715;
        tmp_assign_source_169 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_22, mod_consts[248]);

        if (tmp_assign_source_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 715;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_169);
    }
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_called_value_23;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 732;
        tmp_assign_source_170 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_23, mod_consts[271]);

        if (tmp_assign_source_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 732;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[272], tmp_assign_source_170);
    }
    {
        PyObject *tmp_assign_source_171;
        PyObject *tmp_called_value_24;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 748;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 748;
        tmp_assign_source_171 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[252]);

        if (tmp_assign_source_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 748;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[273], tmp_assign_source_171);
    }
    {
        PyObject *tmp_assign_source_172;
        PyObject *tmp_called_value_25;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 765;
        tmp_assign_source_172 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_25, mod_consts[274]);

        if (tmp_assign_source_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 765;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[275], tmp_assign_source_172);
    }
    {
        PyObject *tmp_assign_source_173;
        PyObject *tmp_called_value_26;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 781;
        tmp_assign_source_173 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_26, mod_consts[256]);

        if (tmp_assign_source_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 781;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[276], tmp_assign_source_173);
    }
    {
        PyObject *tmp_assign_source_174;
        PyObject *tmp_called_value_27;
        tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_27 == NULL)) {
            tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 798;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 798;
        tmp_assign_source_174 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_27, mod_consts[277]);

        if (tmp_assign_source_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 798;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[278], tmp_assign_source_174);
    }
    {
        PyObject *tmp_assign_source_175;
        PyObject *tmp_called_value_28;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 816;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 816;
        tmp_assign_source_175 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_28, mod_consts[260]);

        if (tmp_assign_source_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 816;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[279], tmp_assign_source_175);
    }
    {
        PyObject *tmp_assign_source_176;
        PyObject *tmp_called_value_29;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 835;
        tmp_assign_source_176 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_29, mod_consts[280]);

        if (tmp_assign_source_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 835;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[281], tmp_assign_source_176);
    }
    {
        PyObject *tmp_assign_source_177;
        PyObject *tmp_called_value_30;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 850;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 850;
        tmp_assign_source_177 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_30, mod_consts[264]);

        if (tmp_assign_source_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 850;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[282], tmp_assign_source_177);
    }
    {
        PyObject *tmp_assign_source_178;
        PyObject *tmp_called_value_31;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 867;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 867;
        tmp_assign_source_178 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[283]);

        if (tmp_assign_source_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 867;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[284], tmp_assign_source_178);
    }
    {
        PyObject *tmp_assign_source_179;
        PyObject *tmp_called_value_32;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 931;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 931;
        tmp_assign_source_179 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_32, mod_consts[285]);

        if (tmp_assign_source_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 931;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[286], tmp_assign_source_179);
    }
    {
        PyObject *tmp_assign_source_180;
        PyObject *tmp_called_value_33;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1017;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1017;
        tmp_assign_source_180 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[287]);

        if (tmp_assign_source_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1017;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[288], tmp_assign_source_180);
    }
    {
        PyObject *tmp_assign_source_181;
        PyObject *tmp_called_value_34;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1101;
        tmp_assign_source_181 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[289]);

        if (tmp_assign_source_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[290], tmp_assign_source_181);
    }
    {
        PyObject *tmp_assign_source_182;
        PyObject *tmp_called_value_35;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1184;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1184;
        tmp_assign_source_182 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_35, mod_consts[291]);

        if (tmp_assign_source_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1184;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[292], tmp_assign_source_182);
    }
    {
        PyObject *tmp_assign_source_183;
        PyObject *tmp_called_value_36;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1266;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1266;
        tmp_assign_source_183 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_36, mod_consts[293]);

        if (tmp_assign_source_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1266;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[294], tmp_assign_source_183);
    }
    {
        PyObject *tmp_assign_source_184;
        PyObject *tmp_called_value_37;
        tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_37 == NULL)) {
            tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1347;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1347;
        tmp_assign_source_184 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_37, mod_consts[295]);

        if (tmp_assign_source_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1347;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[296], tmp_assign_source_184);
    }
    {
        PyObject *tmp_assign_source_185;
        PyObject *tmp_called_value_38;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1431;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1431;
        tmp_assign_source_185 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_38, mod_consts[297]);

        if (tmp_assign_source_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1431;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[298], tmp_assign_source_185);
    }
    {
        PyObject *tmp_assign_source_186;
        PyObject *tmp_called_value_39;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1447;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1447;
        tmp_assign_source_186 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_39, mod_consts[299]);

        if (tmp_assign_source_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1447;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[300], tmp_assign_source_186);
    }
    {
        PyObject *tmp_assign_source_187;
        tmp_assign_source_187 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[300]);

        if (unlikely(tmp_assign_source_187 == NULL)) {
            tmp_assign_source_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[300]);
        }

        assert(!(tmp_assign_source_187 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[301], tmp_assign_source_187);
    }
    {
        PyObject *tmp_assign_source_188;
        PyObject *tmp_called_value_40;
        tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_40 == NULL)) {
            tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1477;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1477;
        tmp_assign_source_188 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_40, mod_consts[297]);

        if (tmp_assign_source_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1477;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[302], tmp_assign_source_188);
    }
    {
        PyObject *tmp_assign_source_189;
        PyObject *tmp_called_value_41;
        tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_41 == NULL)) {
            tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1493;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1493;
        tmp_assign_source_189 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_41, mod_consts[303]);

        if (tmp_assign_source_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1493;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[304], tmp_assign_source_189);
    }
    {
        PyObject *tmp_assign_source_190;
        PyObject *tmp_called_value_42;
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1510;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1510;
        tmp_assign_source_190 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_42, mod_consts[305]);

        if (tmp_assign_source_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1510;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[306], tmp_assign_source_190);
    }
    {
        PyObject *tmp_assign_source_191;
        tmp_assign_source_191 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[306]);

        if (unlikely(tmp_assign_source_191 == NULL)) {
            tmp_assign_source_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[306]);
        }

        assert(!(tmp_assign_source_191 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_191);
    }
    {
        PyObject *tmp_assign_source_192;
        PyObject *tmp_called_value_43;
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1539;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1539;
        tmp_assign_source_192 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_43, mod_consts[303]);

        if (tmp_assign_source_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1539;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_192);
    }
    {
        PyObject *tmp_assign_source_193;
        PyObject *tmp_called_value_44;
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1556;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1556;
        tmp_assign_source_193 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_44, mod_consts[309]);

        if (tmp_assign_source_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1556;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[310], tmp_assign_source_193);
    }
    {
        PyObject *tmp_assign_source_194;
        PyObject *tmp_called_value_45;
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1573;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1573;
        tmp_assign_source_194 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_45, mod_consts[311]);

        if (tmp_assign_source_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1573;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_194);
    }
    {
        PyObject *tmp_assign_source_195;
        tmp_assign_source_195 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[312]);

        if (unlikely(tmp_assign_source_195 == NULL)) {
            tmp_assign_source_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[312]);
        }

        assert(!(tmp_assign_source_195 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[313], tmp_assign_source_195);
    }
    {
        PyObject *tmp_assign_source_196;
        PyObject *tmp_called_value_46;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1601;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1601;
        tmp_assign_source_196 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_46, mod_consts[309]);

        if (tmp_assign_source_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1601;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[314], tmp_assign_source_196);
    }
    {
        PyObject *tmp_assign_source_197;
        PyObject *tmp_called_value_47;
        tmp_called_value_47 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_47 == NULL)) {
            tmp_called_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1618;
        tmp_assign_source_197 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_47, mod_consts[315]);

        if (tmp_assign_source_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1618;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_197);
    }
    {
        PyObject *tmp_assign_source_198;
        PyObject *tmp_called_value_48;
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1644;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1644;
        tmp_assign_source_198 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_48, mod_consts[317]);

        if (tmp_assign_source_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1644;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[318], tmp_assign_source_198);
    }
    {
        PyObject *tmp_assign_source_199;
        tmp_assign_source_199 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[318]);

        if (unlikely(tmp_assign_source_199 == NULL)) {
            tmp_assign_source_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[318]);
        }

        assert(!(tmp_assign_source_199 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[319], tmp_assign_source_199);
    }
    {
        PyObject *tmp_assign_source_200;
        PyObject *tmp_called_value_49;
        tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_49 == NULL)) {
            tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1677;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1677;
        tmp_assign_source_200 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_49, mod_consts[315]);

        if (tmp_assign_source_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1677;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_200);
    }
    {
        PyObject *tmp_assign_source_201;
        PyObject *tmp_called_value_50;
        tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_50 == NULL)) {
            tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1703;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1703;
        tmp_assign_source_201 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_50, mod_consts[321]);

        if (tmp_assign_source_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1703;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_201);
    }
    {
        PyObject *tmp_assign_source_202;
        PyObject *tmp_called_value_51;
        tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_51 == NULL)) {
            tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1720;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1720;
        tmp_assign_source_202 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_51, mod_consts[323]);

        if (tmp_assign_source_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1720;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[324], tmp_assign_source_202);
    }
    {
        PyObject *tmp_assign_source_203;
        tmp_assign_source_203 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[324]);

        if (unlikely(tmp_assign_source_203 == NULL)) {
            tmp_assign_source_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[324]);
        }

        assert(!(tmp_assign_source_203 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_203);
    }
    {
        PyObject *tmp_assign_source_204;
        PyObject *tmp_called_value_52;
        tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_52 == NULL)) {
            tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1750;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1750;
        tmp_assign_source_204 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_52, mod_consts[321]);

        if (tmp_assign_source_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1750;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_204);
    }
    {
        PyObject *tmp_assign_source_205;
        PyObject *tmp_called_value_53;
        tmp_called_value_53 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_53 == NULL)) {
            tmp_called_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1767;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1767;
        tmp_assign_source_205 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_53, mod_consts[327]);

        if (tmp_assign_source_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1767;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[328], tmp_assign_source_205);
    }
    {
        PyObject *tmp_assign_source_206;
        PyObject *tmp_called_value_54;
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1789;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1789;
        tmp_assign_source_206 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_54, mod_consts[329]);

        if (tmp_assign_source_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1789;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[330], tmp_assign_source_206);
    }
    {
        PyObject *tmp_assign_source_207;
        PyObject *tmp_called_value_55;
        tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_55 == NULL)) {
            tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1806;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1806;
        tmp_assign_source_207 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_55, mod_consts[331]);

        if (tmp_assign_source_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1806;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[332], tmp_assign_source_207);
    }
    {
        PyObject *tmp_assign_source_208;
        tmp_assign_source_208 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[332]);

        if (unlikely(tmp_assign_source_208 == NULL)) {
            tmp_assign_source_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[332]);
        }

        assert(!(tmp_assign_source_208 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[333], tmp_assign_source_208);
    }
    {
        PyObject *tmp_assign_source_209;
        PyObject *tmp_called_value_56;
        tmp_called_value_56 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_56 == NULL)) {
            tmp_called_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1842;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1842;
        tmp_assign_source_209 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_56, mod_consts[334]);

        if (tmp_assign_source_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1842;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[335], tmp_assign_source_209);
    }
    {
        PyObject *tmp_assign_source_210;
        tmp_assign_source_210 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[335]);

        if (unlikely(tmp_assign_source_210 == NULL)) {
            tmp_assign_source_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[335]);
        }

        assert(!(tmp_assign_source_210 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_210);
    }
    {
        PyObject *tmp_assign_source_211;
        PyObject *tmp_called_value_57;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1879;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1879;
        tmp_assign_source_211 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_57, mod_consts[337]);

        if (tmp_assign_source_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1879;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[338], tmp_assign_source_211);
    }
    {
        PyObject *tmp_assign_source_212;
        PyObject *tmp_called_value_58;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1939;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 1939;
        tmp_assign_source_212 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_58, mod_consts[339]);

        if (tmp_assign_source_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1939;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[340], tmp_assign_source_212);
    }
    {
        PyObject *tmp_assign_source_213;
        PyObject *tmp_called_value_59;
        tmp_called_value_59 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_59 == NULL)) {
            tmp_called_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2001;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2001;
        tmp_assign_source_213 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_59, mod_consts[341]);

        if (tmp_assign_source_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2001;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[342], tmp_assign_source_213);
    }
    {
        PyObject *tmp_assign_source_214;
        PyObject *tmp_called_value_60;
        tmp_called_value_60 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_60 == NULL)) {
            tmp_called_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2062;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2062;
        tmp_assign_source_214 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_60, mod_consts[343]);

        if (tmp_assign_source_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2062;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[344], tmp_assign_source_214);
    }
    {
        PyObject *tmp_assign_source_215;
        PyObject *tmp_called_value_61;
        tmp_called_value_61 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_61 == NULL)) {
            tmp_called_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2124;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2124;
        tmp_assign_source_215 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_61, mod_consts[345]);

        if (tmp_assign_source_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[346], tmp_assign_source_215);
    }
    {
        PyObject *tmp_assign_source_216;
        PyObject *tmp_called_value_62;
        tmp_called_value_62 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_62 == NULL)) {
            tmp_called_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2187;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2187;
        tmp_assign_source_216 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_62, mod_consts[347]);

        if (tmp_assign_source_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2187;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[348], tmp_assign_source_216);
    }
    {
        PyObject *tmp_assign_source_217;
        PyObject *tmp_called_value_63;
        tmp_called_value_63 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_63 == NULL)) {
            tmp_called_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2250;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2250;
        tmp_assign_source_217 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_63, mod_consts[349]);

        if (tmp_assign_source_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2250;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[350], tmp_assign_source_217);
    }
    {
        PyObject *tmp_assign_source_218;
        tmp_assign_source_218 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[350]);

        if (unlikely(tmp_assign_source_218 == NULL)) {
            tmp_assign_source_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[350]);
        }

        assert(!(tmp_assign_source_218 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[351], tmp_assign_source_218);
    }
    {
        PyObject *tmp_assign_source_219;
        PyObject *tmp_called_value_64;
        tmp_called_value_64 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_64 == NULL)) {
            tmp_called_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2286;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2286;
        tmp_assign_source_219 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_64, mod_consts[352]);

        if (tmp_assign_source_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2286;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[353], tmp_assign_source_219);
    }
    {
        PyObject *tmp_assign_source_220;
        tmp_assign_source_220 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[353]);

        if (unlikely(tmp_assign_source_220 == NULL)) {
            tmp_assign_source_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[353]);
        }

        assert(!(tmp_assign_source_220 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[354], tmp_assign_source_220);
    }
    {
        PyObject *tmp_assign_source_221;
        PyObject *tmp_called_value_65;
        tmp_called_value_65 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_65 == NULL)) {
            tmp_called_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2322;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2322;
        tmp_assign_source_221 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_65, mod_consts[355]);

        if (tmp_assign_source_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2322;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[356], tmp_assign_source_221);
    }
    {
        PyObject *tmp_assign_source_222;
        tmp_assign_source_222 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[356]);

        if (unlikely(tmp_assign_source_222 == NULL)) {
            tmp_assign_source_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[356]);
        }

        assert(!(tmp_assign_source_222 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[357], tmp_assign_source_222);
    }
    {
        PyObject *tmp_assign_source_223;
        PyObject *tmp_called_value_66;
        tmp_called_value_66 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_66 == NULL)) {
            tmp_called_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2358;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2358;
        tmp_assign_source_223 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_66, mod_consts[358]);

        if (tmp_assign_source_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2358;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[359], tmp_assign_source_223);
    }
    {
        PyObject *tmp_assign_source_224;
        tmp_assign_source_224 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[359]);

        if (unlikely(tmp_assign_source_224 == NULL)) {
            tmp_assign_source_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[359]);
        }

        assert(!(tmp_assign_source_224 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[360], tmp_assign_source_224);
    }
    {
        PyObject *tmp_assign_source_225;
        PyObject *tmp_called_value_67;
        tmp_called_value_67 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_67 == NULL)) {
            tmp_called_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2395;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2395;
        tmp_assign_source_225 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_67, mod_consts[361]);

        if (tmp_assign_source_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2395;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[362], tmp_assign_source_225);
    }
    {
        PyObject *tmp_assign_source_226;
        tmp_assign_source_226 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[362]);

        if (unlikely(tmp_assign_source_226 == NULL)) {
            tmp_assign_source_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[362]);
        }

        assert(!(tmp_assign_source_226 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[363], tmp_assign_source_226);
    }
    {
        PyObject *tmp_assign_source_227;
        PyObject *tmp_called_value_68;
        tmp_called_value_68 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_68 == NULL)) {
            tmp_called_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2431;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2431;
        tmp_assign_source_227 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_68, mod_consts[364]);

        if (tmp_assign_source_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2431;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[365], tmp_assign_source_227);
    }
    {
        PyObject *tmp_assign_source_228;
        tmp_assign_source_228 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[365]);

        if (unlikely(tmp_assign_source_228 == NULL)) {
            tmp_assign_source_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[365]);
        }

        assert(!(tmp_assign_source_228 == NULL));
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[366], tmp_assign_source_228);
    }
    {
        PyObject *tmp_assign_source_229;
        tmp_assign_source_229 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[328]);

        if (unlikely(tmp_assign_source_229 == NULL)) {
            tmp_assign_source_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[328]);
        }

        if (tmp_assign_source_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2468;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[367], tmp_assign_source_229);
    }
    {
        PyObject *tmp_assign_source_230;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2476;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_230 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[368]);
        if (tmp_assign_source_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2476;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[369], tmp_assign_source_230);
    }
    {
        PyObject *tmp_assign_source_231;
        PyObject *tmp_left_value_10;
        PyObject *tmp_right_value_10;
        tmp_left_value_10 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[369]);

        if (unlikely(tmp_left_value_10 == NULL)) {
            tmp_left_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[369]);
        }

        assert(!(tmp_left_value_10 == NULL));
        tmp_right_value_10 = mod_consts[51];
        tmp_assign_source_231 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_10, tmp_right_value_10);
        if (tmp_assign_source_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2478;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[370], tmp_assign_source_231);
    }
    {
        PyObject *tmp_assign_source_232;
        PyObject *tmp_left_value_11;
        PyObject *tmp_right_value_11;
        tmp_left_value_11 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[369]);

        if (unlikely(tmp_left_value_11 == NULL)) {
            tmp_left_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[369]);
        }

        if (tmp_left_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2480;

            goto frame_exception_exit_1;
        }
        tmp_right_value_11 = mod_consts[53];
        tmp_assign_source_232 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_11, tmp_right_value_11);
        if (tmp_assign_source_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2480;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[371], tmp_assign_source_232);
    }
    {
        PyObject *tmp_assign_source_233;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2482;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_233 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[372]);
        if (tmp_assign_source_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2482;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[372], tmp_assign_source_233);
    }
    {
        PyObject *tmp_assign_source_234;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2484;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_234 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[373]);
        if (tmp_assign_source_234 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2484;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[373], tmp_assign_source_234);
    }
    {
        PyObject *tmp_assign_source_235;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2486;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_235 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[374]);
        if (tmp_assign_source_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2486;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[374], tmp_assign_source_235);
    }
    {
        PyObject *tmp_assign_source_236;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2488;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_236 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[375]);
        if (tmp_assign_source_236 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2488;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_236);
    }
    {
        PyObject *tmp_assign_source_237;
        PyObject *tmp_left_value_12;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_right_value_12;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2490;

            goto frame_exception_exit_1;
        }
        tmp_left_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[376]);
        if (tmp_left_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2490;

            goto frame_exception_exit_1;
        }
        tmp_right_value_12 = mod_consts[377];
        tmp_assign_source_237 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_12, tmp_right_value_12);
        Py_DECREF(tmp_left_value_12);
        if (tmp_assign_source_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2490;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[378], tmp_assign_source_237);
    }
    {
        PyObject *tmp_assign_source_238;
        tmp_assign_source_238 = mod_consts[139];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_238);
    }
    {
        PyObject *tmp_assign_source_239;
        tmp_assign_source_239 = mod_consts[380];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[381], tmp_assign_source_239);
    }
    {
        PyObject *tmp_assign_source_240;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2498;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[382]);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2498;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[381]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[381]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 2498;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[381]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[381]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 2499;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[381]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[381]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 2500;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2498;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_240 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_69, call_args);
        }

        Py_DECREF(tmp_called_value_69);
        if (tmp_assign_source_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2498;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[383], tmp_assign_source_240);
    }
    {
        PyObject *tmp_assign_source_241;
        tmp_assign_source_241 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[384], tmp_assign_source_241);
    }
    {
        PyObject *tmp_assign_source_242;
        tmp_assign_source_242 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[385], tmp_assign_source_242);
    }
    {
        PyObject *tmp_assign_source_243;
        tmp_assign_source_243 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[386], tmp_assign_source_243);
    }
    {
        PyObject *tmp_assign_source_244;
        tmp_assign_source_244 = mod_consts[56];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[387], tmp_assign_source_244);
    }
    {
        PyObject *tmp_assign_source_245;
        tmp_assign_source_245 = mod_consts[58];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[388], tmp_assign_source_245);
    }
    {
        PyObject *tmp_assign_source_246;
        tmp_assign_source_246 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[389], tmp_assign_source_246);
    }
    {
        PyObject *tmp_assign_source_247;
        tmp_assign_source_247 = mod_consts[62];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[390], tmp_assign_source_247);
    }
    {
        PyObject *tmp_assign_source_248;
        tmp_assign_source_248 = mod_consts[64];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[391], tmp_assign_source_248);
    }
    {
        PyObject *tmp_assign_source_249;
        tmp_assign_source_249 = mod_consts[66];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[392], tmp_assign_source_249);
    }
    {
        PyObject *tmp_assign_source_250;
        tmp_assign_source_250 = mod_consts[68];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[393], tmp_assign_source_250);
    }
    {
        PyObject *tmp_assign_source_251;
        PyObject *tmp_left_value_13;
        PyObject *tmp_right_value_13;
        tmp_left_value_13 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[390]);

        if (unlikely(tmp_left_value_13 == NULL)) {
            tmp_left_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[390]);
        }

        assert(!(tmp_left_value_13 == NULL));
        tmp_right_value_13 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[384]);

        if (unlikely(tmp_right_value_13 == NULL)) {
            tmp_right_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[384]);
        }

        assert(!(tmp_right_value_13 == NULL));
        tmp_assign_source_251 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_13, tmp_right_value_13);
        assert(!(tmp_assign_source_251 == NULL));
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[394], tmp_assign_source_251);
    }
    {
        PyObject *tmp_assign_source_252;
        PyObject *tmp_left_value_14;
        PyObject *tmp_left_value_15;
        PyObject *tmp_right_value_14;
        PyObject *tmp_right_value_15;
        tmp_left_value_15 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[389]);

        if (unlikely(tmp_left_value_15 == NULL)) {
            tmp_left_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[389]);
        }

        assert(!(tmp_left_value_15 == NULL));
        tmp_right_value_14 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[392]);

        if (unlikely(tmp_right_value_14 == NULL)) {
            tmp_right_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[392]);
        }

        assert(!(tmp_right_value_14 == NULL));
        tmp_left_value_14 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_15, tmp_right_value_14);
        assert(!(tmp_left_value_14 == NULL));
        tmp_right_value_15 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[384]);

        if (unlikely(tmp_right_value_15 == NULL)) {
            tmp_right_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[384]);
        }

        assert(!(tmp_right_value_15 == NULL));
        tmp_assign_source_252 = BINARY_OPERATION_BITOR_OBJECT_LONG_LONG(tmp_left_value_14, tmp_right_value_15);
        Py_DECREF(tmp_left_value_14);
        assert(!(tmp_assign_source_252 == NULL));
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[395], tmp_assign_source_252);
    }
    {
        PyObject *tmp_assign_source_253;
        tmp_assign_source_253 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[396], tmp_assign_source_253);
    }
    {
        PyObject *tmp_assign_source_254;
        tmp_assign_source_254 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[397], tmp_assign_source_254);
    }
    {
        PyObject *tmp_assign_source_255;
        tmp_assign_source_255 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[398], tmp_assign_source_255);
    }
    {
        PyObject *tmp_assign_source_256;
        tmp_assign_source_256 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[399], tmp_assign_source_256);
    }
    {
        PyObject *tmp_assign_source_257;
        tmp_assign_source_257 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[400], tmp_assign_source_257);
    }
    {
        PyObject *tmp_assign_source_258;
        tmp_assign_source_258 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[401], tmp_assign_source_258);
    }
    {
        PyObject *tmp_assign_source_259;
        tmp_assign_source_259 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[402], tmp_assign_source_259);
    }
    {
        PyObject *tmp_assign_source_260;
        tmp_assign_source_260 = mod_consts[102];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[403], tmp_assign_source_260);
    }
    {
        PyObject *tmp_assign_source_261;
        tmp_assign_source_261 = mod_consts[12];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[404], tmp_assign_source_261);
    }
    {
        PyObject *tmp_assign_source_262;
        tmp_assign_source_262 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_262);
    }
    {
        PyObject *tmp_assign_source_263;
        tmp_assign_source_263 = mod_consts[53];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[406], tmp_assign_source_263);
    }
    {
        PyObject *tmp_assign_source_264;
        tmp_assign_source_264 = mod_consts[407];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[408], tmp_assign_source_264);
    }
    {
        PyObject *tmp_assign_source_265;
        tmp_assign_source_265 = mod_consts[409];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[410], tmp_assign_source_265);
    }
    {
        PyObject *tmp_assign_source_266;
        tmp_assign_source_266 = mod_consts[411];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[412], tmp_assign_source_266);
    }
    {
        PyObject *tmp_assign_source_267;
        tmp_assign_source_267 = mod_consts[413];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[414], tmp_assign_source_267);
    }
    {
        PyObject *tmp_assign_source_268;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2571;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2571;
        tmp_assign_source_268 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_1,
            mod_consts[382],
            &PyTuple_GET_ITEM(mod_consts[415], 0)
        );

        if (tmp_assign_source_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2571;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[416], tmp_assign_source_268);
    }
    {
        PyObject *tmp_assign_source_269;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2572;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2572;
        tmp_assign_source_269 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_2,
            mod_consts[382],
            &PyTuple_GET_ITEM(mod_consts[417], 0)
        );

        if (tmp_assign_source_269 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2572;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[418], tmp_assign_source_269);
    }
    {
        PyObject *tmp_assign_source_270;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2573;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2573;
        tmp_assign_source_270 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_3,
            mod_consts[382],
            &PyTuple_GET_ITEM(mod_consts[419], 0)
        );

        if (tmp_assign_source_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2573;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_270);
    }
    {
        PyObject *tmp_assign_source_271;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2574;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2574;
        tmp_assign_source_271 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_4,
            mod_consts[382],
            &PyTuple_GET_ITEM(mod_consts[421], 0)
        );

        if (tmp_assign_source_271 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2574;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_271);
    }
    {
        PyObject *tmp_assign_source_272;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2575;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_272 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[423]);
        if (tmp_assign_source_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2575;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[424], tmp_assign_source_272);
    }
    {
        PyObject *tmp_assign_source_273;
        PyObject *tmp_called_instance_5;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2576;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2576;
        tmp_assign_source_273 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_5,
            mod_consts[382],
            &PyTuple_GET_ITEM(mod_consts[425], 0)
        );

        if (tmp_assign_source_273 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2576;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[426], tmp_assign_source_273);
    }
    {
        PyObject *tmp_assign_source_274;
        PyObject *tmp_called_instance_6;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2577;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2577;
        tmp_assign_source_274 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_6,
            mod_consts[382],
            &PyTuple_GET_ITEM(mod_consts[427], 0)
        );

        if (tmp_assign_source_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2577;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[428], tmp_assign_source_274);
    }
    {
        PyObject *tmp_assign_source_275;
        PyObject *tmp_called_instance_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2578;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2578;
        tmp_assign_source_275 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_7,
            mod_consts[382],
            &PyTuple_GET_ITEM(mod_consts[429], 0)
        );

        if (tmp_assign_source_275 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2578;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[430], tmp_assign_source_275);
    }
    {
        PyObject *tmp_assign_source_276;
        PyObject *tmp_called_instance_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2579;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2579;
        tmp_assign_source_276 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_8,
            mod_consts[382],
            &PyTuple_GET_ITEM(mod_consts[431], 0)
        );

        if (tmp_assign_source_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2579;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[432], tmp_assign_source_276);
    }
    {
        PyObject *tmp_assign_source_277;
        PyObject *tmp_called_instance_9;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2580;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2580;
        tmp_assign_source_277 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_9,
            mod_consts[382],
            &PyTuple_GET_ITEM(mod_consts[433], 0)
        );

        if (tmp_assign_source_277 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2580;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[434], tmp_assign_source_277);
    }
    {
        PyObject *tmp_assign_source_278;
        PyObject *tmp_called_instance_10;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2581;

            goto frame_exception_exit_1;
        }
        frame_5db6744f785b702f4e89737f6b483f4d->m_frame.f_lineno = 2581;
        tmp_assign_source_278 = CALL_METHOD_WITH_ARGS3(
            tmp_called_instance_10,
            mod_consts[382],
            &PyTuple_GET_ITEM(mod_consts[435], 0)
        );

        if (tmp_assign_source_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2581;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[436], tmp_assign_source_278);
    }
    {
        PyObject *tmp_assign_source_279;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[437];
        tmp_assign_source_279 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_279 == NULL));
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_279;
    }
    {
        PyObject *tmp_assign_source_280;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_280 = UNPACK_NEXT_INFALLIBLE(tmp_unpack_1);
        assert(!(tmp_assign_source_280 == NULL));
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_280;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_281;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_281 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_281 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 2582;
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_281;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 2582;
                    goto try_except_handler_2;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[438];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 2582;
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_1;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
    Py_DECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_282;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_282 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[439], tmp_assign_source_282);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_283;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_283 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[440], tmp_assign_source_283);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_284;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = mod_consts[441];
        tmp_assign_source_284 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        assert(!(tmp_assign_source_284 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_284;
    }
    {
        PyObject *tmp_assign_source_285;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_285 = UNPACK_NEXT_INFALLIBLE(tmp_unpack_3);
        assert(!(tmp_assign_source_285 == NULL));
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_285;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_286;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_286 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_286 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 2583;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_286;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 2583;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[438];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 2583;
            goto try_except_handler_4;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
    Py_DECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_287;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_287 = tmp_tuple_unpack_2__element_1;
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[442], tmp_assign_source_287);
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_288;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_288 = tmp_tuple_unpack_2__element_2;
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[443], tmp_assign_source_288);
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_289;
        PyObject *tmp_iter_arg_3;
        tmp_iter_arg_3 = mod_consts[444];
        tmp_assign_source_289 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        assert(!(tmp_assign_source_289 == NULL));
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_289;
    }
    {
        PyObject *tmp_assign_source_290;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_290 = UNPACK_NEXT_INFALLIBLE(tmp_unpack_5);
        assert(!(tmp_assign_source_290 == NULL));
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_290;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_291;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_291 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_291 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 2584;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_291;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 2584;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[438];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 2584;
            goto try_except_handler_6;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
    Py_DECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5db6744f785b702f4e89737f6b483f4d);
#endif
    popFrameStack();

    assertFrameObject(frame_5db6744f785b702f4e89737f6b483f4d);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5db6744f785b702f4e89737f6b483f4d);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5db6744f785b702f4e89737f6b483f4d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5db6744f785b702f4e89737f6b483f4d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5db6744f785b702f4e89737f6b483f4d, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_292;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_292 = tmp_tuple_unpack_3__element_1;
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[445], tmp_assign_source_292);
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_293;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_293 = tmp_tuple_unpack_3__element_2;
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_293);
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_294;
        tmp_assign_source_294 = mod_consts[16];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[447], tmp_assign_source_294);
    }
    {
        PyObject *tmp_assign_source_295;
        tmp_assign_source_295 = mod_consts[51];
        UPDATE_STRING_DICT0(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)mod_consts[448], tmp_assign_source_295);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("wx.lib.agw.aui.aui_constants", false);

    return module_wx$lib$agw$aui$aui_constants;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_wx$lib$agw$aui$aui_constants, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("wx$lib$agw$aui$aui_constants", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
