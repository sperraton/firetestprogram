/* Generated code for Python module 'Dialogs.DialogViewSensors'
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

/* The "module_Dialogs$DialogViewSensors" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Dialogs$DialogViewSensors;
PyDictObject *moduledict_Dialogs$DialogViewSensors;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[260];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[260];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("Dialogs.DialogViewSensors"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 260; i++) {
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
void checkModuleConstants_Dialogs$DialogViewSensors(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 260; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_aa7ed55aa8079c15ea1cc19bb533e24c;
static PyCodeObject *codeobj_c7a721a20b956c4c1229252f7516a272;
static PyCodeObject *codeobj_dad5749985010a2735e6861906bedf81;
static PyCodeObject *codeobj_d3a6df731b2f518925d52ff8636a91a6;
static PyCodeObject *codeobj_816f386eb8de2e055589bd6cf1e550fd;
static PyCodeObject *codeobj_7afd1c090109336967644644970b091e;
static PyCodeObject *codeobj_748f4072d035fb7c7c090acfd6bd87df;
static PyCodeObject *codeobj_e5e2f6814800b2b264ce757320664c63;
static PyCodeObject *codeobj_5da6d0a57b34789d330054a2dcb30b7e;
static PyCodeObject *codeobj_5190e95e8778180536204706603c406a;
static PyCodeObject *codeobj_bd365e49bb477a1a787d9b87a6aa7642;
static PyCodeObject *codeobj_c73d17e2852f62618c05d945f5069e9c;
static PyCodeObject *codeobj_3f0c4663cd74ed79ec03a8ca0c907a74;
static PyCodeObject *codeobj_27e38515a8b823c314d4af38e76ff8ae;
static PyCodeObject *codeobj_11b8d9d6213ecd5c920c49f452194da2;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[243]); CHECK_OBJECT(module_filename_obj);
    codeobj_aa7ed55aa8079c15ea1cc19bb533e24c = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[244], NULL, NULL, 0, 0, 0);
    codeobj_c7a721a20b956c4c1229252f7516a272 = MAKE_CODEOBJECT(module_filename_obj, 10, CO_NOFREE, mod_consts[221], mod_consts[245], NULL, 0, 0, 0);
    codeobj_dad5749985010a2735e6861906bedf81 = MAKE_CODEOBJECT(module_filename_obj, 12, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[2], mod_consts[246], NULL, 2, 0, 0);
    codeobj_d3a6df731b2f518925d52ff8636a91a6 = MAKE_CODEOBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[247], NULL, 1, 0, 0);
    codeobj_816f386eb8de2e055589bd6cf1e550fd = MAKE_CODEOBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[117], mod_consts[248], NULL, 2, 0, 0);
    codeobj_7afd1c090109336967644644970b091e = MAKE_CODEOBJECT(module_filename_obj, 323, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[249], NULL, 3, 0, 0);
    codeobj_748f4072d035fb7c7c090acfd6bd87df = MAKE_CODEOBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[250], NULL, 2, 0, 0);
    codeobj_e5e2f6814800b2b264ce757320664c63 = MAKE_CODEOBJECT(module_filename_obj, 458, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[251], NULL, 2, 0, 0);
    codeobj_5da6d0a57b34789d330054a2dcb30b7e = MAKE_CODEOBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[125], mod_consts[252], NULL, 2, 0, 0);
    codeobj_5190e95e8778180536204706603c406a = MAKE_CODEOBJECT(module_filename_obj, 294, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[253], NULL, 2, 0, 0);
    codeobj_bd365e49bb477a1a787d9b87a6aa7642 = MAKE_CODEOBJECT(module_filename_obj, 430, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[119], mod_consts[254], NULL, 2, 0, 0);
    codeobj_c73d17e2852f62618c05d945f5069e9c = MAKE_CODEOBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[111], mod_consts[255], NULL, 2, 0, 0);
    codeobj_3f0c4663cd74ed79ec03a8ca0c907a74 = MAKE_CODEOBJECT(module_filename_obj, 374, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[85], mod_consts[256], NULL, 2, 0, 0);
    codeobj_27e38515a8b823c314d4af38e76ff8ae = MAKE_CODEOBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[137], mod_consts[257], NULL, 6, 0, 0);
    codeobj_11b8d9d6213ecd5c920c49f452194da2 = MAKE_CODEOBJECT(module_filename_obj, 301, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[143], mod_consts[258], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__3__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__10_onThermocoupleSelect();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__11_onAdd();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__12_onRemove();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__13_onLabelChange();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__1___init__();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__2_loadSavedSelections();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__3_onOK();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__4_onQuit();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__5_tryToConnect();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__6_onValueChange();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__7_onAttach();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__8_onCalibrate();


static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__9_onSerialSelect();


// The module function definitions.
static PyObject *impl_Dialogs$DialogViewSensors$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_parent = python_pars[1];
    PyObject *var_thermocoupleGroup = NULL;
    PyObject *var_thermocoupleSizer = NULL;
    PyObject *var_pressureGroup = NULL;
    PyObject *var_pressureSizer = NULL;
    PyObject *var_instructionsSizer = NULL;
    PyObject *var_thermocoupleColumnSizers = NULL;
    PyObject *var_pressureGridSizer = NULL;
    PyObject *var_btnSizer = NULL;
    PyObject *var_channelsSizer = NULL;
    PyObject *var_topSizer = NULL;
    PyObject *var_numTCRows = NULL;
    PyObject *var_tabIdx = NULL;
    PyObject *var_index = NULL;
    PyObject *var_height = NULL;
    PyObject *var_width = NULL;
    PyObject *var_h = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_tabPanel = NULL;
    PyObject *var_serialList = NULL;
    PyObject *var_labelString = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_dad5749985010a2735e6861906bedf81;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_dad5749985010a2735e6861906bedf81 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dad5749985010a2735e6861906bedf81)) {
        Py_XDECREF(cache_frame_dad5749985010a2735e6861906bedf81);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dad5749985010a2735e6861906bedf81 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dad5749985010a2735e6861906bedf81 = MAKE_FUNCTION_FRAME(codeobj_dad5749985010a2735e6861906bedf81, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_dad5749985010a2735e6861906bedf81->m_type_description == NULL);
    frame_dad5749985010a2735e6861906bedf81 = cache_frame_dad5749985010a2735e6861906bedf81;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_dad5749985010a2735e6861906bedf81);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_dad5749985010a2735e6861906bedf81) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(par_parent);
        tmp_args_element_value_2 = par_parent;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 13;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 13;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[4];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 13;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_assattr_target_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_5 = par_self;
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 15;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[5], tmp_args_element_value_5);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_parent);
        tmp_assattr_value_2 = par_parent;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[7], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[8], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[9], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[10], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        tmp_assattr_value_6 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[11], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[12], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[13], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_value_9 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[14], tmp_assattr_value_9);
        Py_DECREF(tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_value_10 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[15], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_assattr_target_11;
        tmp_assattr_value_11 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[16], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        tmp_assattr_value_12 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[17], tmp_assattr_value_12);
        Py_DECREF(tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[18], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[19], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_value_15 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[20], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = PyList_New(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[21], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[22]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_6 = par_self;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 42;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[3]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 42;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = mod_consts[23];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_thermocoupleGroup == NULL);
        var_thermocoupleGroup = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[24]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_thermocoupleGroup);
        tmp_args_element_value_9 = var_thermocoupleGroup;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 43;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[25]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 43;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_thermocoupleSizer == NULL);
        var_thermocoupleSizer = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[22]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_11 = par_self;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 44;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[3]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 44;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_13 = mod_consts[26];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pressureGroup == NULL);
        var_pressureGroup = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_expression_value_11;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[24]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pressureGroup);
        tmp_args_element_value_14 = var_pressureGroup;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 45;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[27]);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 45;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pressureSizer == NULL);
        var_pressureSizer = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[28]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[27]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 47;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_instructionsSizer == NULL);
        var_instructionsSizer = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = PyList_New(0);
        assert(var_thermocoupleColumnSizers == NULL);
        var_thermocoupleColumnSizers = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 49;
        tmp_assign_source_7 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_2,
            mod_consts[29],
            &PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pressureGridSizer == NULL);
        var_pressureGridSizer = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[28]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 50;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[27]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 50;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 50;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_btnSizer == NULL);
        var_btnSizer = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[28]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 51;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[25]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 51;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 51;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_channelsSizer == NULL);
        var_channelsSizer = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[28]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 52;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[25]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 52;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 52;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_topSizer == NULL);
        var_topSizer = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_assattr_target_17;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[31]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_20 = par_self;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 55;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[3]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 55;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = mod_consts[32];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22};
            tmp_assattr_value_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_assattr_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[33], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_args_element_value_26;
        CHECK_OBJECT(var_instructionsSizer);
        tmp_expression_value_22 = var_instructionsSizer;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[34]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_23 = par_self;
        tmp_args_element_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[33]);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 56;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = mod_consts[35];
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 56;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[36]);
        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_23);

            exception_lineno = 56;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_23);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[38];
        assert(var_numTCRows == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_numTCRows = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[39];
        assert(var_tabIdx == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_tabIdx = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_26 = par_self;
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[7]);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[41]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 64;
        tmp_args_element_value_27 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[42]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 64;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_27);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooNoooooooooo";
                exception_lineno = 64;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_15;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        CHECK_OBJECT(var_index);
        tmp_left_value_1 = var_index;
        if (var_numTCRows == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_right_value_1 = var_numTCRows;
        tmp_cmp_expr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[35];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_16;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_2;
        if (var_tabIdx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_left_value_2 = var_tabIdx;
        tmp_right_value_2 = mod_consts[45];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_value_2, tmp_right_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_16 = tmp_left_value_2;
        var_tabIdx = tmp_assign_source_16;

    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_expression_value_30;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_28 = par_self;
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[21]);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[47]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 68;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[48]);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 68;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_30 = par_self;
        tmp_args_element_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[6]);
        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 68;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 68;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 68;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 68;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_args_element_value_34;
        if (var_thermocoupleColumnSizers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_31 = var_thermocoupleColumnSizers;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[47]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[29]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (var_numTCRows == NULL) {
            Py_DECREF(tmp_called_value_15);
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_31 = var_numTCRows;
        tmp_args_element_value_32 = mod_consts[37];
        tmp_args_element_value_33 = mod_consts[37];
        tmp_args_element_value_34 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33, tmp_args_element_value_34};
            tmp_args_element_value_30 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_16, call_args);
        }

        Py_DECREF(tmp_called_value_16);
        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 69;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 69;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_call_result_5;
        if (var_thermocoupleColumnSizers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_33 = var_thermocoupleColumnSizers;
        CHECK_OBJECT(var_tabIdx);
        tmp_subscript_value_1 = var_tabIdx;
        tmp_called_instance_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_1);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 70;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_4,
            mod_consts[50],
            &PyTuple_GET_ITEM(mod_consts[51], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_3;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_36 = par_self;
        tmp_expression_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[21]);
        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_tabIdx);
        tmp_subscript_value_2 = var_tabIdx;
        tmp_expression_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[52]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (var_thermocoupleColumnSizers == NULL) {
            Py_DECREF(tmp_called_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 71;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_37 = var_thermocoupleColumnSizers;
        CHECK_OBJECT(var_tabIdx);
        tmp_subscript_value_3 = var_tabIdx;
        tmp_args_element_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_3);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_17);

            exception_lineno = 71;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 71;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_left_value_3;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_right_value_3;
        PyObject *tmp_expression_value_45;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_39 = par_self;
        tmp_expression_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[11]);
        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[47]);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_40 == NULL)) {
            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[53]);
        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_42 = par_self;
        tmp_expression_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[21]);
        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (var_tabIdx == NULL) {
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_expression_value_41);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_4 = var_tabIdx;
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_41);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 77;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_arg_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[3]);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 77;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_arg_value_2_1 = mod_consts[54];
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[55]);
        if (tmp_left_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_left_value_3);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[56]);
        if (tmp_right_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);
            Py_DECREF(tmp_left_value_3);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_3, tmp_right_value_3);
        Py_DECREF(tmp_left_value_3);
        Py_DECREF(tmp_right_value_3);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_19);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_arg_value_1_1);

            exception_lineno = 79;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 76;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_args_element_value_36 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_19, args, kw_values, mod_consts[57]);
        }

        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 76;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 76;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_left_value_4;
        PyObject *tmp_left_value_5;
        PyObject *tmp_right_value_4;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_left_value_6;
        PyObject *tmp_right_value_5;
        PyObject *tmp_right_value_6;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_left_value_7;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_right_value_7;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_kw_call_dict_value_1_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_47 = par_self;
        tmp_expression_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[10]);
        if (tmp_expression_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[47]);
        Py_DECREF(tmp_expression_value_46);
        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[53]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_50 = par_self;
        tmp_expression_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[21]);
        if (tmp_expression_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (var_tabIdx == NULL) {
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_expression_value_49);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_5 = var_tabIdx;
        tmp_kw_call_arg_value_0_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_49);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_arg_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[3]);
        if (tmp_kw_call_arg_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 82;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_5 = mod_consts[58];
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_left_value_6 = var_index;
        tmp_right_value_5 = mod_consts[45];
        tmp_args_element_value_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_6, tmp_right_value_5);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 83;
        tmp_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_5, tmp_right_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_6 = mod_consts[60];
        tmp_kw_call_arg_value_2_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_4, tmp_right_value_6);
        Py_DECREF(tmp_left_value_4);
        if (tmp_kw_call_arg_value_2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            Py_DECREF(tmp_kw_call_arg_value_2_2);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[55]);
        if (tmp_left_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            Py_DECREF(tmp_kw_call_arg_value_2_2);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_53 == NULL)) {
            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            Py_DECREF(tmp_kw_call_arg_value_2_2);
            Py_DECREF(tmp_left_value_7);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[56]);
        if (tmp_right_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            Py_DECREF(tmp_kw_call_arg_value_2_2);
            Py_DECREF(tmp_left_value_7);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_7, tmp_right_value_7);
        Py_DECREF(tmp_left_value_7);
        Py_DECREF(tmp_right_value_7);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_21);
            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_arg_value_1_2);
            Py_DECREF(tmp_kw_call_arg_value_2_2);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[61];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 81;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
            tmp_args_element_value_37 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_21, args, kw_values, mod_consts[62]);
        }

        Py_DECREF(tmp_called_value_21);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_arg_value_1_2);
        Py_DECREF(tmp_kw_call_arg_value_2_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 81;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_57;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_56 = par_self;
        tmp_expression_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[10]);
        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_6 = var_index;
        tmp_expression_value_54 = LOOKUP_SUBSCRIPT(tmp_expression_value_55, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_55);
        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[63]);
        Py_DECREF(tmp_expression_value_54);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_57 == NULL)) {
            tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[65]);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 86;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_expression_value_61;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 87;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_60 = par_self;
        tmp_expression_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[10]);
        if (tmp_expression_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_7 = var_index;
        tmp_expression_value_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_59);
        if (tmp_expression_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[66]);
        Py_DECREF(tmp_expression_value_58);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_61 == NULL)) {
            tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 87;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[67]);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 87;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 87;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_24, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_44;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_63 = par_self;
        tmp_expression_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[12]);
        if (tmp_expression_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[47]);
        Py_DECREF(tmp_expression_value_62);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[68]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_26);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_66 = par_self;
        tmp_expression_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[21]);
        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (var_tabIdx == NULL) {
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_expression_value_65);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_8 = var_tabIdx;
        tmp_args_element_value_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_65, tmp_subscript_value_8);
        Py_DECREF(tmp_expression_value_65);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[3]);
        if (tmp_args_element_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_args_element_value_42);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_44 = mod_consts[69];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 90;
        {
            PyObject *call_args[] = {tmp_args_element_value_42, tmp_args_element_value_43, tmp_args_element_value_44};
            tmp_args_element_value_41 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_42);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_25);

            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 90;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_25, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_expression_value_72;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_70 = par_self;
        tmp_expression_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[12]);
        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_9 = var_index;
        tmp_expression_value_68 = LOOKUP_SUBSCRIPT(tmp_expression_value_69, tmp_subscript_value_9);
        Py_DECREF(tmp_expression_value_69);
        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[70]);
        Py_DECREF(tmp_expression_value_68);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 91;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[71]);
        if (tmp_args_element_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 91;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_45);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 91;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_72 = par_self;
        tmp_args_element_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[72]);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);
            Py_DECREF(tmp_args_element_value_45);

            exception_lineno = 91;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = {tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_27, call_args);
        }

        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_element_value_45);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_index);
        tmp_assattr_value_18 = var_index;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_74 = par_self;
        tmp_expression_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[12]);
        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_10 = var_index;
        tmp_assattr_target_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_73, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_73);
        if (tmp_assattr_target_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[73], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_target_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_subscript_value_11;
        tmp_assattr_value_19 = mod_consts[74];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_76 = par_self;
        tmp_expression_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[12]);
        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_11 = var_index;
        tmp_assattr_target_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_75);
        if (tmp_assattr_target_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[75], tmp_assattr_value_19);
        Py_DECREF(tmp_assattr_target_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_expression_value_84;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_78 = par_self;
        tmp_expression_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[13]);
        if (tmp_expression_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[47]);
        Py_DECREF(tmp_expression_value_77);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[76]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_29);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_81 = par_self;
        tmp_expression_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[21]);
        if (tmp_expression_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (var_tabIdx == NULL) {
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_expression_value_80);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_12 = var_tabIdx;
        tmp_kw_call_arg_value_0_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_80, tmp_subscript_value_12);
        Py_DECREF(tmp_expression_value_80);
        if (tmp_kw_call_arg_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[3]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_arg_value_0_3);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_1_2 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_kw_call_dict_value_1_2 == NULL)) {
            tmp_kw_call_dict_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_kw_call_dict_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);

            exception_lineno = 98;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);

            exception_lineno = 99;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_13 = mod_consts[35];
        tmp_kw_call_dict_value_2_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_83, tmp_subscript_value_13, 0);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);

            exception_lineno = 99;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 100;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_3_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[78]);
        if (tmp_kw_call_dict_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_29);
            Py_DECREF(tmp_kw_call_arg_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_0_3);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 100;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 96;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_args_element_value_47 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_29, args, kw_values, mod_consts[79]);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_kw_call_arg_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        Py_DECREF(tmp_kw_call_dict_value_2_1);
        Py_DECREF(tmp_kw_call_dict_value_3_1);
        if (tmp_args_element_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 96;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 96;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_47);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_expression_value_87;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_86 = par_self;
        tmp_expression_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[13]);
        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_14 = var_index;
        tmp_args_element_value_48 = LOOKUP_SUBSCRIPT(tmp_expression_value_85, tmp_subscript_value_14);
        Py_DECREF(tmp_expression_value_85);
        if (tmp_args_element_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_87 == NULL)) {
            tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_48);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[81]);
        if (tmp_args_element_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_48);

            exception_lineno = 102;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_48, tmp_args_element_value_49};
            tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_30, call_args);
        }

        Py_DECREF(tmp_args_element_value_48);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_expression_value_90;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 103;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_89 = par_self;
        tmp_expression_value_88 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[13]);
        if (tmp_expression_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_15 = var_index;
        tmp_args_element_value_50 = LOOKUP_SUBSCRIPT(tmp_expression_value_88, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_88);
        if (tmp_args_element_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_90 == NULL)) {
            tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_50);

            exception_lineno = 103;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[83]);
        if (tmp_args_element_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_50);

            exception_lineno = 103;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 103;
        {
            PyObject *call_args[] = {tmp_args_element_value_50, tmp_args_element_value_51};
            tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_31, call_args);
        }

        Py_DECREF(tmp_args_element_value_50);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_expression_value_95;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_93 = par_self;
        tmp_expression_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[13]);
        if (tmp_expression_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_16 = var_index;
        tmp_expression_value_91 = LOOKUP_SUBSCRIPT(tmp_expression_value_92, tmp_subscript_value_16);
        Py_DECREF(tmp_expression_value_92);
        if (tmp_expression_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[70]);
        Py_DECREF(tmp_expression_value_91);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_94 == NULL)) {
            tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[84]);
        if (tmp_args_element_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_52);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_95 = par_self;
        tmp_args_element_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[85]);
        if (tmp_args_element_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_args_element_value_52);

            exception_lineno = 104;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_value_52, tmp_args_element_value_53};
            tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_32, call_args);
        }

        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_52);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_subscript_value_18;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 106;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_99 = par_self;
        tmp_expression_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[13]);
        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_17 = var_index;
        tmp_expression_value_97 = LOOKUP_SUBSCRIPT(tmp_expression_value_98, tmp_subscript_value_17);
        Py_DECREF(tmp_expression_value_98);
        if (tmp_expression_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_96 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[86]);
        Py_DECREF(tmp_expression_value_97);
        if (tmp_expression_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_18 = mod_consts[45];
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_96, tmp_subscript_value_18, 1);
        Py_DECREF(tmp_expression_value_96);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_height;
            var_height = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_subscript_value_19;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 107;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_101 = par_self;
        tmp_expression_value_100 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[13]);
        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_19 = var_index;
        tmp_called_instance_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_100, tmp_subscript_value_19);
        Py_DECREF(tmp_expression_value_100);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_3;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 107;
        tmp_iter_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[87],
            PyTuple_GET_ITEM(mod_consts[88], 0)
        );

        Py_DECREF(tmp_called_instance_5);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNoooooooooo";
            exception_lineno = 107;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNoooooooooo";
            exception_lineno = 107;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_20;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooooooooNoooooooooo";
                    exception_lineno = 107;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[89];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooNoooooooooo";
            exception_lineno = 107;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_width;
            var_width = tmp_assign_source_21;
            Py_INCREF(var_width);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_22;
            Py_INCREF(var_h);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_left_value_8;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_8;
        PyObject *tmp_right_value_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 108;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_104 = par_self;
        tmp_expression_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[13]);
        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_20 = var_index;
        tmp_expression_value_102 = LOOKUP_SUBSCRIPT(tmp_expression_value_103, tmp_subscript_value_20);
        Py_DECREF(tmp_expression_value_103);
        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[90]);
        Py_DECREF(tmp_expression_value_102);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_width);
        tmp_left_value_9 = var_width;
        CHECK_OBJECT(var_height);
        tmp_right_value_8 = var_height;
        tmp_left_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_9, tmp_right_value_8);
        if (tmp_left_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 108;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_9 = mod_consts[91];
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_8, tmp_right_value_9);
        Py_DECREF(tmp_left_value_8);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_33);

            exception_lineno = 108;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_54 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_value_54, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_height);
        tmp_tuple_element_1 = var_height;
        PyTuple_SET_ITEM0(tmp_args_element_value_54, 1, tmp_tuple_element_1);
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 108;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_33);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_kw_call_arg_value_1_3;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_kw_call_arg_value_2_3;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_111;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_106 = par_self;
        tmp_expression_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[14]);
        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[47]);
        Py_DECREF(tmp_expression_value_105);
        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[53]);
        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_35);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_109 = par_self;
        tmp_expression_value_108 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[21]);
        if (tmp_expression_value_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (var_tabIdx == NULL) {
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_expression_value_108);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_21 = var_tabIdx;
        tmp_kw_call_arg_value_0_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_108, tmp_subscript_value_21);
        Py_DECREF(tmp_expression_value_108);
        if (tmp_kw_call_arg_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_35);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 111;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_arg_value_1_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[3]);
        if (tmp_kw_call_arg_value_1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_kw_call_arg_value_0_4);

            exception_lineno = 111;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_arg_value_2_3 = mod_consts[92];
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_kw_call_arg_value_0_4);
            Py_DECREF(tmp_kw_call_arg_value_1_3);

            exception_lineno = 113;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[93]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_35);
            Py_DECREF(tmp_kw_call_arg_value_0_4);
            Py_DECREF(tmp_kw_call_arg_value_1_3);

            exception_lineno = 113;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 110;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4, tmp_kw_call_arg_value_1_3, tmp_kw_call_arg_value_2_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_args_element_value_55 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_35, args, kw_values, mod_consts[57]);
        }

        Py_DECREF(tmp_called_value_35);
        Py_DECREF(tmp_kw_call_arg_value_0_4);
        Py_DECREF(tmp_kw_call_arg_value_1_3);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_args_element_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 110;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 110;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_call_result_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_expression_value_116;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_114 = par_self;
        tmp_expression_value_113 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[14]);
        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_22 = var_index;
        tmp_expression_value_112 = LOOKUP_SUBSCRIPT(tmp_expression_value_113, tmp_subscript_value_22);
        Py_DECREF(tmp_expression_value_113);
        if (tmp_expression_value_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[70]);
        Py_DECREF(tmp_expression_value_112);
        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 115;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[94]);
        if (tmp_args_element_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 115;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_56);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 115;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_116 = par_self;
        tmp_args_element_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[95]);
        if (tmp_args_element_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_args_element_value_56);

            exception_lineno = 115;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_56, tmp_args_element_value_57};
            tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_36, call_args);
        }

        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_56);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_call_result_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_subscript_value_23;
        CHECK_OBJECT(var_index);
        tmp_assattr_value_20 = var_index;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_118 = par_self;
        tmp_expression_value_117 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[10]);
        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_23 = var_index;
        tmp_assattr_target_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_117, tmp_subscript_value_23);
        Py_DECREF(tmp_expression_value_117);
        if (tmp_assattr_target_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[73], tmp_assattr_value_20);
        Py_DECREF(tmp_assattr_target_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_subscript_value_24;
        CHECK_OBJECT(var_index);
        tmp_assattr_value_21 = var_index;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_120 = par_self;
        tmp_expression_value_119 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[11]);
        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_24 = var_index;
        tmp_assattr_target_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_119, tmp_subscript_value_24);
        Py_DECREF(tmp_expression_value_119);
        if (tmp_assattr_target_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[73], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_target_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_subscript_value_25;
        CHECK_OBJECT(var_index);
        tmp_assattr_value_22 = var_index;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_122 = par_self;
        tmp_expression_value_121 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[14]);
        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_25 = var_index;
        tmp_assattr_target_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_121, tmp_subscript_value_25);
        Py_DECREF(tmp_expression_value_121);
        if (tmp_assattr_target_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[73], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_target_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_left_value_10;
        PyObject *tmp_left_value_11;
        PyObject *tmp_left_value_12;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_right_value_10;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_right_value_11;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_right_value_12;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_args_element_value_61;
        if (var_thermocoupleColumnSizers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_124 = var_thermocoupleColumnSizers;
        if (var_tabIdx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_26 = var_tabIdx;
        tmp_expression_value_123 = LOOKUP_SUBSCRIPT(tmp_expression_value_124, tmp_subscript_value_26);
        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[34]);
        Py_DECREF(tmp_expression_value_123);
        if (tmp_called_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_37);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_126 = par_self;
        tmp_expression_value_125 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[10]);
        if (tmp_expression_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_27 = var_index;
        tmp_args_element_value_58 = LOOKUP_SUBSCRIPT(tmp_expression_value_125, tmp_subscript_value_27);
        Py_DECREF(tmp_expression_value_125);
        if (tmp_args_element_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_59 = mod_consts[45];
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_127, mod_consts[96]);
        if (tmp_left_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_left_value_12);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[97]);
        if (tmp_right_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_left_value_12);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_11 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_12, tmp_right_value_10);
        Py_DECREF(tmp_left_value_12);
        Py_DECREF(tmp_right_value_10);
        if (tmp_left_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_left_value_11);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[98]);
        if (tmp_right_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_left_value_11);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_10 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_11, tmp_right_value_11);
        Py_DECREF(tmp_left_value_11);
        Py_DECREF(tmp_right_value_11);
        if (tmp_left_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_130 == NULL)) {
            tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_left_value_10);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[99]);
        if (tmp_right_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_58);
            Py_DECREF(tmp_left_value_10);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_60 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_10, tmp_right_value_12);
        Py_DECREF(tmp_left_value_10);
        Py_DECREF(tmp_right_value_12);
        if (tmp_args_element_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_37);
            Py_DECREF(tmp_args_element_value_58);

            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_61 = mod_consts[100];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 130;
        {
            PyObject *call_args[] = {tmp_args_element_value_58, tmp_args_element_value_59, tmp_args_element_value_60, tmp_args_element_value_61};
            tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_37, call_args);
        }

        Py_DECREF(tmp_called_value_37);
        Py_DECREF(tmp_args_element_value_58);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_call_result_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_subscript_value_28;
        PyObject *tmp_call_result_21;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_left_value_13;
        PyObject *tmp_left_value_14;
        PyObject *tmp_left_value_15;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_right_value_13;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_right_value_14;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_right_value_15;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_args_element_value_65;
        if (var_thermocoupleColumnSizers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_132 = var_thermocoupleColumnSizers;
        if (var_tabIdx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_28 = var_tabIdx;
        tmp_expression_value_131 = LOOKUP_SUBSCRIPT(tmp_expression_value_132, tmp_subscript_value_28);
        if (tmp_expression_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[34]);
        Py_DECREF(tmp_expression_value_131);
        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_38);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_134 = par_self;
        tmp_expression_value_133 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[11]);
        if (tmp_expression_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_29 = var_index;
        tmp_args_element_value_62 = LOOKUP_SUBSCRIPT(tmp_expression_value_133, tmp_subscript_value_29);
        Py_DECREF(tmp_expression_value_133);
        if (tmp_args_element_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_63 = mod_consts[45];
        tmp_expression_value_135 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_135 == NULL)) {
            tmp_expression_value_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_62);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[96]);
        if (tmp_left_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_62);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_136 == NULL)) {
            tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_left_value_15);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[97]);
        if (tmp_right_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_left_value_15);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_14 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_15, tmp_right_value_13);
        Py_DECREF(tmp_left_value_15);
        Py_DECREF(tmp_right_value_13);
        if (tmp_left_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_62);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_137 == NULL)) {
            tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_left_value_14);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[98]);
        if (tmp_right_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_left_value_14);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_13 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_14, tmp_right_value_14);
        Py_DECREF(tmp_left_value_14);
        Py_DECREF(tmp_right_value_14);
        if (tmp_left_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_62);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_138 == NULL)) {
            tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_left_value_13);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[99]);
        if (tmp_right_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_62);
            Py_DECREF(tmp_left_value_13);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_64 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_13, tmp_right_value_15);
        Py_DECREF(tmp_left_value_13);
        Py_DECREF(tmp_right_value_15);
        if (tmp_args_element_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_args_element_value_62);

            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_65 = mod_consts[100];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 131;
        {
            PyObject *call_args[] = {tmp_args_element_value_62, tmp_args_element_value_63, tmp_args_element_value_64, tmp_args_element_value_65};
            tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_62);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_call_result_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_call_result_22;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_subscript_value_31;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_left_value_16;
        PyObject *tmp_left_value_17;
        PyObject *tmp_left_value_18;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_right_value_16;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_right_value_17;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_right_value_18;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_args_element_value_69;
        if (var_thermocoupleColumnSizers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_140 = var_thermocoupleColumnSizers;
        if (var_tabIdx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_30 = var_tabIdx;
        tmp_expression_value_139 = LOOKUP_SUBSCRIPT(tmp_expression_value_140, tmp_subscript_value_30);
        if (tmp_expression_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[34]);
        Py_DECREF(tmp_expression_value_139);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_39);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_142 = par_self;
        tmp_expression_value_141 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[12]);
        if (tmp_expression_value_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_31 = var_index;
        tmp_args_element_value_66 = LOOKUP_SUBSCRIPT(tmp_expression_value_141, tmp_subscript_value_31);
        Py_DECREF(tmp_expression_value_141);
        if (tmp_args_element_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_67 = mod_consts[45];
        tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_143 == NULL)) {
            tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[96]);
        if (tmp_left_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_144 == NULL)) {
            tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_left_value_18);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[97]);
        if (tmp_right_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_left_value_18);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_17 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_18, tmp_right_value_16);
        Py_DECREF(tmp_left_value_18);
        Py_DECREF(tmp_right_value_16);
        if (tmp_left_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_145 == NULL)) {
            tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_left_value_17);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[98]);
        if (tmp_right_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_left_value_17);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_16 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_17, tmp_right_value_17);
        Py_DECREF(tmp_left_value_17);
        Py_DECREF(tmp_right_value_17);
        if (tmp_left_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_146 == NULL)) {
            tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_left_value_16);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[99]);
        if (tmp_right_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_66);
            Py_DECREF(tmp_left_value_16);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_68 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_16, tmp_right_value_18);
        Py_DECREF(tmp_left_value_16);
        Py_DECREF(tmp_right_value_18);
        if (tmp_args_element_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_39);
            Py_DECREF(tmp_args_element_value_66);

            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_69 = mod_consts[100];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 132;
        {
            PyObject *call_args[] = {tmp_args_element_value_66, tmp_args_element_value_67, tmp_args_element_value_68, tmp_args_element_value_69};
            tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_39, call_args);
        }

        Py_DECREF(tmp_called_value_39);
        Py_DECREF(tmp_args_element_value_66);
        Py_DECREF(tmp_args_element_value_68);
        if (tmp_call_result_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_subscript_value_32;
        PyObject *tmp_call_result_23;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_left_value_19;
        PyObject *tmp_left_value_20;
        PyObject *tmp_left_value_21;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_right_value_19;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_right_value_20;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_right_value_21;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_args_element_value_73;
        if (var_thermocoupleColumnSizers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_148 = var_thermocoupleColumnSizers;
        if (var_tabIdx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_32 = var_tabIdx;
        tmp_expression_value_147 = LOOKUP_SUBSCRIPT(tmp_expression_value_148, tmp_subscript_value_32);
        if (tmp_expression_value_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[34]);
        Py_DECREF(tmp_expression_value_147);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_40);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_150 = par_self;
        tmp_expression_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[13]);
        if (tmp_expression_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_33 = var_index;
        tmp_args_element_value_70 = LOOKUP_SUBSCRIPT(tmp_expression_value_149, tmp_subscript_value_33);
        Py_DECREF(tmp_expression_value_149);
        if (tmp_args_element_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_71 = mod_consts[45];
        tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_151 == NULL)) {
            tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[96]);
        if (tmp_left_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_left_value_21);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_152, mod_consts[97]);
        if (tmp_right_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_left_value_21);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_20 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_21, tmp_right_value_19);
        Py_DECREF(tmp_left_value_21);
        Py_DECREF(tmp_right_value_19);
        if (tmp_left_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_left_value_20);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[98]);
        if (tmp_right_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_left_value_20);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_19 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_20, tmp_right_value_20);
        Py_DECREF(tmp_left_value_20);
        Py_DECREF(tmp_right_value_20);
        if (tmp_left_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_left_value_19);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_154, mod_consts[99]);
        if (tmp_right_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_70);
            Py_DECREF(tmp_left_value_19);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_72 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_19, tmp_right_value_21);
        Py_DECREF(tmp_left_value_19);
        Py_DECREF(tmp_right_value_21);
        if (tmp_args_element_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_args_element_value_70);

            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_73 = mod_consts[100];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 133;
        {
            PyObject *call_args[] = {tmp_args_element_value_70, tmp_args_element_value_71, tmp_args_element_value_72, tmp_args_element_value_73};
            tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_40, call_args);
        }

        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_70);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_call_result_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_call_result_24;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_subscript_value_35;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_left_value_22;
        PyObject *tmp_left_value_23;
        PyObject *tmp_left_value_24;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_right_value_22;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_right_value_23;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_right_value_24;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_args_element_value_77;
        if (var_thermocoupleColumnSizers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_156 = var_thermocoupleColumnSizers;
        if (var_tabIdx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_subscript_value_34 = var_tabIdx;
        tmp_expression_value_155 = LOOKUP_SUBSCRIPT(tmp_expression_value_156, tmp_subscript_value_34);
        if (tmp_expression_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[34]);
        Py_DECREF(tmp_expression_value_155);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_41);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_158 = par_self;
        tmp_expression_value_157 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[14]);
        if (tmp_expression_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_35 = var_index;
        tmp_args_element_value_74 = LOOKUP_SUBSCRIPT(tmp_expression_value_157, tmp_subscript_value_35);
        Py_DECREF(tmp_expression_value_157);
        if (tmp_args_element_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_75 = mod_consts[45];
        tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_159 == NULL)) {
            tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_74);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[96]);
        if (tmp_left_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_74);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_160 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_160 == NULL)) {
            tmp_expression_value_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_74);
            Py_DECREF(tmp_left_value_24);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[97]);
        if (tmp_right_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_74);
            Py_DECREF(tmp_left_value_24);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_23 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_24, tmp_right_value_22);
        Py_DECREF(tmp_left_value_24);
        Py_DECREF(tmp_right_value_22);
        if (tmp_left_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_74);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_161 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_161 == NULL)) {
            tmp_expression_value_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_74);
            Py_DECREF(tmp_left_value_23);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[98]);
        if (tmp_right_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_74);
            Py_DECREF(tmp_left_value_23);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_value_22 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_23, tmp_right_value_23);
        Py_DECREF(tmp_left_value_23);
        Py_DECREF(tmp_right_value_23);
        if (tmp_left_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_74);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_162 == NULL)) {
            tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_74);
            Py_DECREF(tmp_left_value_22);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[99]);
        if (tmp_right_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_74);
            Py_DECREF(tmp_left_value_22);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_76 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_22, tmp_right_value_24);
        Py_DECREF(tmp_left_value_22);
        Py_DECREF(tmp_right_value_24);
        if (tmp_args_element_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);
            Py_DECREF(tmp_args_element_value_74);

            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_77 = mod_consts[100];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 134;
        {
            PyObject *call_args[] = {tmp_args_element_value_74, tmp_args_element_value_75, tmp_args_element_value_76, tmp_args_element_value_77};
            tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_41, call_args);
        }

        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_74);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_call_result_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_24);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 64;
        type_description_1 = "ooooooooooooNoooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[45];
        assert(var_idx == NULL);
        Py_INCREF(tmp_assign_source_23);
        var_idx = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_163;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 142;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_163 = par_self;
        tmp_iter_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[21]);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_24;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_25 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooNoooooooooo";
                exception_lineno = 142;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_26 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_tabPanel;
            var_tabPanel = tmp_assign_source_26;
            Py_INCREF(var_tabPanel);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_call_result_25;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_left_value_25;
        PyObject *tmp_left_value_26;
        PyObject *tmp_left_value_27;
        PyObject *tmp_right_value_25;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_left_value_28;
        PyObject *tmp_left_value_29;
        PyObject *tmp_right_value_26;
        PyObject *tmp_left_value_30;
        PyObject *tmp_right_value_27;
        PyObject *tmp_right_value_28;
        PyObject *tmp_right_value_29;
        PyObject *tmp_right_value_30;
        PyObject *tmp_called_value_44;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_left_value_31;
        PyObject *tmp_right_value_31;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_165 = par_self;
        tmp_expression_value_164 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[6]);
        if (tmp_expression_value_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[101]);
        Py_DECREF(tmp_expression_value_164);
        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_tabPanel);
        tmp_args_element_value_78 = var_tabPanel;
        tmp_left_value_27 = mod_consts[58];
        tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_43 == NULL)) {
            tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        if (var_numTCRows == NULL) {
            Py_DECREF(tmp_called_value_42);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }

        tmp_left_value_29 = var_numTCRows;
        if (var_idx == NULL) {
            Py_DECREF(tmp_called_value_42);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }

        tmp_left_value_30 = var_idx;
        tmp_right_value_27 = mod_consts[45];
        tmp_right_value_26 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_left_value_30, tmp_right_value_27);
        if (tmp_right_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        tmp_left_value_28 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_29, tmp_right_value_26);
        Py_DECREF(tmp_right_value_26);
        if (tmp_left_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_28 = mod_consts[45];
        tmp_args_element_value_80 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_28, tmp_right_value_28);
        Py_DECREF(tmp_left_value_28);
        if (tmp_args_element_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 143;
        tmp_right_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_80);
        Py_DECREF(tmp_args_element_value_80);
        if (tmp_right_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        tmp_left_value_26 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_27, tmp_right_value_25);
        Py_DECREF(tmp_right_value_25);
        if (tmp_left_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        tmp_right_value_29 = mod_consts[103];
        tmp_left_value_25 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_26, tmp_right_value_29);
        Py_DECREF(tmp_left_value_26);
        if (tmp_left_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_44 == NULL)) {
            tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_left_value_25);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        if (var_numTCRows == NULL) {
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_left_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }

        tmp_left_value_31 = var_numTCRows;
        if (var_idx == NULL) {
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_left_value_25);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }

        tmp_right_value_31 = var_idx;
        tmp_args_element_value_81 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_left_value_31, tmp_right_value_31);
        if (tmp_args_element_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_left_value_25);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 143;
        tmp_right_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_81);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_right_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_left_value_25);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        tmp_args_element_value_79 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_25, tmp_right_value_30);
        Py_DECREF(tmp_left_value_25);
        Py_DECREF(tmp_right_value_30);
        if (tmp_args_element_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = {tmp_args_element_value_78, tmp_args_element_value_79};
            tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_42, call_args);
        }

        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_79);
        if (tmp_call_result_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_value_32;
        PyObject *tmp_right_value_32;
        if (var_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[102]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }

        tmp_left_value_32 = var_idx;
        tmp_right_value_32 = mod_consts[45];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_value_32, tmp_right_value_32);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_27 = tmp_left_value_32;
        var_idx = tmp_assign_source_27;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 142;
        type_description_1 = "ooooooooooooNoooooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_call_result_26;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_left_value_33;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_right_value_33;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_args_element_value_85;
        CHECK_OBJECT(var_thermocoupleSizer);
        tmp_expression_value_166 = var_thermocoupleSizer;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[34]);
        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_45);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_167 = par_self;
        tmp_args_element_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[6]);
        if (tmp_args_element_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_83 = mod_consts[45];
        tmp_expression_value_168 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_168 == NULL)) {
            tmp_expression_value_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_82);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[36]);
        if (tmp_left_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_82);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_169 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_169 == NULL)) {
            tmp_expression_value_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_82);
            Py_DECREF(tmp_left_value_33);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[99]);
        if (tmp_right_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_82);
            Py_DECREF(tmp_left_value_33);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_84 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_33, tmp_right_value_33);
        Py_DECREF(tmp_left_value_33);
        Py_DECREF(tmp_right_value_33);
        if (tmp_args_element_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_45);
            Py_DECREF(tmp_args_element_value_82);

            exception_lineno = 146;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_85 = mod_consts[104];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 146;
        {
            PyObject *call_args[] = {tmp_args_element_value_82, tmp_args_element_value_83, tmp_args_element_value_84, tmp_args_element_value_85};
            tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_45, call_args);
        }

        Py_DECREF(tmp_called_value_45);
        Py_DECREF(tmp_args_element_value_82);
        Py_DECREF(tmp_args_element_value_84);
        if (tmp_call_result_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_46;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_expression_value_171;
        tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_value_46 == NULL)) {
            tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_171 = par_self;
        tmp_expression_value_170 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[7]);
        if (tmp_expression_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[41]);
        Py_DECREF(tmp_expression_value_170);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 151;
        tmp_args_element_value_86 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[105]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_args_element_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 151;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_86);
        Py_DECREF(tmp_args_element_value_86);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_28;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_29 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_29 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooNoooooooooo";
                exception_lineno = 151;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_30 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_30;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_args_element_value_87;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 156;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_173 = par_self;
        tmp_expression_value_172 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[7]);
        if (tmp_expression_value_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[41]);
        Py_DECREF(tmp_expression_value_172);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_args_element_value_87 = var_index;
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 156;
        tmp_assign_source_31 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[106], tmp_args_element_value_87);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_serialList;
            var_serialList = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_call_result_27;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_subscript_value_36;
        PyObject *tmp_kw_call_dict_value_3_2;
        PyObject *tmp_expression_value_179;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_175 = par_self;
        tmp_expression_value_174 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[17]);
        if (tmp_expression_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[47]);
        Py_DECREF(tmp_expression_value_174);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_176 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_176 == NULL)) {
            tmp_expression_value_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[76]);
        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_kw_call_arg_value_0_5 = par_self;
        tmp_expression_value_177 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_177 == NULL)) {
            tmp_expression_value_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 158;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_0_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[3]);
        if (tmp_kw_call_dict_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 158;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_serialList);
        tmp_kw_call_dict_value_1_3 = var_serialList;
        tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_178 == NULL)) {
            tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_expression_value_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_kw_call_dict_value_0_5);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_36 = mod_consts[35];
        tmp_kw_call_dict_value_2_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_178, tmp_subscript_value_36, 0);
        if (tmp_kw_call_dict_value_2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_kw_call_dict_value_0_5);

            exception_lineno = 160;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_kw_call_dict_value_0_5);
            Py_DECREF(tmp_kw_call_dict_value_2_2);

            exception_lineno = 161;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_3_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_179, mod_consts[78]);
        if (tmp_kw_call_dict_value_3_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_kw_call_dict_value_0_5);
            Py_DECREF(tmp_kw_call_dict_value_2_2);

            exception_lineno = 161;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 157;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2};
            tmp_args_element_value_88 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_48, args, kw_values, mod_consts[79]);
        }

        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_kw_call_dict_value_0_5);
        Py_DECREF(tmp_kw_call_dict_value_2_2);
        Py_DECREF(tmp_kw_call_dict_value_3_2);
        if (tmp_args_element_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 157;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 157;
        tmp_call_result_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_88);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_88);
        if (tmp_call_result_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_subscript_value_37;
        PyObject *tmp_subscript_value_38;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 164;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_183 = par_self;
        tmp_expression_value_182 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[17]);
        if (tmp_expression_value_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_37 = var_index;
        tmp_expression_value_181 = LOOKUP_SUBSCRIPT(tmp_expression_value_182, tmp_subscript_value_37);
        Py_DECREF(tmp_expression_value_182);
        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_180 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[86]);
        Py_DECREF(tmp_expression_value_181);
        if (tmp_expression_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_subscript_value_38 = mod_consts[45];
        tmp_assign_source_32 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_180, tmp_subscript_value_38, 1);
        Py_DECREF(tmp_expression_value_180);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_height;
            var_height = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_subscript_value_39;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_185 = par_self;
        tmp_expression_value_184 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[17]);
        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_39 = var_index;
        tmp_called_instance_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_184, tmp_subscript_value_39);
        Py_DECREF(tmp_expression_value_184);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_7;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 165;
        tmp_iter_arg_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[87],
            PyTuple_GET_ITEM(mod_consts[108], 0)
        );

        Py_DECREF(tmp_called_instance_8);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_33 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_34 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNoooooooooo";
            exception_lineno = 165;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_35 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooNoooooooooo";
            exception_lineno = 165;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_35;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooooooooNoooooooooo";
                    exception_lineno = 165;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[89];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooNoooooooooo";
            exception_lineno = 165;
            goto try_except_handler_8;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_36 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_width;
            var_width = tmp_assign_source_36;
            Py_INCREF(var_width);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_37 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_h;
            var_h = tmp_assign_source_37;
            Py_INCREF(var_h);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_subscript_value_40;
        PyObject *tmp_call_result_28;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_left_value_34;
        PyObject *tmp_left_value_35;
        PyObject *tmp_right_value_34;
        PyObject *tmp_right_value_35;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_188 = par_self;
        tmp_expression_value_187 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[17]);
        if (tmp_expression_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_40 = var_index;
        tmp_expression_value_186 = LOOKUP_SUBSCRIPT(tmp_expression_value_187, tmp_subscript_value_40);
        Py_DECREF(tmp_expression_value_187);
        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[90]);
        Py_DECREF(tmp_expression_value_186);
        if (tmp_called_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_width);
        tmp_left_value_35 = var_width;
        CHECK_OBJECT(var_height);
        tmp_right_value_34 = var_height;
        tmp_left_value_34 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_35, tmp_right_value_34);
        if (tmp_left_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_value_35 = mod_consts[91];
        tmp_tuple_element_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_34, tmp_right_value_35);
        Py_DECREF(tmp_left_value_34);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_49);

            exception_lineno = 166;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_89 = PyTuple_New(2);
        PyTuple_SET_ITEM(tmp_args_element_value_89, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_height);
        tmp_tuple_element_2 = var_height;
        PyTuple_SET_ITEM0(tmp_args_element_value_89, 1, tmp_tuple_element_2);
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 166;
        tmp_call_result_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_89);
        Py_DECREF(tmp_called_value_49);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_call_result_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_subscript_value_41;
        PyObject *tmp_call_result_29;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_args_element_value_91;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_191 = par_self;
        tmp_expression_value_190 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[17]);
        if (tmp_expression_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_41 = var_index;
        tmp_expression_value_189 = LOOKUP_SUBSCRIPT(tmp_expression_value_190, tmp_subscript_value_41);
        Py_DECREF(tmp_expression_value_190);
        if (tmp_expression_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_189, mod_consts[109]);
        Py_DECREF(tmp_expression_value_189);
        if (tmp_called_value_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_50);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_193 = par_self;
        tmp_expression_value_192 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[7]);
        if (tmp_expression_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_instance_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[41]);
        Py_DECREF(tmp_expression_value_192);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_args_element_value_91 = var_index;
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 167;
        tmp_args_element_value_90 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_9, mod_consts[110], tmp_args_element_value_91);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_args_element_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 167;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 167;
        tmp_call_result_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_90);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_90);
        if (tmp_call_result_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_call_result_30;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_expression_value_198;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_196 = par_self;
        tmp_expression_value_195 = LOOKUP_ATTRIBUTE(tmp_expression_value_196, mod_consts[17]);
        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_42 = var_index;
        tmp_expression_value_194 = LOOKUP_SUBSCRIPT(tmp_expression_value_195, tmp_subscript_value_42);
        Py_DECREF(tmp_expression_value_195);
        if (tmp_expression_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[70]);
        Py_DECREF(tmp_expression_value_194);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_92 = LOOKUP_ATTRIBUTE(tmp_expression_value_197, mod_consts[84]);
        if (tmp_args_element_value_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_element_value_92);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_198 = par_self;
        tmp_args_element_value_93 = LOOKUP_ATTRIBUTE(tmp_expression_value_198, mod_consts[111]);
        if (tmp_args_element_value_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);
            Py_DECREF(tmp_args_element_value_92);

            exception_lineno = 168;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 168;
        {
            PyObject *call_args[] = {tmp_args_element_value_92, tmp_args_element_value_93};
            tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_51, call_args);
        }

        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_92);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_call_result_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_subscript_value_43;
        CHECK_OBJECT(var_index);
        tmp_assattr_value_23 = var_index;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_200 = par_self;
        tmp_expression_value_199 = LOOKUP_ATTRIBUTE(tmp_expression_value_200, mod_consts[17]);
        if (tmp_expression_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_43 = var_index;
        tmp_assattr_target_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_199, tmp_subscript_value_43);
        Py_DECREF(tmp_expression_value_199);
        if (tmp_assattr_target_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[73], tmp_assattr_value_23);
        Py_DECREF(tmp_assattr_target_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_call_result_31;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_kw_call_arg_value_0_6;
        PyObject *tmp_kw_call_arg_value_1_4;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_kw_call_arg_value_2_4;
        PyObject *tmp_kw_call_dict_value_0_6;
        PyObject *tmp_left_value_36;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_right_value_36;
        PyObject *tmp_expression_value_206;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_202 = par_self;
        tmp_expression_value_201 = LOOKUP_ATTRIBUTE(tmp_expression_value_202, mod_consts[16]);
        if (tmp_expression_value_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_201, mod_consts[47]);
        Py_DECREF(tmp_expression_value_201);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_203 == NULL)) {
            tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tmp_expression_value_203, mod_consts[53]);
        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_53);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_kw_call_arg_value_0_6 = par_self;
        tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_204 == NULL)) {
            tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 172;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_arg_value_1_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_204, mod_consts[3]);
        if (tmp_kw_call_arg_value_1_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_53);

            exception_lineno = 172;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_arg_value_2_4 = mod_consts[54];
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_kw_call_arg_value_1_4);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_left_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_205, mod_consts[55]);
        if (tmp_left_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_kw_call_arg_value_1_4);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_206 == NULL)) {
            tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_kw_call_arg_value_1_4);
            Py_DECREF(tmp_left_value_36);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_value_36 = LOOKUP_ATTRIBUTE(tmp_expression_value_206, mod_consts[56]);
        if (tmp_right_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_kw_call_arg_value_1_4);
            Py_DECREF(tmp_left_value_36);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_0_6 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_36, tmp_right_value_36);
        Py_DECREF(tmp_left_value_36);
        Py_DECREF(tmp_right_value_36);
        if (tmp_kw_call_dict_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_53);
            Py_DECREF(tmp_kw_call_arg_value_1_4);

            exception_lineno = 174;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 171;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_6, tmp_kw_call_arg_value_1_4, tmp_kw_call_arg_value_2_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_6};
            tmp_args_element_value_94 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_53, args, kw_values, mod_consts[57]);
        }

        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_kw_call_arg_value_1_4);
        Py_DECREF(tmp_kw_call_dict_value_0_6);
        if (tmp_args_element_value_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 171;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 171;
        tmp_call_result_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_94);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_94);
        if (tmp_call_result_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_left_value_37;
        PyObject *tmp_left_value_38;
        PyObject *tmp_left_value_39;
        PyObject *tmp_left_value_40;
        PyObject *tmp_right_value_37;
        PyObject *tmp_called_value_54;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_left_value_41;
        PyObject *tmp_right_value_38;
        PyObject *tmp_right_value_39;
        PyObject *tmp_right_value_40;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_subscript_value_44;
        PyObject *tmp_left_value_42;
        PyObject *tmp_right_value_41;
        PyObject *tmp_right_value_42;
        tmp_left_value_40 = mod_consts[58];
        tmp_called_value_54 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_54 == NULL)) {
            tmp_called_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_left_value_41 = var_index;
        tmp_right_value_38 = mod_consts[45];
        tmp_args_element_value_95 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_41, tmp_right_value_38);
        if (tmp_args_element_value_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 177;
        tmp_right_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_95);
        Py_DECREF(tmp_args_element_value_95);
        if (tmp_right_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_left_value_39 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_40, tmp_right_value_37);
        Py_DECREF(tmp_right_value_37);
        if (tmp_left_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_value_39 = mod_consts[112];
        tmp_left_value_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_39, tmp_right_value_39);
        Py_DECREF(tmp_left_value_39);
        if (tmp_left_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_38);

            exception_lineno = 177;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_left_value_42 = var_index;
        tmp_right_value_41 = mod_consts[45];
        tmp_subscript_value_44 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_42, tmp_right_value_41);
        if (tmp_subscript_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_38);

            exception_lineno = 177;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_value_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_207, tmp_subscript_value_44);
        Py_DECREF(tmp_subscript_value_44);
        if (tmp_right_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_38);

            exception_lineno = 177;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_left_value_37 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_38, tmp_right_value_40);
        Py_DECREF(tmp_left_value_38);
        Py_DECREF(tmp_right_value_40);
        if (tmp_left_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_value_42 = mod_consts[113];
        tmp_assign_source_38 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_37, tmp_right_value_42);
        Py_DECREF(tmp_left_value_37);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_labelString;
            var_labelString = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_call_result_32;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_kw_call_arg_value_0_7;
        PyObject *tmp_kw_call_arg_value_1_5;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_kw_call_arg_value_2_5;
        PyObject *tmp_kw_call_dict_value_0_7;
        PyObject *tmp_left_value_43;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_right_value_43;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_kw_call_dict_value_1_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_209 = par_self;
        tmp_expression_value_208 = LOOKUP_ATTRIBUTE(tmp_expression_value_209, mod_consts[15]);
        if (tmp_expression_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_208, mod_consts[47]);
        Py_DECREF(tmp_expression_value_208);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_210 == NULL)) {
            tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_210, mod_consts[53]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_called_value_56);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_kw_call_arg_value_0_7 = par_self;
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_arg_value_1_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_211, mod_consts[3]);
        if (tmp_kw_call_arg_value_1_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 179;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_labelString);
        tmp_kw_call_arg_value_2_5 = var_labelString;
        tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_212 == NULL)) {
            tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_kw_call_arg_value_1_5);

            exception_lineno = 181;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_left_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_212, mod_consts[55]);
        if (tmp_left_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_kw_call_arg_value_1_5);

            exception_lineno = 181;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_213 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_213 == NULL)) {
            tmp_expression_value_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_kw_call_arg_value_1_5);
            Py_DECREF(tmp_left_value_43);

            exception_lineno = 181;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_right_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[56]);
        if (tmp_right_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_kw_call_arg_value_1_5);
            Py_DECREF(tmp_left_value_43);

            exception_lineno = 181;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_0_7 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_43, tmp_right_value_43);
        Py_DECREF(tmp_left_value_43);
        Py_DECREF(tmp_right_value_43);
        if (tmp_kw_call_dict_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_kw_call_arg_value_1_5);

            exception_lineno = 181;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_1_4 = mod_consts[114];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 178;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_7, tmp_kw_call_arg_value_1_5, tmp_kw_call_arg_value_2_5};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_7, tmp_kw_call_dict_value_1_4};
            tmp_args_element_value_96 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_56, args, kw_values, mod_consts[62]);
        }

        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_kw_call_arg_value_1_5);
        Py_DECREF(tmp_kw_call_dict_value_0_7);
        if (tmp_args_element_value_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 178;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 178;
        tmp_call_result_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_96);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_96);
        if (tmp_call_result_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_subscript_value_45;
        PyObject *tmp_call_result_33;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_expression_value_217;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_216 = par_self;
        tmp_expression_value_215 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[15]);
        if (tmp_expression_value_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_45 = var_index;
        tmp_expression_value_214 = LOOKUP_SUBSCRIPT(tmp_expression_value_215, tmp_subscript_value_45);
        Py_DECREF(tmp_expression_value_215);
        if (tmp_expression_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[63]);
        Py_DECREF(tmp_expression_value_214);
        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_97 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[65]);
        if (tmp_args_element_value_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_57);

            exception_lineno = 183;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 183;
        tmp_call_result_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_57, tmp_args_element_value_97);
        Py_DECREF(tmp_called_value_57);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_call_result_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_expression_value_220;
        PyObject *tmp_subscript_value_46;
        PyObject *tmp_call_result_34;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_expression_value_221;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 184;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_220 = par_self;
        tmp_expression_value_219 = LOOKUP_ATTRIBUTE(tmp_expression_value_220, mod_consts[15]);
        if (tmp_expression_value_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_46 = var_index;
        tmp_expression_value_218 = LOOKUP_SUBSCRIPT(tmp_expression_value_219, tmp_subscript_value_46);
        Py_DECREF(tmp_expression_value_219);
        if (tmp_expression_value_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tmp_expression_value_218, mod_consts[66]);
        Py_DECREF(tmp_expression_value_218);
        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_221 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_221 == NULL)) {
            tmp_expression_value_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 184;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_98 = LOOKUP_ATTRIBUTE(tmp_expression_value_221, mod_consts[67]);
        if (tmp_args_element_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 184;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 184;
        tmp_call_result_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_58, tmp_args_element_value_98);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_call_result_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_call_result_35;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_224;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_args_element_value_102;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_223 = par_self;
        tmp_expression_value_222 = LOOKUP_ATTRIBUTE(tmp_expression_value_223, mod_consts[18]);
        if (tmp_expression_value_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_222, mod_consts[47]);
        Py_DECREF(tmp_expression_value_222);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_224 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_224 == NULL)) {
            tmp_expression_value_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_224, mod_consts[68]);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_called_value_60);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_100 = par_self;
        tmp_expression_value_225 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_225 == NULL)) {
            tmp_expression_value_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_101 = LOOKUP_ATTRIBUTE(tmp_expression_value_225, mod_consts[3]);
        if (tmp_args_element_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_102 = mod_consts[69];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_100, tmp_args_element_value_101, tmp_args_element_value_102};
            tmp_args_element_value_99 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_60, call_args);
        }

        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_101);
        if (tmp_args_element_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_59);

            exception_lineno = 186;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 186;
        tmp_call_result_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_59, tmp_args_element_value_99);
        Py_DECREF(tmp_called_value_59);
        Py_DECREF(tmp_args_element_value_99);
        if (tmp_call_result_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_expression_value_228;
        PyObject *tmp_subscript_value_47;
        PyObject *tmp_call_result_36;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_expression_value_230;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_228 = par_self;
        tmp_expression_value_227 = LOOKUP_ATTRIBUTE(tmp_expression_value_228, mod_consts[18]);
        if (tmp_expression_value_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_47 = var_index;
        tmp_expression_value_226 = LOOKUP_SUBSCRIPT(tmp_expression_value_227, tmp_subscript_value_47);
        Py_DECREF(tmp_expression_value_227);
        if (tmp_expression_value_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_226, mod_consts[70]);
        Py_DECREF(tmp_expression_value_226);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_229 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_229 == NULL)) {
            tmp_expression_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_103 = LOOKUP_ATTRIBUTE(tmp_expression_value_229, mod_consts[71]);
        if (tmp_args_element_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_103);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_230 = par_self;
        tmp_args_element_value_104 = LOOKUP_ATTRIBUTE(tmp_expression_value_230, mod_consts[72]);
        if (tmp_args_element_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_61);
            Py_DECREF(tmp_args_element_value_103);

            exception_lineno = 187;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = {tmp_args_element_value_103, tmp_args_element_value_104};
            tmp_call_result_36 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_61, call_args);
        }

        Py_DECREF(tmp_called_value_61);
        Py_DECREF(tmp_args_element_value_103);
        Py_DECREF(tmp_args_element_value_104);
        if (tmp_call_result_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_assattr_value_24;
        PyObject *tmp_assattr_target_24;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_expression_value_232;
        PyObject *tmp_subscript_value_48;
        CHECK_OBJECT(var_index);
        tmp_assattr_value_24 = var_index;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_232 = par_self;
        tmp_expression_value_231 = LOOKUP_ATTRIBUTE(tmp_expression_value_232, mod_consts[18]);
        if (tmp_expression_value_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_48 = var_index;
        tmp_assattr_target_24 = LOOKUP_SUBSCRIPT(tmp_expression_value_231, tmp_subscript_value_48);
        Py_DECREF(tmp_expression_value_231);
        if (tmp_assattr_target_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_24, mod_consts[73], tmp_assattr_value_24);
        Py_DECREF(tmp_assattr_target_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_assattr_value_25;
        PyObject *tmp_assattr_target_25;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_subscript_value_49;
        tmp_assattr_value_25 = mod_consts[115];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_234 = par_self;
        tmp_expression_value_233 = LOOKUP_ATTRIBUTE(tmp_expression_value_234, mod_consts[18]);
        if (tmp_expression_value_233 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_49 = var_index;
        tmp_assattr_target_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_233, tmp_subscript_value_49);
        Py_DECREF(tmp_expression_value_233);
        if (tmp_assattr_target_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_25, mod_consts[75], tmp_assattr_value_25);
        Py_DECREF(tmp_assattr_target_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_235;
        PyObject *tmp_expression_value_236;
        PyObject *tmp_call_result_37;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_237;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_args_element_value_108;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_236 = par_self;
        tmp_expression_value_235 = LOOKUP_ATTRIBUTE(tmp_expression_value_236, mod_consts[19]);
        if (tmp_expression_value_235 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_235, mod_consts[47]);
        Py_DECREF(tmp_expression_value_235);
        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_237 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_237 == NULL)) {
            tmp_expression_value_237 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_237 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_237, mod_consts[68]);
        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_63);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_106 = par_self;
        tmp_expression_value_238 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_238 == NULL)) {
            tmp_expression_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_238 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_107 = LOOKUP_ATTRIBUTE(tmp_expression_value_238, mod_consts[3]);
        if (tmp_args_element_value_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_63);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_108 = mod_consts[116];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 191;
        {
            PyObject *call_args[] = {tmp_args_element_value_106, tmp_args_element_value_107, tmp_args_element_value_108};
            tmp_args_element_value_105 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_63, call_args);
        }

        Py_DECREF(tmp_called_value_63);
        Py_DECREF(tmp_args_element_value_107);
        if (tmp_args_element_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 191;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 191;
        tmp_call_result_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_62, tmp_args_element_value_105);
        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_element_value_105);
        if (tmp_call_result_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_expression_value_240;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_subscript_value_50;
        PyObject *tmp_call_result_38;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_expression_value_243;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_241 = par_self;
        tmp_expression_value_240 = LOOKUP_ATTRIBUTE(tmp_expression_value_241, mod_consts[19]);
        if (tmp_expression_value_240 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_50 = var_index;
        tmp_expression_value_239 = LOOKUP_SUBSCRIPT(tmp_expression_value_240, tmp_subscript_value_50);
        Py_DECREF(tmp_expression_value_240);
        if (tmp_expression_value_239 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_239, mod_consts[70]);
        Py_DECREF(tmp_expression_value_239);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_242 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_242 == NULL)) {
            tmp_expression_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_242 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_242, mod_consts[71]);
        if (tmp_args_element_value_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_args_element_value_109);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_243 = par_self;
        tmp_args_element_value_110 = LOOKUP_ATTRIBUTE(tmp_expression_value_243, mod_consts[117]);
        if (tmp_args_element_value_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_args_element_value_109);

            exception_lineno = 192;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 192;
        {
            PyObject *call_args[] = {tmp_args_element_value_109, tmp_args_element_value_110};
            tmp_call_result_38 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_64, call_args);
        }

        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_109);
        Py_DECREF(tmp_args_element_value_110);
        if (tmp_call_result_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_assattr_value_26;
        PyObject *tmp_assattr_target_26;
        PyObject *tmp_expression_value_244;
        PyObject *tmp_expression_value_245;
        PyObject *tmp_subscript_value_51;
        CHECK_OBJECT(var_index);
        tmp_assattr_value_26 = var_index;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_245 = par_self;
        tmp_expression_value_244 = LOOKUP_ATTRIBUTE(tmp_expression_value_245, mod_consts[19]);
        if (tmp_expression_value_244 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_51 = var_index;
        tmp_assattr_target_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_244, tmp_subscript_value_51);
        Py_DECREF(tmp_expression_value_244);
        if (tmp_assattr_target_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_26, mod_consts[73], tmp_assattr_value_26);
        Py_DECREF(tmp_assattr_target_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_246;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_call_result_39;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_248;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_args_element_value_114;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_247 = par_self;
        tmp_expression_value_246 = LOOKUP_ATTRIBUTE(tmp_expression_value_247, mod_consts[20]);
        if (tmp_expression_value_246 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_246, mod_consts[47]);
        Py_DECREF(tmp_expression_value_246);
        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_248 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_248 == NULL)) {
            tmp_expression_value_248 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_248 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_248, mod_consts[68]);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_called_value_66);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_112 = par_self;
        tmp_expression_value_249 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_249 == NULL)) {
            tmp_expression_value_249 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_249 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_113 = LOOKUP_ATTRIBUTE(tmp_expression_value_249, mod_consts[3]);
        if (tmp_args_element_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_114 = mod_consts[118];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_112, tmp_args_element_value_113, tmp_args_element_value_114};
            tmp_args_element_value_111 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_66, call_args);
        }

        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_113);
        if (tmp_args_element_value_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 195;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 195;
        tmp_call_result_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_111);
        Py_DECREF(tmp_called_value_65);
        Py_DECREF(tmp_args_element_value_111);
        if (tmp_call_result_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_250;
        PyObject *tmp_expression_value_251;
        PyObject *tmp_expression_value_252;
        PyObject *tmp_subscript_value_52;
        PyObject *tmp_call_result_40;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_expression_value_254;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 196;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_252 = par_self;
        tmp_expression_value_251 = LOOKUP_ATTRIBUTE(tmp_expression_value_252, mod_consts[20]);
        if (tmp_expression_value_251 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_52 = var_index;
        tmp_expression_value_250 = LOOKUP_SUBSCRIPT(tmp_expression_value_251, tmp_subscript_value_52);
        Py_DECREF(tmp_expression_value_251);
        if (tmp_expression_value_250 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_250, mod_consts[70]);
        Py_DECREF(tmp_expression_value_250);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_expression_value_253 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_253 == NULL)) {
            tmp_expression_value_253 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_253 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 196;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_115 = LOOKUP_ATTRIBUTE(tmp_expression_value_253, mod_consts[71]);
        if (tmp_args_element_value_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 196;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_args_element_value_115);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 196;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_254 = par_self;
        tmp_args_element_value_116 = LOOKUP_ATTRIBUTE(tmp_expression_value_254, mod_consts[119]);
        if (tmp_args_element_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);
            Py_DECREF(tmp_args_element_value_115);

            exception_lineno = 196;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_115, tmp_args_element_value_116};
            tmp_call_result_40 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_67, call_args);
        }

        Py_DECREF(tmp_called_value_67);
        Py_DECREF(tmp_args_element_value_115);
        Py_DECREF(tmp_args_element_value_116);
        if (tmp_call_result_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_assattr_value_27;
        PyObject *tmp_assattr_target_27;
        PyObject *tmp_expression_value_255;
        PyObject *tmp_expression_value_256;
        PyObject *tmp_subscript_value_53;
        CHECK_OBJECT(var_index);
        tmp_assattr_value_27 = var_index;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 197;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_256 = par_self;
        tmp_expression_value_255 = LOOKUP_ATTRIBUTE(tmp_expression_value_256, mod_consts[20]);
        if (tmp_expression_value_255 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_53 = var_index;
        tmp_assattr_target_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_255, tmp_subscript_value_53);
        Py_DECREF(tmp_expression_value_255);
        if (tmp_assattr_target_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_27, mod_consts[73], tmp_assattr_value_27);
        Py_DECREF(tmp_assattr_target_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_expression_value_257;
        PyObject *tmp_expression_value_258;
        PyObject *tmp_subscript_value_54;
        PyObject *tmp_call_result_41;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 198;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_258 = par_self;
        tmp_expression_value_257 = LOOKUP_ATTRIBUTE(tmp_expression_value_258, mod_consts[20]);
        if (tmp_expression_value_257 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_54 = var_index;
        tmp_called_instance_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_257, tmp_subscript_value_54);
        Py_DECREF(tmp_expression_value_257);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 198;
        tmp_call_result_41 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[120]);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_call_result_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_259;
        PyObject *tmp_call_result_42;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_expression_value_260;
        PyObject *tmp_expression_value_261;
        PyObject *tmp_subscript_value_55;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_expression_value_262;
        PyObject *tmp_args_element_value_120;
        if (var_pressureGridSizer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_259 = var_pressureGridSizer;
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_259, mod_consts[34]);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_68);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 201;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_261 = par_self;
        tmp_expression_value_260 = LOOKUP_ATTRIBUTE(tmp_expression_value_261, mod_consts[15]);
        if (tmp_expression_value_260 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 201;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_55 = var_index;
        tmp_args_element_value_117 = LOOKUP_SUBSCRIPT(tmp_expression_value_260, tmp_subscript_value_55);
        Py_DECREF(tmp_expression_value_260);
        if (tmp_args_element_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 201;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_118 = mod_consts[45];
        tmp_expression_value_262 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_262 == NULL)) {
            tmp_expression_value_262 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_262 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_117);

            exception_lineno = 201;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_119 = LOOKUP_ATTRIBUTE(tmp_expression_value_262, mod_consts[99]);
        if (tmp_args_element_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_args_element_value_117);

            exception_lineno = 201;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_120 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 201;
        {
            PyObject *call_args[] = {tmp_args_element_value_117, tmp_args_element_value_118, tmp_args_element_value_119, tmp_args_element_value_120};
            tmp_call_result_42 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_68, call_args);
        }

        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_117);
        Py_DECREF(tmp_args_element_value_119);
        if (tmp_call_result_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_263;
        PyObject *tmp_call_result_43;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_expression_value_264;
        PyObject *tmp_expression_value_265;
        PyObject *tmp_subscript_value_56;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_args_element_value_123;
        PyObject *tmp_expression_value_266;
        PyObject *tmp_args_element_value_124;
        if (var_pressureGridSizer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_263 = var_pressureGridSizer;
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_263, mod_consts[34]);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_69);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 202;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_265 = par_self;
        tmp_expression_value_264 = LOOKUP_ATTRIBUTE(tmp_expression_value_265, mod_consts[16]);
        if (tmp_expression_value_264 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 202;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_56 = var_index;
        tmp_args_element_value_121 = LOOKUP_SUBSCRIPT(tmp_expression_value_264, tmp_subscript_value_56);
        Py_DECREF(tmp_expression_value_264);
        if (tmp_args_element_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 202;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_122 = mod_consts[45];
        tmp_expression_value_266 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_266 == NULL)) {
            tmp_expression_value_266 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_266 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 202;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_123 = LOOKUP_ATTRIBUTE(tmp_expression_value_266, mod_consts[99]);
        if (tmp_args_element_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);
            Py_DECREF(tmp_args_element_value_121);

            exception_lineno = 202;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_124 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 202;
        {
            PyObject *call_args[] = {tmp_args_element_value_121, tmp_args_element_value_122, tmp_args_element_value_123, tmp_args_element_value_124};
            tmp_call_result_43 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_69, call_args);
        }

        Py_DECREF(tmp_called_value_69);
        Py_DECREF(tmp_args_element_value_121);
        Py_DECREF(tmp_args_element_value_123);
        if (tmp_call_result_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_267;
        PyObject *tmp_call_result_44;
        PyObject *tmp_args_element_value_125;
        PyObject *tmp_expression_value_268;
        PyObject *tmp_expression_value_269;
        PyObject *tmp_subscript_value_57;
        PyObject *tmp_args_element_value_126;
        PyObject *tmp_args_element_value_127;
        PyObject *tmp_expression_value_270;
        PyObject *tmp_args_element_value_128;
        if (var_pressureGridSizer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_267 = var_pressureGridSizer;
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_267, mod_consts[34]);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_70);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_269 = par_self;
        tmp_expression_value_268 = LOOKUP_ATTRIBUTE(tmp_expression_value_269, mod_consts[18]);
        if (tmp_expression_value_268 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_57 = var_index;
        tmp_args_element_value_125 = LOOKUP_SUBSCRIPT(tmp_expression_value_268, tmp_subscript_value_57);
        Py_DECREF(tmp_expression_value_268);
        if (tmp_args_element_value_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_126 = mod_consts[45];
        tmp_expression_value_270 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_270 == NULL)) {
            tmp_expression_value_270 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_270 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_args_element_value_125);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_127 = LOOKUP_ATTRIBUTE(tmp_expression_value_270, mod_consts[99]);
        if (tmp_args_element_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_args_element_value_125);

            exception_lineno = 203;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_128 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_125, tmp_args_element_value_126, tmp_args_element_value_127, tmp_args_element_value_128};
            tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_70, call_args);
        }

        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_125);
        Py_DECREF(tmp_args_element_value_127);
        if (tmp_call_result_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_271;
        PyObject *tmp_call_result_45;
        PyObject *tmp_args_element_value_129;
        PyObject *tmp_expression_value_272;
        PyObject *tmp_expression_value_273;
        PyObject *tmp_subscript_value_58;
        PyObject *tmp_args_element_value_130;
        PyObject *tmp_args_element_value_131;
        PyObject *tmp_expression_value_274;
        PyObject *tmp_args_element_value_132;
        if (var_pressureGridSizer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_271 = var_pressureGridSizer;
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_271, mod_consts[34]);
        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_71);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_273 = par_self;
        tmp_expression_value_272 = LOOKUP_ATTRIBUTE(tmp_expression_value_273, mod_consts[17]);
        if (tmp_expression_value_272 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_58 = var_index;
        tmp_args_element_value_129 = LOOKUP_SUBSCRIPT(tmp_expression_value_272, tmp_subscript_value_58);
        Py_DECREF(tmp_expression_value_272);
        if (tmp_args_element_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_130 = mod_consts[45];
        tmp_expression_value_274 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_274 == NULL)) {
            tmp_expression_value_274 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_274 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_129);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_131 = LOOKUP_ATTRIBUTE(tmp_expression_value_274, mod_consts[99]);
        if (tmp_args_element_value_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);
            Py_DECREF(tmp_args_element_value_129);

            exception_lineno = 204;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_132 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 204;
        {
            PyObject *call_args[] = {tmp_args_element_value_129, tmp_args_element_value_130, tmp_args_element_value_131, tmp_args_element_value_132};
            tmp_call_result_45 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_71, call_args);
        }

        Py_DECREF(tmp_called_value_71);
        Py_DECREF(tmp_args_element_value_129);
        Py_DECREF(tmp_args_element_value_131);
        if (tmp_call_result_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_275;
        PyObject *tmp_call_result_46;
        PyObject *tmp_args_element_value_133;
        PyObject *tmp_expression_value_276;
        PyObject *tmp_expression_value_277;
        PyObject *tmp_subscript_value_59;
        PyObject *tmp_args_element_value_134;
        PyObject *tmp_args_element_value_135;
        PyObject *tmp_expression_value_278;
        PyObject *tmp_args_element_value_136;
        if (var_pressureGridSizer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_275 = var_pressureGridSizer;
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_275, mod_consts[34]);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_72);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_277 = par_self;
        tmp_expression_value_276 = LOOKUP_ATTRIBUTE(tmp_expression_value_277, mod_consts[19]);
        if (tmp_expression_value_276 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_59 = var_index;
        tmp_args_element_value_133 = LOOKUP_SUBSCRIPT(tmp_expression_value_276, tmp_subscript_value_59);
        Py_DECREF(tmp_expression_value_276);
        if (tmp_args_element_value_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_134 = mod_consts[45];
        tmp_expression_value_278 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_278 == NULL)) {
            tmp_expression_value_278 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_278 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_args_element_value_133);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_278, mod_consts[99]);
        if (tmp_args_element_value_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_args_element_value_133);

            exception_lineno = 205;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_136 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_args_element_value_133, tmp_args_element_value_134, tmp_args_element_value_135, tmp_args_element_value_136};
            tmp_call_result_46 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_72, call_args);
        }

        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_element_value_133);
        Py_DECREF(tmp_args_element_value_135);
        if (tmp_call_result_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_279;
        PyObject *tmp_call_result_47;
        PyObject *tmp_args_element_value_137;
        PyObject *tmp_expression_value_280;
        PyObject *tmp_expression_value_281;
        PyObject *tmp_subscript_value_60;
        PyObject *tmp_args_element_value_138;
        PyObject *tmp_args_element_value_139;
        PyObject *tmp_expression_value_282;
        PyObject *tmp_args_element_value_140;
        if (var_pressureGridSizer == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_279 = var_pressureGridSizer;
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_279, mod_consts[34]);
        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_73);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_281 = par_self;
        tmp_expression_value_280 = LOOKUP_ATTRIBUTE(tmp_expression_value_281, mod_consts[20]);
        if (tmp_expression_value_280 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_60 = var_index;
        tmp_args_element_value_137 = LOOKUP_SUBSCRIPT(tmp_expression_value_280, tmp_subscript_value_60);
        Py_DECREF(tmp_expression_value_280);
        if (tmp_args_element_value_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_138 = mod_consts[45];
        tmp_expression_value_282 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_282 == NULL)) {
            tmp_expression_value_282 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_282 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_137);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_139 = LOOKUP_ATTRIBUTE(tmp_expression_value_282, mod_consts[99]);
        if (tmp_args_element_value_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);
            Py_DECREF(tmp_args_element_value_137);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_140 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 206;
        {
            PyObject *call_args[] = {tmp_args_element_value_137, tmp_args_element_value_138, tmp_args_element_value_139, tmp_args_element_value_140};
            tmp_call_result_47 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_73, call_args);
        }

        Py_DECREF(tmp_called_value_73);
        Py_DECREF(tmp_args_element_value_137);
        Py_DECREF(tmp_args_element_value_139);
        if (tmp_call_result_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_47);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 151;
        type_description_1 = "ooooooooooooNoooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_283;
        PyObject *tmp_call_result_48;
        PyObject *tmp_args_element_value_141;
        PyObject *tmp_args_element_value_142;
        PyObject *tmp_args_element_value_143;
        PyObject *tmp_left_value_44;
        PyObject *tmp_expression_value_284;
        PyObject *tmp_right_value_44;
        PyObject *tmp_expression_value_285;
        PyObject *tmp_args_element_value_144;
        CHECK_OBJECT(var_pressureSizer);
        tmp_expression_value_283 = var_pressureSizer;
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_283, mod_consts[34]);
        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_pressureGridSizer == NULL) {
            Py_DECREF(tmp_called_value_74);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_141 = var_pressureGridSizer;
        tmp_args_element_value_142 = mod_consts[45];
        tmp_expression_value_284 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_284 == NULL)) {
            tmp_expression_value_284 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_284 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_284, mod_consts[36]);
        if (tmp_left_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_285 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_285 == NULL)) {
            tmp_expression_value_285 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_285 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_left_value_44);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_285, mod_consts[99]);
        if (tmp_right_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_left_value_44);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_143 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_44, tmp_right_value_44);
        Py_DECREF(tmp_left_value_44);
        Py_DECREF(tmp_right_value_44);
        if (tmp_args_element_value_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 208;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_144 = mod_consts[104];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_value_141, tmp_args_element_value_142, tmp_args_element_value_143, tmp_args_element_value_144};
            tmp_call_result_48 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_74, call_args);
        }

        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_143);
        if (tmp_call_result_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_assattr_value_28;
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_286;
        PyObject *tmp_args_element_value_145;
        PyObject *tmp_args_element_value_146;
        PyObject *tmp_expression_value_287;
        PyObject *tmp_args_element_value_147;
        PyObject *tmp_assattr_target_28;
        tmp_expression_value_286 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_286 == NULL)) {
            tmp_expression_value_286 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_286 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tmp_expression_value_286, mod_consts[68]);
        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_75);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_145 = par_self;
        tmp_expression_value_287 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_287 == NULL)) {
            tmp_expression_value_287 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_287 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_75);

            exception_lineno = 212;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_146 = LOOKUP_ATTRIBUTE(tmp_expression_value_287, mod_consts[122]);
        if (tmp_args_element_value_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_75);

            exception_lineno = 212;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_147 = mod_consts[123];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_145, tmp_args_element_value_146, tmp_args_element_value_147};
            tmp_assattr_value_28 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_75, call_args);
        }

        Py_DECREF(tmp_called_value_75);
        Py_DECREF(tmp_args_element_value_146);
        if (tmp_assattr_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_28 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_28, mod_consts[124], tmp_assattr_value_28);
        Py_DECREF(tmp_assattr_value_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_288;
        PyObject *tmp_expression_value_289;
        PyObject *tmp_call_result_49;
        PyObject *tmp_args_element_value_148;
        PyObject *tmp_expression_value_290;
        PyObject *tmp_args_element_value_149;
        PyObject *tmp_expression_value_291;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_289 = par_self;
        tmp_expression_value_288 = LOOKUP_ATTRIBUTE(tmp_expression_value_289, mod_consts[124]);
        if (tmp_expression_value_288 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_288, mod_consts[70]);
        Py_DECREF(tmp_expression_value_288);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_290 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_290 == NULL)) {
            tmp_expression_value_290 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_290 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_148 = LOOKUP_ATTRIBUTE(tmp_expression_value_290, mod_consts[71]);
        if (tmp_args_element_value_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_args_element_value_148);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_291 = par_self;
        tmp_args_element_value_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_291, mod_consts[125]);
        if (tmp_args_element_value_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_args_element_value_148);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_148, tmp_args_element_value_149};
            tmp_call_result_49 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_76, call_args);
        }

        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_148);
        Py_DECREF(tmp_args_element_value_149);
        if (tmp_call_result_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_292;
        PyObject *tmp_call_result_50;
        PyObject *tmp_args_element_value_150;
        PyObject *tmp_expression_value_293;
        PyObject *tmp_args_element_value_151;
        PyObject *tmp_expression_value_294;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_292 = par_self;
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tmp_expression_value_292, mod_consts[70]);
        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_293 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_293 == NULL)) {
            tmp_expression_value_293 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_293 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);

            exception_lineno = 214;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_150 = LOOKUP_ATTRIBUTE(tmp_expression_value_293, mod_consts[126]);
        if (tmp_args_element_value_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);

            exception_lineno = 214;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_150);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_294 = par_self;
        tmp_args_element_value_151 = LOOKUP_ATTRIBUTE(tmp_expression_value_294, mod_consts[127]);
        if (tmp_args_element_value_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_77);
            Py_DECREF(tmp_args_element_value_150);

            exception_lineno = 214;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 214;
        {
            PyObject *call_args[] = {tmp_args_element_value_150, tmp_args_element_value_151};
            tmp_call_result_50 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_77, call_args);
        }

        Py_DECREF(tmp_called_value_77);
        Py_DECREF(tmp_args_element_value_150);
        Py_DECREF(tmp_args_element_value_151);
        if (tmp_call_result_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_295;
        PyObject *tmp_call_result_51;
        PyObject *tmp_args_element_value_152;
        PyObject *tmp_expression_value_296;
        PyObject *tmp_args_element_value_153;
        PyObject *tmp_args_element_value_154;
        PyObject *tmp_expression_value_297;
        PyObject *tmp_args_element_value_155;
        CHECK_OBJECT(var_btnSizer);
        tmp_expression_value_295 = var_btnSizer;
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_295, mod_consts[34]);
        if (tmp_called_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_78);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 215;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_296 = par_self;
        tmp_args_element_value_152 = LOOKUP_ATTRIBUTE(tmp_expression_value_296, mod_consts[124]);
        if (tmp_args_element_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 215;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_153 = mod_consts[35];
        tmp_expression_value_297 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_297 == NULL)) {
            tmp_expression_value_297 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_297 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_args_element_value_152);

            exception_lineno = 215;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_154 = LOOKUP_ATTRIBUTE(tmp_expression_value_297, mod_consts[36]);
        if (tmp_args_element_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_args_element_value_152);

            exception_lineno = 215;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_155 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_args_element_value_152, tmp_args_element_value_153, tmp_args_element_value_154, tmp_args_element_value_155};
            tmp_call_result_51 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_78, call_args);
        }

        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_element_value_152);
        Py_DECREF(tmp_args_element_value_154);
        if (tmp_call_result_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_298;
        PyObject *tmp_call_result_52;
        PyObject *tmp_args_element_value_156;
        PyObject *tmp_args_element_value_157;
        PyObject *tmp_args_element_value_158;
        PyObject *tmp_left_value_45;
        PyObject *tmp_expression_value_299;
        PyObject *tmp_right_value_45;
        PyObject *tmp_expression_value_300;
        PyObject *tmp_args_element_value_159;
        CHECK_OBJECT(var_channelsSizer);
        tmp_expression_value_298 = var_channelsSizer;
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tmp_expression_value_298, mod_consts[34]);
        if (tmp_called_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_thermocoupleSizer);
        tmp_args_element_value_156 = var_thermocoupleSizer;
        tmp_args_element_value_157 = mod_consts[35];
        tmp_expression_value_299 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_299 == NULL)) {
            tmp_expression_value_299 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_299 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_299, mod_consts[36]);
        if (tmp_left_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_300 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_300 == NULL)) {
            tmp_expression_value_300 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_300 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_left_value_45);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_45 = LOOKUP_ATTRIBUTE(tmp_expression_value_300, mod_consts[99]);
        if (tmp_right_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);
            Py_DECREF(tmp_left_value_45);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_158 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_45, tmp_right_value_45);
        Py_DECREF(tmp_left_value_45);
        Py_DECREF(tmp_right_value_45);
        if (tmp_args_element_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_79);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_159 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 219;
        {
            PyObject *call_args[] = {tmp_args_element_value_156, tmp_args_element_value_157, tmp_args_element_value_158, tmp_args_element_value_159};
            tmp_call_result_52 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_79, call_args);
        }

        Py_DECREF(tmp_called_value_79);
        Py_DECREF(tmp_args_element_value_158);
        if (tmp_call_result_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_301;
        PyObject *tmp_call_result_53;
        PyObject *tmp_args_element_value_160;
        PyObject *tmp_args_element_value_161;
        PyObject *tmp_args_element_value_162;
        PyObject *tmp_left_value_46;
        PyObject *tmp_expression_value_302;
        PyObject *tmp_right_value_46;
        PyObject *tmp_expression_value_303;
        PyObject *tmp_args_element_value_163;
        CHECK_OBJECT(var_channelsSizer);
        tmp_expression_value_301 = var_channelsSizer;
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_301, mod_consts[34]);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pressureSizer);
        tmp_args_element_value_160 = var_pressureSizer;
        tmp_args_element_value_161 = mod_consts[35];
        tmp_expression_value_302 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_302 == NULL)) {
            tmp_expression_value_302 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_302 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 220;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_302, mod_consts[36]);
        if (tmp_left_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 220;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_303 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_303 == NULL)) {
            tmp_expression_value_303 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_303 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_left_value_46);

            exception_lineno = 220;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_303, mod_consts[99]);
        if (tmp_right_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_left_value_46);

            exception_lineno = 220;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_162 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_46, tmp_right_value_46);
        Py_DECREF(tmp_left_value_46);
        Py_DECREF(tmp_right_value_46);
        if (tmp_args_element_value_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 220;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_163 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 220;
        {
            PyObject *call_args[] = {tmp_args_element_value_160, tmp_args_element_value_161, tmp_args_element_value_162, tmp_args_element_value_163};
            tmp_call_result_53 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_80, call_args);
        }

        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_element_value_162);
        if (tmp_call_result_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_304;
        PyObject *tmp_call_result_54;
        PyObject *tmp_args_element_value_164;
        PyObject *tmp_args_element_value_165;
        PyObject *tmp_args_element_value_166;
        PyObject *tmp_left_value_47;
        PyObject *tmp_expression_value_305;
        PyObject *tmp_right_value_47;
        PyObject *tmp_expression_value_306;
        PyObject *tmp_args_element_value_167;
        CHECK_OBJECT(var_topSizer);
        tmp_expression_value_304 = var_topSizer;
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_304, mod_consts[34]);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_instructionsSizer);
        tmp_args_element_value_164 = var_instructionsSizer;
        tmp_args_element_value_165 = mod_consts[35];
        tmp_expression_value_305 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_305 == NULL)) {
            tmp_expression_value_305 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_305 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_305, mod_consts[36]);
        if (tmp_left_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_306 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_306 == NULL)) {
            tmp_expression_value_306 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_306 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);
            Py_DECREF(tmp_left_value_47);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_306, mod_consts[98]);
        if (tmp_right_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);
            Py_DECREF(tmp_left_value_47);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_166 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_47, tmp_right_value_47);
        Py_DECREF(tmp_left_value_47);
        Py_DECREF(tmp_right_value_47);
        if (tmp_args_element_value_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_81);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_167 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 221;
        {
            PyObject *call_args[] = {tmp_args_element_value_164, tmp_args_element_value_165, tmp_args_element_value_166, tmp_args_element_value_167};
            tmp_call_result_54 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_81, call_args);
        }

        Py_DECREF(tmp_called_value_81);
        Py_DECREF(tmp_args_element_value_166);
        if (tmp_call_result_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_307;
        PyObject *tmp_call_result_55;
        PyObject *tmp_args_element_value_168;
        PyObject *tmp_args_element_value_169;
        PyObject *tmp_args_element_value_170;
        PyObject *tmp_left_value_48;
        PyObject *tmp_expression_value_308;
        PyObject *tmp_right_value_48;
        PyObject *tmp_expression_value_309;
        PyObject *tmp_args_element_value_171;
        CHECK_OBJECT(var_topSizer);
        tmp_expression_value_307 = var_topSizer;
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_307, mod_consts[34]);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelsSizer);
        tmp_args_element_value_168 = var_channelsSizer;
        tmp_args_element_value_169 = mod_consts[35];
        tmp_expression_value_308 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_308 == NULL)) {
            tmp_expression_value_308 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_308 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 222;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_308, mod_consts[36]);
        if (tmp_left_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 222;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_309 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_309 == NULL)) {
            tmp_expression_value_309 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_309 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_left_value_48);

            exception_lineno = 222;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_48 = LOOKUP_ATTRIBUTE(tmp_expression_value_309, mod_consts[99]);
        if (tmp_right_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_left_value_48);

            exception_lineno = 222;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_170 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_48, tmp_right_value_48);
        Py_DECREF(tmp_left_value_48);
        Py_DECREF(tmp_right_value_48);
        if (tmp_args_element_value_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 222;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_171 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 222;
        {
            PyObject *call_args[] = {tmp_args_element_value_168, tmp_args_element_value_169, tmp_args_element_value_170, tmp_args_element_value_171};
            tmp_call_result_55 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_82, call_args);
        }

        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_170);
        if (tmp_call_result_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_310;
        PyObject *tmp_call_result_56;
        PyObject *tmp_args_element_value_172;
        PyObject *tmp_args_element_value_173;
        PyObject *tmp_args_element_value_174;
        PyObject *tmp_left_value_49;
        PyObject *tmp_expression_value_311;
        PyObject *tmp_right_value_49;
        PyObject *tmp_expression_value_312;
        PyObject *tmp_args_element_value_175;
        CHECK_OBJECT(var_topSizer);
        tmp_expression_value_310 = var_topSizer;
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_310, mod_consts[34]);
        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_btnSizer);
        tmp_args_element_value_172 = var_btnSizer;
        tmp_args_element_value_173 = mod_consts[35];
        tmp_expression_value_311 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_311 == NULL)) {
            tmp_expression_value_311 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_311 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_311, mod_consts[36]);
        if (tmp_left_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_312 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_312 == NULL)) {
            tmp_expression_value_312 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_312 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_left_value_49);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_49 = LOOKUP_ATTRIBUTE(tmp_expression_value_312, mod_consts[128]);
        if (tmp_right_value_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);
            Py_DECREF(tmp_left_value_49);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_174 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_49, tmp_right_value_49);
        Py_DECREF(tmp_left_value_49);
        Py_DECREF(tmp_right_value_49);
        if (tmp_args_element_value_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_83);

            exception_lineno = 223;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_175 = mod_consts[37];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = {tmp_args_element_value_172, tmp_args_element_value_173, tmp_args_element_value_174, tmp_args_element_value_175};
            tmp_call_result_56 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_83, call_args);
        }

        Py_DECREF(tmp_called_value_83);
        Py_DECREF(tmp_args_element_value_174);
        if (tmp_call_result_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_57;
        PyObject *tmp_args_element_value_176;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = par_self;
        CHECK_OBJECT(var_topSizer);
        tmp_args_element_value_176 = var_topSizer;
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 225;
        tmp_call_result_57 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[52], tmp_args_element_value_176);
        if (tmp_call_result_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_313;
        PyObject *tmp_call_result_58;
        PyObject *tmp_args_element_value_177;
        CHECK_OBJECT(var_topSizer);
        tmp_expression_value_313 = var_topSizer;
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_313, mod_consts[129]);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_84);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 226;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_177 = par_self;
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 226;
        tmp_call_result_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_84, tmp_args_element_value_177);
        Py_DECREF(tmp_called_value_84);
        if (tmp_call_result_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_314;
        PyObject *tmp_call_result_59;
        PyObject *tmp_args_element_value_178;
        CHECK_OBJECT(var_topSizer);
        tmp_expression_value_314 = var_topSizer;
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_314, mod_consts[130]);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_85);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 227;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_178 = par_self;
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 227;
        tmp_call_result_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_85, tmp_args_element_value_178);
        Py_DECREF(tmp_called_value_85);
        if (tmp_call_result_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_60;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 228;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_12 = par_self;
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 228;
        tmp_call_result_60 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[131]);
        if (tmp_call_result_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_61;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 229;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_13 = par_self;
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 229;
        tmp_call_result_61 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[132]);
        if (tmp_call_result_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_315;
        PyObject *tmp_call_result_62;
        PyObject *tmp_args_element_value_179;
        PyObject *tmp_expression_value_316;
        PyObject *tmp_args_element_value_180;
        tmp_expression_value_315 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_expression_value_315 == NULL)) {
            tmp_expression_value_315 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_expression_value_315 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_315, mod_consts[134]);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_86);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 234;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_316 = par_self;
        tmp_args_element_value_179 = LOOKUP_ATTRIBUTE(tmp_expression_value_316, mod_consts[135]);
        if (tmp_args_element_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 234;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_180 = mod_consts[136];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 234;
        {
            PyObject *call_args[] = {tmp_args_element_value_179, tmp_args_element_value_180};
            tmp_call_result_62 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_86, call_args);
        }

        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_args_element_value_179);
        if (tmp_call_result_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_317;
        PyObject *tmp_call_result_63;
        PyObject *tmp_args_element_value_181;
        PyObject *tmp_expression_value_318;
        PyObject *tmp_args_element_value_182;
        tmp_expression_value_317 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_expression_value_317 == NULL)) {
            tmp_expression_value_317 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_expression_value_317 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_317, mod_consts[134]);
        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_87);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_318 = par_self;
        tmp_args_element_value_181 = LOOKUP_ATTRIBUTE(tmp_expression_value_318, mod_consts[137]);
        if (tmp_args_element_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_87);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_182 = mod_consts[138];
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 235;
        {
            PyObject *call_args[] = {tmp_args_element_value_181, tmp_args_element_value_182};
            tmp_call_result_63 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_87, call_args);
        }

        Py_DECREF(tmp_called_value_87);
        Py_DECREF(tmp_args_element_value_181);
        if (tmp_call_result_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_expression_value_319;
        PyObject *tmp_expression_value_320;
        PyObject *tmp_call_result_64;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 237;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_320 = par_self;
        tmp_expression_value_319 = LOOKUP_ATTRIBUTE(tmp_expression_value_320, mod_consts[7]);
        if (tmp_expression_value_319 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_319, mod_consts[41]);
        Py_DECREF(tmp_expression_value_319);
        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 237;
        tmp_call_result_64 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_14,
            mod_consts[139],
            PyTuple_GET_ITEM(mod_consts[140], 0)
        );

        Py_DECREF(tmp_called_instance_14);
        if (tmp_call_result_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_expression_value_321;
        PyObject *tmp_expression_value_322;
        PyObject *tmp_call_result_65;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 238;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_322 = par_self;
        tmp_expression_value_321 = LOOKUP_ATTRIBUTE(tmp_expression_value_322, mod_consts[7]);
        if (tmp_expression_value_321 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_321, mod_consts[41]);
        Py_DECREF(tmp_expression_value_321);
        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 238;
        tmp_call_result_65 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_15,
            mod_consts[141],
            PyTuple_GET_ITEM(mod_consts[142], 0)
        );

        Py_DECREF(tmp_called_instance_15);
        if (tmp_call_result_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_66;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 239;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_16 = par_self;
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 239;
        tmp_call_result_66 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, mod_consts[143]);
        if (tmp_call_result_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_67;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 242;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_17 = par_self;
        frame_dad5749985010a2735e6861906bedf81->m_frame.f_lineno = 242;
        tmp_call_result_67 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, mod_consts[144]);
        if (tmp_call_result_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooooNoooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dad5749985010a2735e6861906bedf81);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_dad5749985010a2735e6861906bedf81);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dad5749985010a2735e6861906bedf81, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dad5749985010a2735e6861906bedf81->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dad5749985010a2735e6861906bedf81, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dad5749985010a2735e6861906bedf81,
        type_description_1,
        par_self,
        par_parent,
        var_thermocoupleGroup,
        var_thermocoupleSizer,
        var_pressureGroup,
        var_pressureSizer,
        var_instructionsSizer,
        var_thermocoupleColumnSizers,
        var_pressureGridSizer,
        var_btnSizer,
        var_channelsSizer,
        var_topSizer,
        NULL,
        var_numTCRows,
        var_tabIdx,
        var_index,
        var_height,
        var_width,
        var_h,
        var_idx,
        var_tabPanel,
        var_serialList,
        var_labelString
    );


    // Release cached frame if used for exception.
    if (frame_dad5749985010a2735e6861906bedf81 == cache_frame_dad5749985010a2735e6861906bedf81) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_dad5749985010a2735e6861906bedf81);
        cache_frame_dad5749985010a2735e6861906bedf81 = NULL;
    }

    assertFrameObject(frame_dad5749985010a2735e6861906bedf81);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_thermocoupleGroup);
    Py_DECREF(var_thermocoupleGroup);
    var_thermocoupleGroup = NULL;
    CHECK_OBJECT(var_thermocoupleSizer);
    Py_DECREF(var_thermocoupleSizer);
    var_thermocoupleSizer = NULL;
    CHECK_OBJECT(var_pressureGroup);
    Py_DECREF(var_pressureGroup);
    var_pressureGroup = NULL;
    CHECK_OBJECT(var_pressureSizer);
    Py_DECREF(var_pressureSizer);
    var_pressureSizer = NULL;
    CHECK_OBJECT(var_instructionsSizer);
    Py_DECREF(var_instructionsSizer);
    var_instructionsSizer = NULL;
    Py_XDECREF(var_thermocoupleColumnSizers);
    var_thermocoupleColumnSizers = NULL;
    Py_XDECREF(var_pressureGridSizer);
    var_pressureGridSizer = NULL;
    CHECK_OBJECT(var_btnSizer);
    Py_DECREF(var_btnSizer);
    var_btnSizer = NULL;
    CHECK_OBJECT(var_channelsSizer);
    Py_DECREF(var_channelsSizer);
    var_channelsSizer = NULL;
    CHECK_OBJECT(var_topSizer);
    Py_DECREF(var_topSizer);
    var_topSizer = NULL;
    Py_XDECREF(var_numTCRows);
    var_numTCRows = NULL;
    Py_XDECREF(var_tabIdx);
    var_tabIdx = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_tabPanel);
    var_tabPanel = NULL;
    Py_XDECREF(var_serialList);
    var_serialList = NULL;
    Py_XDECREF(var_labelString);
    var_labelString = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_thermocoupleGroup);
    var_thermocoupleGroup = NULL;
    Py_XDECREF(var_thermocoupleSizer);
    var_thermocoupleSizer = NULL;
    Py_XDECREF(var_pressureGroup);
    var_pressureGroup = NULL;
    Py_XDECREF(var_pressureSizer);
    var_pressureSizer = NULL;
    Py_XDECREF(var_instructionsSizer);
    var_instructionsSizer = NULL;
    Py_XDECREF(var_thermocoupleColumnSizers);
    var_thermocoupleColumnSizers = NULL;
    Py_XDECREF(var_pressureGridSizer);
    var_pressureGridSizer = NULL;
    Py_XDECREF(var_btnSizer);
    var_btnSizer = NULL;
    Py_XDECREF(var_channelsSizer);
    var_channelsSizer = NULL;
    Py_XDECREF(var_topSizer);
    var_topSizer = NULL;
    Py_XDECREF(var_numTCRows);
    var_numTCRows = NULL;
    Py_XDECREF(var_tabIdx);
    var_tabIdx = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_height);
    var_height = NULL;
    Py_XDECREF(var_width);
    var_width = NULL;
    Py_XDECREF(var_h);
    var_h = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_tabPanel);
    var_tabPanel = NULL;
    Py_XDECREF(var_serialList);
    var_serialList = NULL;
    Py_XDECREF(var_labelString);
    var_labelString = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_parent);
    Py_DECREF(par_parent);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__2_loadSavedSelections(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_index = NULL;
    PyObject *var_cmb = NULL;
    PyObject *var_placement = NULL;
    PyObject *var_txt = NULL;
    PyObject *var_label = NULL;
    PyObject *var_serialNumber = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d3a6df731b2f518925d52ff8636a91a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_d3a6df731b2f518925d52ff8636a91a6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d3a6df731b2f518925d52ff8636a91a6)) {
        Py_XDECREF(cache_frame_d3a6df731b2f518925d52ff8636a91a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3a6df731b2f518925d52ff8636a91a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3a6df731b2f518925d52ff8636a91a6 = MAKE_FUNCTION_FRAME(codeobj_d3a6df731b2f518925d52ff8636a91a6, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d3a6df731b2f518925d52ff8636a91a6->m_type_description == NULL);
    frame_d3a6df731b2f518925d52ff8636a91a6 = cache_frame_d3a6df731b2f518925d52ff8636a91a6;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d3a6df731b2f518925d52ff8636a91a6);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d3a6df731b2f518925d52ff8636a91a6) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[13]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 248;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 248;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 248;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 248;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooo";
                    exception_lineno = 248;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[89];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 248;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_6;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_cmb;
            var_cmb = tmp_assign_source_7;
            Py_INCREF(var_cmb);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[41]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_index);
        tmp_args_element_value_3 = var_index;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 249;
        tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[147], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 249;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_placement;
            var_placement = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_2 = var_cmb;
        CHECK_OBJECT(var_placement);
        tmp_args_element_value_4 = var_placement;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 250;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[148], tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cmb);
        tmp_args_element_value_5 = var_cmb;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_placement);
        tmp_subscript_value_1 = var_placement;
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 251;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_placement);
        tmp_cmp_expr_left_1 = var_placement;
        tmp_cmp_expr_right_1 = mod_consts[35];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cmb);
        tmp_args_element_value_7 = var_cmb;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[150]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 253;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 248;
        type_description_1 = "ooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_6;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_self;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[14]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 256;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_9;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_10 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 256;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_2__iter_value;
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 256;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 256;
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooo";
                    exception_lineno = 256;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[89];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 256;
            goto try_except_handler_7;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    try_end_4:;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_14;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_txt;
            var_txt = tmp_assign_source_15;
            Py_INCREF(var_txt);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[7]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[41]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_index);
        tmp_args_element_value_10 = var_index;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 257;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[151], tmp_args_element_value_10);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_label;
            var_label = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(var_txt);
        tmp_called_instance_4 = var_txt;
        CHECK_OBJECT(var_label);
        tmp_args_element_value_11 = var_label;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 258;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[152], tmp_args_element_value_11);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooo";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 256;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_9;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_self;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[17]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 261;
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_17;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooo";
                exception_lineno = 261;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_6 = tmp_for_loop_3__iter_value;
        tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 261;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 261;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

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

                    type_description_1 = "ooooooo";
                    exception_lineno = 261;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[89];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 261;
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_22 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_index;
            var_index = tmp_assign_source_22;
            Py_INCREF(var_index);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_23 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_cmb;
            var_cmb = tmp_assign_source_23;
            Py_INCREF(var_cmb);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_13;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[7]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[41]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_index);
        tmp_args_element_value_13 = var_index;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 262;
        tmp_assign_source_24 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[110], tmp_args_element_value_13);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_serialNumber;
            var_serialNumber = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_6 = var_cmb;
        CHECK_OBJECT(var_serialNumber);
        tmp_args_element_value_14 = var_serialNumber;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 263;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[152], tmp_args_element_value_14);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        CHECK_OBJECT(var_cmb);
        tmp_expression_value_12 = var_cmb;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[148]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[7]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[41]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_index);
        tmp_args_element_value_16 = var_index;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 264;
        tmp_expression_value_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[106], tmp_args_element_value_16);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[153]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_serialNumber);
        tmp_args_element_value_17 = var_serialNumber;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 264;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_8);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 264;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_cmb);
        tmp_args_element_value_18 = var_cmb;
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_8 = var_cmb;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 265;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[154]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_2 = mod_consts[35];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
        condexpr_true_1:;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[81]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[155]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        condexpr_end_1:;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 265;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_cmb);
        tmp_args_element_value_20 = var_cmb;
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_9 = var_cmb;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 266;
        tmp_cmp_expr_left_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[154]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_3 = mod_consts[35];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
        condexpr_true_2:;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[83]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_args_element_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[150]);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        condexpr_end_2:;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 266;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_args_element_value_21);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_instance_10;
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_10 = var_cmb;
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 268;
        tmp_cmp_expr_left_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[154]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        tmp_cmp_expr_right_4 = mod_consts[35];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_9;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[20]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_2 = var_index;
        tmp_called_instance_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 269;
        tmp_call_result_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[120]);
        Py_DECREF(tmp_called_instance_11);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }

        tmp_expression_value_23 = par_self;
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[20]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_3 = var_index;
        tmp_called_instance_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        frame_d3a6df731b2f518925d52ff8636a91a6->m_frame.f_lineno = 271;
        tmp_call_result_10 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[156]);
        Py_DECREF(tmp_called_instance_12);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 261;
        type_description_1 = "ooooooo";
        goto try_except_handler_8;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3a6df731b2f518925d52ff8636a91a6);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d3a6df731b2f518925d52ff8636a91a6);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d3a6df731b2f518925d52ff8636a91a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3a6df731b2f518925d52ff8636a91a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3a6df731b2f518925d52ff8636a91a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3a6df731b2f518925d52ff8636a91a6,
        type_description_1,
        par_self,
        var_index,
        var_cmb,
        var_placement,
        var_txt,
        var_label,
        var_serialNumber
    );


    // Release cached frame if used for exception.
    if (frame_d3a6df731b2f518925d52ff8636a91a6 == cache_frame_d3a6df731b2f518925d52ff8636a91a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d3a6df731b2f518925d52ff8636a91a6);
        cache_frame_d3a6df731b2f518925d52ff8636a91a6 = NULL;
    }

    assertFrameObject(frame_d3a6df731b2f518925d52ff8636a91a6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_cmb);
    var_cmb = NULL;
    Py_XDECREF(var_placement);
    var_placement = NULL;
    Py_XDECREF(var_txt);
    var_txt = NULL;
    Py_XDECREF(var_label);
    var_label = NULL;
    Py_XDECREF(var_serialNumber);
    var_serialNumber = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_cmb);
    var_cmb = NULL;
    Py_XDECREF(var_placement);
    var_placement = NULL;
    Py_XDECREF(var_txt);
    var_txt = NULL;
    Py_XDECREF(var_label);
    var_label = NULL;
    Py_XDECREF(var_serialNumber);
    var_serialNumber = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__3_onOK(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_cmb = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_5da6d0a57b34789d330054a2dcb30b7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_5da6d0a57b34789d330054a2dcb30b7e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5da6d0a57b34789d330054a2dcb30b7e)) {
        Py_XDECREF(cache_frame_5da6d0a57b34789d330054a2dcb30b7e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5da6d0a57b34789d330054a2dcb30b7e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5da6d0a57b34789d330054a2dcb30b7e = MAKE_FUNCTION_FRAME(codeobj_5da6d0a57b34789d330054a2dcb30b7e, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5da6d0a57b34789d330054a2dcb30b7e->m_type_description == NULL);
    frame_5da6d0a57b34789d330054a2dcb30b7e = cache_frame_5da6d0a57b34789d330054a2dcb30b7e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5da6d0a57b34789d330054a2dcb30b7e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5da6d0a57b34789d330054a2dcb30b7e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[157]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[137]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 280;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[138];
        frame_5da6d0a57b34789d330054a2dcb30b7e->m_frame.f_lineno = 280;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[13]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 284;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cmb;
            var_cmb = tmp_assign_source_3;
            Py_INCREF(var_cmb);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_instance_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[8]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[47]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 285;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_1 = var_cmb;
        frame_5da6d0a57b34789d330054a2dcb30b7e->m_frame.f_lineno = 285;
        tmp_args_element_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[154]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 285;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_5da6d0a57b34789d330054a2dcb30b7e->m_frame.f_lineno = 285;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 285;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_5da6d0a57b34789d330054a2dcb30b7e->m_frame.f_lineno = 285;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 284;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 287;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_self;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[17]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooo";
                exception_lineno = 287;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_6 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_cmb;
            var_cmb = tmp_assign_source_6;
            Py_INCREF(var_cmb);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[9]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[47]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_2 = var_cmb;
        frame_5da6d0a57b34789d330054a2dcb30b7e->m_frame.f_lineno = 289;
        tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[159]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 289;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        frame_5da6d0a57b34789d330054a2dcb30b7e->m_frame.f_lineno = 289;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 287;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[46]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 292;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_self;
        frame_5da6d0a57b34789d330054a2dcb30b7e->m_frame.f_lineno = 292;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[160]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5da6d0a57b34789d330054a2dcb30b7e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5da6d0a57b34789d330054a2dcb30b7e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5da6d0a57b34789d330054a2dcb30b7e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5da6d0a57b34789d330054a2dcb30b7e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5da6d0a57b34789d330054a2dcb30b7e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5da6d0a57b34789d330054a2dcb30b7e,
        type_description_1,
        par_self,
        par_event,
        var_cmb
    );


    // Release cached frame if used for exception.
    if (frame_5da6d0a57b34789d330054a2dcb30b7e == cache_frame_5da6d0a57b34789d330054a2dcb30b7e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5da6d0a57b34789d330054a2dcb30b7e);
        cache_frame_5da6d0a57b34789d330054a2dcb30b7e = NULL;
    }

    assertFrameObject(frame_5da6d0a57b34789d330054a2dcb30b7e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_cmb);
    var_cmb = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_cmb);
    var_cmb = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__4_onQuit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    struct Nuitka_FrameObject *frame_5190e95e8778180536204706603c406a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5190e95e8778180536204706603c406a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5190e95e8778180536204706603c406a)) {
        Py_XDECREF(cache_frame_5190e95e8778180536204706603c406a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5190e95e8778180536204706603c406a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5190e95e8778180536204706603c406a = MAKE_FUNCTION_FRAME(codeobj_5190e95e8778180536204706603c406a, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5190e95e8778180536204706603c406a->m_type_description == NULL);
    frame_5190e95e8778180536204706603c406a = cache_frame_5190e95e8778180536204706603c406a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5190e95e8778180536204706603c406a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5190e95e8778180536204706603c406a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[9], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[157]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[137]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 297;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[138];
        frame_5190e95e8778180536204706603c406a->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_5190e95e8778180536204706603c406a->m_frame.f_lineno = 298;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[160]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5190e95e8778180536204706603c406a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5190e95e8778180536204706603c406a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5190e95e8778180536204706603c406a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5190e95e8778180536204706603c406a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5190e95e8778180536204706603c406a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5190e95e8778180536204706603c406a,
        type_description_1,
        par_self,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_5190e95e8778180536204706603c406a == cache_frame_5190e95e8778180536204706603c406a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5190e95e8778180536204706603c406a);
        cache_frame_5190e95e8778180536204706603c406a = NULL;
    }

    assertFrameObject(frame_5190e95e8778180536204706603c406a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__5_tryToConnect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_11b8d9d6213ecd5c920c49f452194da2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_11b8d9d6213ecd5c920c49f452194da2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_11b8d9d6213ecd5c920c49f452194da2)) {
        Py_XDECREF(cache_frame_11b8d9d6213ecd5c920c49f452194da2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_11b8d9d6213ecd5c920c49f452194da2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_11b8d9d6213ecd5c920c49f452194da2 = MAKE_FUNCTION_FRAME(codeobj_11b8d9d6213ecd5c920c49f452194da2, module_Dialogs$DialogViewSensors, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_11b8d9d6213ecd5c920c49f452194da2->m_type_description == NULL);
    frame_11b8d9d6213ecd5c920c49f452194da2 = cache_frame_11b8d9d6213ecd5c920c49f452194da2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_11b8d9d6213ecd5c920c49f452194da2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_11b8d9d6213ecd5c920c49f452194da2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_11b8d9d6213ecd5c920c49f452194da2->m_frame.f_lineno = 306;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[161]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11b8d9d6213ecd5c920c49f452194da2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_11b8d9d6213ecd5c920c49f452194da2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_11b8d9d6213ecd5c920c49f452194da2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_11b8d9d6213ecd5c920c49f452194da2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_11b8d9d6213ecd5c920c49f452194da2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_11b8d9d6213ecd5c920c49f452194da2,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_11b8d9d6213ecd5c920c49f452194da2 == cache_frame_11b8d9d6213ecd5c920c49f452194da2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_11b8d9d6213ecd5c920c49f452194da2);
        cache_frame_11b8d9d6213ecd5c920c49f452194da2 = NULL;
    }

    assertFrameObject(frame_11b8d9d6213ecd5c920c49f452194da2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__6_onValueChange(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sensorType = python_pars[1];
    PyObject *par_channel = python_pars[2];
    PyObject *par_valueRaw = python_pars[3];
    PyObject *par_valueNumeric = python_pars[4];
    PyObject *par_valueFormatted = python_pars[5];
    struct Nuitka_FrameObject *frame_27e38515a8b823c314d4af38e76ff8ae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_27e38515a8b823c314d4af38e76ff8ae = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_27e38515a8b823c314d4af38e76ff8ae)) {
        Py_XDECREF(cache_frame_27e38515a8b823c314d4af38e76ff8ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_27e38515a8b823c314d4af38e76ff8ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_27e38515a8b823c314d4af38e76ff8ae = MAKE_FUNCTION_FRAME(codeobj_27e38515a8b823c314d4af38e76ff8ae, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_27e38515a8b823c314d4af38e76ff8ae->m_type_description == NULL);
    frame_27e38515a8b823c314d4af38e76ff8ae = cache_frame_27e38515a8b823c314d4af38e76ff8ae;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_27e38515a8b823c314d4af38e76ff8ae);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_27e38515a8b823c314d4af38e76ff8ae) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_sensorType);
        tmp_cmp_expr_left_1 = par_sensorType;
        tmp_cmp_expr_right_1 = mod_consts[74];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "oooooo";
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_channel);
        tmp_cmp_expr_left_2 = par_channel;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_27e38515a8b823c314d4af38e76ff8ae->m_frame.f_lineno = 312;
        tmp_cmp_expr_right_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[162]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[11]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 314;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_subscript_value_1 = par_channel;
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 314;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[152]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 314;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_valueFormatted);
        tmp_args_element_value_2 = par_valueFormatted;
        frame_27e38515a8b823c314d4af38e76ff8ae->m_frame.f_lineno = 314;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_sensorType);
        tmp_cmp_expr_left_3 = par_sensorType;
        tmp_cmp_expr_right_3 = mod_consts[115];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooo";
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
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(par_channel);
        tmp_cmp_expr_left_4 = par_channel;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[7]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[41]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_27e38515a8b823c314d4af38e76ff8ae->m_frame.f_lineno = 316;
        tmp_cmp_expr_right_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[105]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "oooooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[162]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[16]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_subscript_value_2 = par_channel;
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[152]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_valueFormatted);
        tmp_args_element_value_4 = par_valueFormatted;
        frame_27e38515a8b823c314d4af38e76ff8ae->m_frame.f_lineno = 318;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_3:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_27e38515a8b823c314d4af38e76ff8ae);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_27e38515a8b823c314d4af38e76ff8ae);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_27e38515a8b823c314d4af38e76ff8ae);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_27e38515a8b823c314d4af38e76ff8ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_27e38515a8b823c314d4af38e76ff8ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_27e38515a8b823c314d4af38e76ff8ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_27e38515a8b823c314d4af38e76ff8ae,
        type_description_1,
        par_self,
        par_sensorType,
        par_channel,
        par_valueRaw,
        par_valueNumeric,
        par_valueFormatted
    );


    // Release cached frame if used for exception.
    if (frame_27e38515a8b823c314d4af38e76ff8ae == cache_frame_27e38515a8b823c314d4af38e76ff8ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_27e38515a8b823c314d4af38e76ff8ae);
        cache_frame_27e38515a8b823c314d4af38e76ff8ae = NULL;
    }

    assertFrameObject(frame_27e38515a8b823c314d4af38e76ff8ae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sensorType);
    Py_DECREF(par_sensorType);
    CHECK_OBJECT(par_channel);
    Py_DECREF(par_channel);
    CHECK_OBJECT(par_valueRaw);
    Py_DECREF(par_valueRaw);
    CHECK_OBJECT(par_valueNumeric);
    Py_DECREF(par_valueNumeric);
    CHECK_OBJECT(par_valueFormatted);
    Py_DECREF(par_valueFormatted);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sensorType);
    Py_DECREF(par_sensorType);
    CHECK_OBJECT(par_channel);
    Py_DECREF(par_channel);
    CHECK_OBJECT(par_valueRaw);
    Py_DECREF(par_valueRaw);
    CHECK_OBJECT(par_valueNumeric);
    Py_DECREF(par_valueNumeric);
    CHECK_OBJECT(par_valueFormatted);
    Py_DECREF(par_valueFormatted);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__7_onAttach(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_sensorType = python_pars[1];
    PyObject *par_channel = python_pars[2];
    PyObject *var_labelString = NULL;
    struct Nuitka_FrameObject *frame_7afd1c090109336967644644970b091e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7afd1c090109336967644644970b091e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7afd1c090109336967644644970b091e)) {
        Py_XDECREF(cache_frame_7afd1c090109336967644644970b091e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7afd1c090109336967644644970b091e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7afd1c090109336967644644970b091e = MAKE_FUNCTION_FRAME(codeobj_7afd1c090109336967644644970b091e, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_7afd1c090109336967644644970b091e->m_type_description == NULL);
    frame_7afd1c090109336967644644970b091e = cache_frame_7afd1c090109336967644644970b091e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_7afd1c090109336967644644970b091e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_7afd1c090109336967644644970b091e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_sensorType);
        tmp_cmp_expr_left_1 = par_sensorType;
        tmp_cmp_expr_right_1 = mod_consts[74];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooo";
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_channel);
        tmp_cmp_expr_left_2 = par_channel;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[41]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7afd1c090109336967644644970b091e->m_frame.f_lineno = 325;
        tmp_cmp_expr_right_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[42]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "oooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_right_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_left_value_3;
        PyObject *tmp_right_value_2;
        PyObject *tmp_right_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[162]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[10]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_subscript_value_1 = par_channel;
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[152]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_2 = mod_consts[58];
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_left_value_3 = par_channel;
        tmp_right_value_2 = mod_consts[45];
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_3, tmp_right_value_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7afd1c090109336967644644970b091e->m_frame.f_lineno = 328;
        tmp_right_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_2, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_3 = mod_consts[163];
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_1, tmp_right_value_3);
        Py_DECREF(tmp_left_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7afd1c090109336967644644970b091e->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_subscript_value_2 = par_channel;
        tmp_expression_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[63]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[164]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7afd1c090109336967644644970b091e->m_frame.f_lineno = 329;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[10]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_subscript_value_3 = par_channel;
        tmp_expression_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[66]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[165]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7afd1c090109336967644644970b091e->m_frame.f_lineno = 330;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_sensorType);
        tmp_cmp_expr_left_3 = par_sensorType;
        tmp_cmp_expr_right_3 = mod_consts[115];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "oooo";
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
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_channel);
        tmp_cmp_expr_left_4 = par_channel;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[7]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[41]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7afd1c090109336967644644970b091e->m_frame.f_lineno = 332;
        tmp_cmp_expr_right_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[105]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "oooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_left_value_4;
        PyObject *tmp_left_value_5;
        PyObject *tmp_left_value_6;
        PyObject *tmp_left_value_7;
        PyObject *tmp_right_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_left_value_8;
        PyObject *tmp_right_value_5;
        PyObject *tmp_right_value_6;
        PyObject *tmp_right_value_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_left_value_9;
        PyObject *tmp_right_value_8;
        PyObject *tmp_right_value_9;
        tmp_left_value_7 = mod_consts[58];
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_left_value_8 = par_channel;
        tmp_right_value_5 = mod_consts[45];
        tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_8, tmp_right_value_5);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7afd1c090109336967644644970b091e->m_frame.f_lineno = 334;
        tmp_right_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_right_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_6 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_value_7, tmp_right_value_4);
        Py_DECREF(tmp_right_value_4);
        if (tmp_left_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_6 = mod_consts[112];
        tmp_left_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_6, tmp_right_value_6);
        Py_DECREF(tmp_left_value_6);
        if (tmp_left_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_5);

            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_left_value_9 = par_channel;
        tmp_right_value_8 = mod_consts[45];
        tmp_subscript_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_value_9, tmp_right_value_8);
        if (tmp_subscript_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_5);

            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_right_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_value_5);

            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_value_5, tmp_right_value_7);
        Py_DECREF(tmp_left_value_5);
        Py_DECREF(tmp_right_value_7);
        if (tmp_left_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_9 = mod_consts[166];
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_value_4, tmp_right_value_9);
        Py_DECREF(tmp_left_value_4);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_labelString == NULL);
        var_labelString = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_8;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[162]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_21 = par_self;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[15]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_subscript_value_5 = par_channel;
        tmp_expression_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[152]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_labelString);
        tmp_args_element_value_8 = var_labelString;
        frame_7afd1c090109336967644644970b091e->m_frame.f_lineno = 335;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(par_self);
        tmp_expression_value_24 = par_self;
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[15]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_subscript_value_6 = par_channel;
        tmp_expression_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[63]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[164]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7afd1c090109336967644644970b091e->m_frame.f_lineno = 336;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_29;
        CHECK_OBJECT(par_self);
        tmp_expression_value_28 = par_self;
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[15]);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_channel);
        tmp_subscript_value_7 = par_channel;
        tmp_expression_value_26 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_7);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[66]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[165]);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7afd1c090109336967644644970b091e->m_frame.f_lineno = 337;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_3:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7afd1c090109336967644644970b091e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_7afd1c090109336967644644970b091e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_7afd1c090109336967644644970b091e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7afd1c090109336967644644970b091e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7afd1c090109336967644644970b091e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7afd1c090109336967644644970b091e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7afd1c090109336967644644970b091e,
        type_description_1,
        par_self,
        par_sensorType,
        par_channel,
        var_labelString
    );


    // Release cached frame if used for exception.
    if (frame_7afd1c090109336967644644970b091e == cache_frame_7afd1c090109336967644644970b091e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_7afd1c090109336967644644970b091e);
        cache_frame_7afd1c090109336967644644970b091e = NULL;
    }

    assertFrameObject(frame_7afd1c090109336967644644970b091e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_labelString);
    var_labelString = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_labelString);
    var_labelString = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sensorType);
    Py_DECREF(par_sensorType);
    CHECK_OBJECT(par_channel);
    Py_DECREF(par_channel);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_sensorType);
    Py_DECREF(par_sensorType);
    CHECK_OBJECT(par_channel);
    Py_DECREF(par_channel);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__8_onCalibrate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_button = NULL;
    PyObject *var_serialNumber = NULL;
    PyObject *var_dlg = NULL;
    struct Nuitka_FrameObject *frame_748f4072d035fb7c7c090acfd6bd87df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_748f4072d035fb7c7c090acfd6bd87df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_748f4072d035fb7c7c090acfd6bd87df)) {
        Py_XDECREF(cache_frame_748f4072d035fb7c7c090acfd6bd87df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_748f4072d035fb7c7c090acfd6bd87df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_748f4072d035fb7c7c090acfd6bd87df = MAKE_FUNCTION_FRAME(codeobj_748f4072d035fb7c7c090acfd6bd87df, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_748f4072d035fb7c7c090acfd6bd87df->m_type_description == NULL);
    frame_748f4072d035fb7c7c090acfd6bd87df = cache_frame_748f4072d035fb7c7c090acfd6bd87df;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_748f4072d035fb7c7c090acfd6bd87df);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_748f4072d035fb7c7c090acfd6bd87df) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_event);
        tmp_called_instance_1 = par_event;
        frame_748f4072d035fb7c7c090acfd6bd87df->m_frame.f_lineno = 344;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[167]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_button == NULL);
        var_button = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_button);
        tmp_expression_value_1 = var_button;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[75]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[115];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_button);
        tmp_expression_value_4 = var_button;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[73]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 346;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_748f4072d035fb7c7c090acfd6bd87df->m_frame.f_lineno = 346;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[159]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_serialNumber == NULL);
        var_serialNumber = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_serialNumber);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_serialNumber);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_serialNumber);
        tmp_expression_value_5 = var_serialNumber;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[168]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_748f4072d035fb7c7c090acfd6bd87df->m_frame.f_lineno = 347;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 347;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        CHECK_OBJECT(var_button);
        tmp_expression_value_6 = var_button;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[75]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_button);
        tmp_expression_value_7 = var_button;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[73]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 348;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (var_serialNumber == NULL) {
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 348;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_4 = var_serialNumber;
        frame_748f4072d035fb7c7c090acfd6bd87df->m_frame.f_lineno = 348;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dlg == NULL);
        var_dlg = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_9;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[169]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[169]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_5 = par_self;
        CHECK_OBJECT(var_button);
        tmp_expression_value_8 = var_button;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[75]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_button);
        tmp_expression_value_9 = var_button;
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[73]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 352;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_748f4072d035fb7c7c090acfd6bd87df->m_frame.f_lineno = 352;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dlg == NULL);
        var_dlg = tmp_assign_source_4;
    }
    branch_end_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        if (var_dlg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[171]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 353;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = var_dlg;
        frame_748f4072d035fb7c7c090acfd6bd87df->m_frame.f_lineno = 353;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[172]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        if (var_dlg == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[171]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = var_dlg;
        frame_748f4072d035fb7c7c090acfd6bd87df->m_frame.f_lineno = 354;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[160]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_748f4072d035fb7c7c090acfd6bd87df);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_748f4072d035fb7c7c090acfd6bd87df);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_748f4072d035fb7c7c090acfd6bd87df);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_748f4072d035fb7c7c090acfd6bd87df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_748f4072d035fb7c7c090acfd6bd87df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_748f4072d035fb7c7c090acfd6bd87df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_748f4072d035fb7c7c090acfd6bd87df,
        type_description_1,
        par_self,
        par_event,
        var_button,
        var_serialNumber,
        var_dlg
    );


    // Release cached frame if used for exception.
    if (frame_748f4072d035fb7c7c090acfd6bd87df == cache_frame_748f4072d035fb7c7c090acfd6bd87df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_748f4072d035fb7c7c090acfd6bd87df);
        cache_frame_748f4072d035fb7c7c090acfd6bd87df = NULL;
    }

    assertFrameObject(frame_748f4072d035fb7c7c090acfd6bd87df);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_button);
    Py_DECREF(var_button);
    var_button = NULL;
    Py_XDECREF(var_serialNumber);
    var_serialNumber = NULL;
    Py_XDECREF(var_dlg);
    var_dlg = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_button);
    var_button = NULL;
    Py_XDECREF(var_serialNumber);
    var_serialNumber = NULL;
    Py_XDECREF(var_dlg);
    var_dlg = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__9_onSerialSelect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_cmb = NULL;
    PyObject *var_channelIndex = NULL;
    PyObject *var_serialNumber = NULL;
    PyObject *var_gain = NULL;
    PyObject *var_offset = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c73d17e2852f62618c05d945f5069e9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c73d17e2852f62618c05d945f5069e9c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c73d17e2852f62618c05d945f5069e9c)) {
        Py_XDECREF(cache_frame_c73d17e2852f62618c05d945f5069e9c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c73d17e2852f62618c05d945f5069e9c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c73d17e2852f62618c05d945f5069e9c = MAKE_FUNCTION_FRAME(codeobj_c73d17e2852f62618c05d945f5069e9c, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c73d17e2852f62618c05d945f5069e9c->m_type_description == NULL);
    frame_c73d17e2852f62618c05d945f5069e9c = cache_frame_c73d17e2852f62618c05d945f5069e9c;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c73d17e2852f62618c05d945f5069e9c);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c73d17e2852f62618c05d945f5069e9c) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_event);
        tmp_called_instance_1 = par_event;
        frame_c73d17e2852f62618c05d945f5069e9c->m_frame.f_lineno = 359;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[167]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cmb == NULL);
        var_cmb = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_cmb);
        tmp_expression_value_1 = var_cmb;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[73]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_channelIndex == NULL);
        var_channelIndex = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_2 = var_cmb;
        frame_c73d17e2852f62618c05d945f5069e9c->m_frame.f_lineno = 361;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[159]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_serialNumber == NULL);
        var_serialNumber = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[41]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_args_element_value_1 = var_channelIndex;
        CHECK_OBJECT(var_serialNumber);
        tmp_args_element_value_2 = var_serialNumber;
        frame_c73d17e2852f62618c05d945f5069e9c->m_frame.f_lineno = 362;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[173],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 362;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 362;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 362;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[89];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 362;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        assert(var_gain == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_gain = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;
        assert(var_offset == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_offset = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[7]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[41]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gain);
        tmp_args_element_value_3 = var_gain;
        CHECK_OBJECT(var_offset);
        tmp_args_element_value_4 = var_offset;
        CHECK_OBJECT(var_channelIndex);
        tmp_args_element_value_5 = var_channelIndex;
        frame_c73d17e2852f62618c05d945f5069e9c->m_frame.f_lineno = 363;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_4,
                mod_consts[174],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cmb);
        tmp_args_element_value_6 = var_cmb;
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_5 = var_cmb;
        frame_c73d17e2852f62618c05d945f5069e9c->m_frame.f_lineno = 365;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[154]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[35];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
        condexpr_true_1:;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[81]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[155]);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        frame_c73d17e2852f62618c05d945f5069e9c->m_frame.f_lineno = 365;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cmb);
        tmp_args_element_value_8 = var_cmb;
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_6 = var_cmb;
        frame_c73d17e2852f62618c05d945f5069e9c->m_frame.f_lineno = 366;
        tmp_cmp_expr_left_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[154]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[35];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
        condexpr_true_2:;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[83]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[150]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        frame_c73d17e2852f62618c05d945f5069e9c->m_frame.f_lineno = 366;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_7 = var_cmb;
        frame_c73d17e2852f62618c05d945f5069e9c->m_frame.f_lineno = 368;
        tmp_cmp_expr_left_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[154]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[35];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[20]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_subscript_value_1 = var_channelIndex;
        tmp_called_instance_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_c73d17e2852f62618c05d945f5069e9c->m_frame.f_lineno = 369;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[120]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[20]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_subscript_value_2 = var_channelIndex;
        tmp_called_instance_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_c73d17e2852f62618c05d945f5069e9c->m_frame.f_lineno = 371;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[156]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c73d17e2852f62618c05d945f5069e9c);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c73d17e2852f62618c05d945f5069e9c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c73d17e2852f62618c05d945f5069e9c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c73d17e2852f62618c05d945f5069e9c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c73d17e2852f62618c05d945f5069e9c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c73d17e2852f62618c05d945f5069e9c,
        type_description_1,
        par_self,
        par_event,
        var_cmb,
        var_channelIndex,
        var_serialNumber,
        var_gain,
        var_offset
    );


    // Release cached frame if used for exception.
    if (frame_c73d17e2852f62618c05d945f5069e9c == cache_frame_c73d17e2852f62618c05d945f5069e9c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c73d17e2852f62618c05d945f5069e9c);
        cache_frame_c73d17e2852f62618c05d945f5069e9c = NULL;
    }

    assertFrameObject(frame_c73d17e2852f62618c05d945f5069e9c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cmb);
    Py_DECREF(var_cmb);
    var_cmb = NULL;
    CHECK_OBJECT(var_channelIndex);
    Py_DECREF(var_channelIndex);
    var_channelIndex = NULL;
    CHECK_OBJECT(var_serialNumber);
    Py_DECREF(var_serialNumber);
    var_serialNumber = NULL;
    CHECK_OBJECT(var_gain);
    Py_DECREF(var_gain);
    var_gain = NULL;
    CHECK_OBJECT(var_offset);
    Py_DECREF(var_offset);
    var_offset = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_cmb);
    var_cmb = NULL;
    Py_XDECREF(var_channelIndex);
    var_channelIndex = NULL;
    Py_XDECREF(var_serialNumber);
    var_serialNumber = NULL;
    Py_XDECREF(var_gain);
    var_gain = NULL;
    Py_XDECREF(var_offset);
    var_offset = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__10_onThermocoupleSelect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_cmb = NULL;
    PyObject *var_index = NULL;
    PyObject *var_numFoundAfterburners = NULL;
    PyObject *var_cmbBox = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_3f0c4663cd74ed79ec03a8ca0c907a74;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3f0c4663cd74ed79ec03a8ca0c907a74 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3f0c4663cd74ed79ec03a8ca0c907a74)) {
        Py_XDECREF(cache_frame_3f0c4663cd74ed79ec03a8ca0c907a74);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3f0c4663cd74ed79ec03a8ca0c907a74 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3f0c4663cd74ed79ec03a8ca0c907a74 = MAKE_FUNCTION_FRAME(codeobj_3f0c4663cd74ed79ec03a8ca0c907a74, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_type_description == NULL);
    frame_3f0c4663cd74ed79ec03a8ca0c907a74 = cache_frame_3f0c4663cd74ed79ec03a8ca0c907a74;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3f0c4663cd74ed79ec03a8ca0c907a74);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3f0c4663cd74ed79ec03a8ca0c907a74) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_event);
        tmp_called_instance_1 = par_event;
        frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame.f_lineno = 375;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[167]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_cmb == NULL);
        var_cmb = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_cmb);
        tmp_called_instance_2 = var_cmb;
        frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame.f_lineno = 376;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[154]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        assert(var_index == NULL);
        var_index = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cmb);
        tmp_args_element_value_1 = var_cmb;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_index);
        tmp_subscript_value_1 = var_index;
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame.f_lineno = 378;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_cmb);
        tmp_args_element_value_3 = var_cmb;
        CHECK_OBJECT(var_index);
        tmp_cmp_expr_left_1 = var_index;
        tmp_cmp_expr_right_1 = mod_consts[35];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        assert(tmp_condition_result_1 != NUITKA_BOOL_UNASSIGNED);
        condexpr_true_1:;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[83]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[150]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame.f_lineno = 379;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_index);
        tmp_cmp_expr_left_2 = var_index;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[175]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame.f_lineno = 386;
        tmp_cmp_expr_right_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[35];
        assert(var_numFoundAfterburners == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_numFoundAfterburners = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[13]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooNoo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooNoo";
                exception_lineno = 393;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cmbBox;
            var_cmbBox = tmp_assign_source_6;
            Py_INCREF(var_cmbBox);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_cmbBox);
        tmp_cmp_expr_left_3 = var_cmbBox;
        CHECK_OBJECT(var_cmb);
        tmp_cmp_expr_right_3 = var_cmb;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_1;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_cmbBox);
        tmp_called_instance_3 = var_cmbBox;
        frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame.f_lineno = 399;
        tmp_cmp_expr_left_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[154]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 399;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 399;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[175]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 399;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame.f_lineno = 399;
        tmp_cmp_expr_right_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_4);

            exception_lineno = 399;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        if (var_numFoundAfterburners == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[176]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }

        tmp_left_value_1 = var_numFoundAfterburners;
        tmp_right_value_1 = mod_consts[45];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_value_1, tmp_right_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = tmp_left_value_1;
        var_numFoundAfterburners = tmp_assign_source_7;

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_numFoundAfterburners);
        tmp_cmp_expr_left_5 = var_numFoundAfterburners;
        tmp_cmp_expr_right_5 = mod_consts[100];
        tmp_condition_result_5 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_cmbBox);
        tmp_expression_value_7 = var_cmbBox;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[148]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 402;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 402;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[177]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 402;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame.f_lineno = 402;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 402;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame.f_lineno = 402;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cmbBox);
        tmp_args_element_value_9 = var_cmbBox;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[149]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[149]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_2 = mod_consts[35];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_2, 0);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame.f_lineno = 403;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_10;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cmbBox);
        tmp_args_element_value_11 = var_cmbBox;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[83]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame.f_lineno = 404;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooNoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_4:;
    branch_no_3:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 393;
        type_description_1 = "ooooNoo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f0c4663cd74ed79ec03a8ca0c907a74);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f0c4663cd74ed79ec03a8ca0c907a74);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3f0c4663cd74ed79ec03a8ca0c907a74);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3f0c4663cd74ed79ec03a8ca0c907a74, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3f0c4663cd74ed79ec03a8ca0c907a74->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3f0c4663cd74ed79ec03a8ca0c907a74, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3f0c4663cd74ed79ec03a8ca0c907a74,
        type_description_1,
        par_self,
        par_event,
        var_cmb,
        var_index,
        NULL,
        var_numFoundAfterburners,
        var_cmbBox
    );


    // Release cached frame if used for exception.
    if (frame_3f0c4663cd74ed79ec03a8ca0c907a74 == cache_frame_3f0c4663cd74ed79ec03a8ca0c907a74) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3f0c4663cd74ed79ec03a8ca0c907a74);
        cache_frame_3f0c4663cd74ed79ec03a8ca0c907a74 = NULL;
    }

    assertFrameObject(frame_3f0c4663cd74ed79ec03a8ca0c907a74);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cmb);
    Py_DECREF(var_cmb);
    var_cmb = NULL;
    CHECK_OBJECT(var_index);
    Py_DECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_numFoundAfterburners);
    var_numFoundAfterburners = NULL;
    Py_XDECREF(var_cmbBox);
    var_cmbBox = NULL;
    goto function_return_exit;
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

    Py_XDECREF(var_cmb);
    var_cmb = NULL;
    Py_XDECREF(var_index);
    var_index = NULL;
    Py_XDECREF(var_numFoundAfterburners);
    var_numFoundAfterburners = NULL;
    Py_XDECREF(var_cmbBox);
    var_cmbBox = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__11_onAdd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_btn = NULL;
    PyObject *var_channelIndex = NULL;
    PyObject *var_dlg = NULL;
    struct Nuitka_FrameObject *frame_816f386eb8de2e055589bd6cf1e550fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_816f386eb8de2e055589bd6cf1e550fd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_816f386eb8de2e055589bd6cf1e550fd)) {
        Py_XDECREF(cache_frame_816f386eb8de2e055589bd6cf1e550fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_816f386eb8de2e055589bd6cf1e550fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_816f386eb8de2e055589bd6cf1e550fd = MAKE_FUNCTION_FRAME(codeobj_816f386eb8de2e055589bd6cf1e550fd, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_816f386eb8de2e055589bd6cf1e550fd->m_type_description == NULL);
    frame_816f386eb8de2e055589bd6cf1e550fd = cache_frame_816f386eb8de2e055589bd6cf1e550fd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_816f386eb8de2e055589bd6cf1e550fd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_816f386eb8de2e055589bd6cf1e550fd) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_event);
        tmp_called_instance_1 = par_event;
        frame_816f386eb8de2e055589bd6cf1e550fd->m_frame.f_lineno = 408;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[167]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_btn == NULL);
        var_btn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_btn);
        tmp_expression_value_1 = var_btn;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[73]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_channelIndex == NULL);
        var_channelIndex = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[178]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[178]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_value_0_1 = par_self;
        tmp_kw_call_value_1_1 = mod_consts[179];
        frame_816f386eb8de2e055589bd6cf1e550fd->m_frame.f_lineno = 411;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[180]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dlg == NULL);
        var_dlg = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_dlg);
        tmp_called_instance_2 = var_dlg;
        frame_816f386eb8de2e055589bd6cf1e550fd->m_frame.f_lineno = 412;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[172]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_dlg);
        tmp_expression_value_2 = var_dlg;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[181]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_dlg);
        tmp_called_instance_3 = var_dlg;
        frame_816f386eb8de2e055589bd6cf1e550fd->m_frame.f_lineno = 416;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[160]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_dlg);
        tmp_expression_value_3 = var_dlg;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[181]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[17]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 420;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_subscript_value_1 = var_channelIndex;
        tmp_called_instance_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 420;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_816f386eb8de2e055589bd6cf1e550fd->m_frame.f_lineno = 420;
        tmp_cmp_expr_right_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[182]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 420;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        tmp_args_element_value_2 = mod_consts[184];
        frame_816f386eb8de2e055589bd6cf1e550fd->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[7]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[41]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[185]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_args_element_value_3 = var_channelIndex;
        CHECK_OBJECT(var_dlg);
        tmp_expression_value_9 = var_dlg;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[181]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 425;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_816f386eb8de2e055589bd6cf1e550fd->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[17]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_subscript_value_2 = var_channelIndex;
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[186]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dlg);
        tmp_expression_value_13 = var_dlg;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[181]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 426;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_816f386eb8de2e055589bd6cf1e550fd->m_frame.f_lineno = 426;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_dlg);
        tmp_called_instance_5 = var_dlg;
        frame_816f386eb8de2e055589bd6cf1e550fd->m_frame.f_lineno = 427;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[160]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_816f386eb8de2e055589bd6cf1e550fd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_816f386eb8de2e055589bd6cf1e550fd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_816f386eb8de2e055589bd6cf1e550fd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_816f386eb8de2e055589bd6cf1e550fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_816f386eb8de2e055589bd6cf1e550fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_816f386eb8de2e055589bd6cf1e550fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_816f386eb8de2e055589bd6cf1e550fd,
        type_description_1,
        par_self,
        par_event,
        var_btn,
        var_channelIndex,
        var_dlg
    );


    // Release cached frame if used for exception.
    if (frame_816f386eb8de2e055589bd6cf1e550fd == cache_frame_816f386eb8de2e055589bd6cf1e550fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_816f386eb8de2e055589bd6cf1e550fd);
        cache_frame_816f386eb8de2e055589bd6cf1e550fd = NULL;
    }

    assertFrameObject(frame_816f386eb8de2e055589bd6cf1e550fd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_btn);
    Py_DECREF(var_btn);
    var_btn = NULL;
    CHECK_OBJECT(var_channelIndex);
    Py_DECREF(var_channelIndex);
    var_channelIndex = NULL;
    CHECK_OBJECT(var_dlg);
    Py_DECREF(var_dlg);
    var_dlg = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_btn);
    var_btn = NULL;
    Py_XDECREF(var_channelIndex);
    var_channelIndex = NULL;
    Py_XDECREF(var_dlg);
    var_dlg = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__12_onRemove(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_btn = NULL;
    PyObject *var_channelIndex = NULL;
    PyObject *var_serialNumber = NULL;
    PyObject *var_selectedIndex = NULL;
    PyObject *var_dlg = NULL;
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_bd365e49bb477a1a787d9b87a6aa7642;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_bd365e49bb477a1a787d9b87a6aa7642 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bd365e49bb477a1a787d9b87a6aa7642)) {
        Py_XDECREF(cache_frame_bd365e49bb477a1a787d9b87a6aa7642);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bd365e49bb477a1a787d9b87a6aa7642 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bd365e49bb477a1a787d9b87a6aa7642 = MAKE_FUNCTION_FRAME(codeobj_bd365e49bb477a1a787d9b87a6aa7642, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bd365e49bb477a1a787d9b87a6aa7642->m_type_description == NULL);
    frame_bd365e49bb477a1a787d9b87a6aa7642 = cache_frame_bd365e49bb477a1a787d9b87a6aa7642;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bd365e49bb477a1a787d9b87a6aa7642);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bd365e49bb477a1a787d9b87a6aa7642) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_event);
        tmp_called_instance_1 = par_event;
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 431;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[167]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_btn == NULL);
        var_btn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_btn);
        tmp_expression_value_1 = var_btn;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[73]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_channelIndex == NULL);
        var_channelIndex = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_subscript_value_1 = var_channelIndex;
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 433;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[159]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_serialNumber == NULL);
        var_serialNumber = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[17]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_subscript_value_2 = var_channelIndex;
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 434;
        tmp_assign_source_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[154]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_selectedIndex == NULL);
        var_selectedIndex = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_serialNumber);
        tmp_and_left_value_1 = var_serialNumber;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_serialNumber);
        tmp_expression_value_6 = var_serialNumber;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[168]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 436;
        tmp_and_right_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_operand_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_left_value_1;
        PyObject *tmp_left_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_right_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_right_value_2;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[187]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        tmp_args_element_value_2 = mod_consts[188];
        tmp_args_element_value_3 = mod_consts[189];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[123]);
        if (tmp_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[190]);
        if (tmp_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_left_value_2);

            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_value_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_2, tmp_right_value_1);
        Py_DECREF(tmp_left_value_2);
        Py_DECREF(tmp_right_value_1);
        if (tmp_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[191]);
        if (tmp_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_left_value_1);

            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_left_value_1, tmp_right_value_2);
        Py_DECREF(tmp_left_value_1);
        Py_DECREF(tmp_right_value_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dlg == NULL);
        var_dlg = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_dlg);
        tmp_called_instance_4 = var_dlg;
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 440;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[172]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_6;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_dlg);
        tmp_called_instance_5 = var_dlg;
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 441;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[160]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_result);
        tmp_cmp_expr_left_1 = var_result;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[192]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooooo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_14 = par_self;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[7]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[41]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[193]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_args_element_value_5 = var_channelIndex;
        if (var_serialNumber == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[170]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 450;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_6 = var_serialNumber;
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 450;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[17]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_subscript_value_3 = var_channelIndex;
        tmp_called_instance_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_selectedIndex);
        tmp_args_element_value_7 = var_selectedIndex;
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 451;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[194], tmp_args_element_value_7);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[17]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_subscript_value_4 = var_channelIndex;
        tmp_called_instance_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 453;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[148],
            PyTuple_GET_ITEM(mod_consts[195], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_call_result_5;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[17]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_subscript_value_5 = var_channelIndex;
        tmp_called_instance_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 454;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[196]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_5);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_5);

            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_5);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_22 = par_self;
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[17]);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_channelIndex);
        tmp_subscript_value_6 = var_channelIndex;
        tmp_called_instance_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame.f_lineno = 455;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[197]);
        Py_DECREF(tmp_called_instance_9);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_3:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd365e49bb477a1a787d9b87a6aa7642);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd365e49bb477a1a787d9b87a6aa7642);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bd365e49bb477a1a787d9b87a6aa7642);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bd365e49bb477a1a787d9b87a6aa7642, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bd365e49bb477a1a787d9b87a6aa7642->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bd365e49bb477a1a787d9b87a6aa7642, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bd365e49bb477a1a787d9b87a6aa7642,
        type_description_1,
        par_self,
        par_event,
        var_btn,
        var_channelIndex,
        var_serialNumber,
        var_selectedIndex,
        var_dlg,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_bd365e49bb477a1a787d9b87a6aa7642 == cache_frame_bd365e49bb477a1a787d9b87a6aa7642) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bd365e49bb477a1a787d9b87a6aa7642);
        cache_frame_bd365e49bb477a1a787d9b87a6aa7642 = NULL;
    }

    assertFrameObject(frame_bd365e49bb477a1a787d9b87a6aa7642);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_btn);
    Py_DECREF(var_btn);
    var_btn = NULL;
    CHECK_OBJECT(var_channelIndex);
    Py_DECREF(var_channelIndex);
    var_channelIndex = NULL;
    Py_XDECREF(var_serialNumber);
    var_serialNumber = NULL;
    CHECK_OBJECT(var_selectedIndex);
    Py_DECREF(var_selectedIndex);
    var_selectedIndex = NULL;
    Py_XDECREF(var_dlg);
    var_dlg = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_btn);
    var_btn = NULL;
    Py_XDECREF(var_channelIndex);
    var_channelIndex = NULL;
    Py_XDECREF(var_serialNumber);
    var_serialNumber = NULL;
    Py_XDECREF(var_selectedIndex);
    var_selectedIndex = NULL;
    Py_XDECREF(var_dlg);
    var_dlg = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_Dialogs$DialogViewSensors$$$function__13_onLabelChange(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_event = python_pars[1];
    PyObject *var_txt = NULL;
    PyObject *var_channelIndex = NULL;
    PyObject *var_label = NULL;
    struct Nuitka_FrameObject *frame_e5e2f6814800b2b264ce757320664c63;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e5e2f6814800b2b264ce757320664c63 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e5e2f6814800b2b264ce757320664c63)) {
        Py_XDECREF(cache_frame_e5e2f6814800b2b264ce757320664c63);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e5e2f6814800b2b264ce757320664c63 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e5e2f6814800b2b264ce757320664c63 = MAKE_FUNCTION_FRAME(codeobj_e5e2f6814800b2b264ce757320664c63, module_Dialogs$DialogViewSensors, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_e5e2f6814800b2b264ce757320664c63->m_type_description == NULL);
    frame_e5e2f6814800b2b264ce757320664c63 = cache_frame_e5e2f6814800b2b264ce757320664c63;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_e5e2f6814800b2b264ce757320664c63);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_e5e2f6814800b2b264ce757320664c63) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_event);
        tmp_called_instance_1 = par_event;
        frame_e5e2f6814800b2b264ce757320664c63->m_frame.f_lineno = 462;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[167]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_txt == NULL);
        var_txt = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_txt);
        tmp_expression_value_1 = var_txt;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[73]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_channelIndex == NULL);
        var_channelIndex = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_txt);
        tmp_called_instance_2 = var_txt;
        frame_e5e2f6814800b2b264ce757320664c63->m_frame.f_lineno = 464;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[198]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_label == NULL);
        var_label = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[41]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_label);
        tmp_args_element_value_1 = var_label;
        CHECK_OBJECT(var_channelIndex);
        tmp_args_element_value_2 = var_channelIndex;
        frame_e5e2f6814800b2b264ce757320664c63->m_frame.f_lineno = 466;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[199],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_event);
        tmp_called_instance_4 = par_event;
        frame_e5e2f6814800b2b264ce757320664c63->m_frame.f_lineno = 468;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[200]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e5e2f6814800b2b264ce757320664c63);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_e5e2f6814800b2b264ce757320664c63);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e5e2f6814800b2b264ce757320664c63, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e5e2f6814800b2b264ce757320664c63->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e5e2f6814800b2b264ce757320664c63, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e5e2f6814800b2b264ce757320664c63,
        type_description_1,
        par_self,
        par_event,
        var_txt,
        var_channelIndex,
        var_label
    );


    // Release cached frame if used for exception.
    if (frame_e5e2f6814800b2b264ce757320664c63 == cache_frame_e5e2f6814800b2b264ce757320664c63) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_e5e2f6814800b2b264ce757320664c63);
        cache_frame_e5e2f6814800b2b264ce757320664c63 = NULL;
    }

    assertFrameObject(frame_e5e2f6814800b2b264ce757320664c63);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_txt);
    Py_DECREF(var_txt);
    var_txt = NULL;
    CHECK_OBJECT(var_channelIndex);
    Py_DECREF(var_channelIndex);
    var_channelIndex = NULL;
    CHECK_OBJECT(var_label);
    Py_DECREF(var_label);
    var_label = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_txt);
    var_txt = NULL;
    Py_XDECREF(var_channelIndex);
    var_channelIndex = NULL;
    Py_XDECREF(var_label);
    var_label = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__10_onThermocoupleSelect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__10_onThermocoupleSelect,
        mod_consts[85],
#if PYTHON_VERSION >= 0x300
        mod_consts[238],
#endif
        codeobj_3f0c4663cd74ed79ec03a8ca0c907a74,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__11_onAdd() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__11_onAdd,
        mod_consts[117],
#if PYTHON_VERSION >= 0x300
        mod_consts[239],
#endif
        codeobj_816f386eb8de2e055589bd6cf1e550fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__12_onRemove() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__12_onRemove,
        mod_consts[119],
#if PYTHON_VERSION >= 0x300
        mod_consts[240],
#endif
        codeobj_bd365e49bb477a1a787d9b87a6aa7642,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__13_onLabelChange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__13_onLabelChange,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        mod_consts[241],
#endif
        codeobj_e5e2f6814800b2b264ce757320664c63,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        mod_consts[201],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__1___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__1___init__,
        mod_consts[2],
#if PYTHON_VERSION >= 0x300
        mod_consts[229],
#endif
        codeobj_dad5749985010a2735e6861906bedf81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__2_loadSavedSelections() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__2_loadSavedSelections,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_d3a6df731b2f518925d52ff8636a91a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__3_onOK() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__3_onOK,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[231],
#endif
        codeobj_5da6d0a57b34789d330054a2dcb30b7e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__4_onQuit() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__4_onQuit,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[232],
#endif
        codeobj_5190e95e8778180536204706603c406a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__5_tryToConnect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__5_tryToConnect,
        mod_consts[143],
#if PYTHON_VERSION >= 0x300
        mod_consts[233],
#endif
        codeobj_11b8d9d6213ecd5c920c49f452194da2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__6_onValueChange() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__6_onValueChange,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[234],
#endif
        codeobj_27e38515a8b823c314d4af38e76ff8ae,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__7_onAttach() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__7_onAttach,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[235],
#endif
        codeobj_7afd1c090109336967644644970b091e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__8_onCalibrate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__8_onCalibrate,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[236],
#endif
        codeobj_748f4072d035fb7c7c090acfd6bd87df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__9_onSerialSelect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Dialogs$DialogViewSensors$$$function__9_onSerialSelect,
        mod_consts[111],
#if PYTHON_VERSION >= 0x300
        mod_consts[237],
#endif
        codeobj_c73d17e2852f62618c05d945f5069e9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_Dialogs$DialogViewSensors,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


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

function_impl_code functable_Dialogs$DialogViewSensors[] = {
    impl_Dialogs$DialogViewSensors$$$function__1___init__,
    impl_Dialogs$DialogViewSensors$$$function__2_loadSavedSelections,
    impl_Dialogs$DialogViewSensors$$$function__3_onOK,
    impl_Dialogs$DialogViewSensors$$$function__4_onQuit,
    impl_Dialogs$DialogViewSensors$$$function__5_tryToConnect,
    impl_Dialogs$DialogViewSensors$$$function__6_onValueChange,
    impl_Dialogs$DialogViewSensors$$$function__7_onAttach,
    impl_Dialogs$DialogViewSensors$$$function__8_onCalibrate,
    impl_Dialogs$DialogViewSensors$$$function__9_onSerialSelect,
    impl_Dialogs$DialogViewSensors$$$function__10_onThermocoupleSelect,
    impl_Dialogs$DialogViewSensors$$$function__11_onAdd,
    impl_Dialogs$DialogViewSensors$$$function__12_onRemove,
    impl_Dialogs$DialogViewSensors$$$function__13_onLabelChange,
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

    function_impl_code *current = functable_Dialogs$DialogViewSensors;
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

    if (offset > sizeof(functable_Dialogs$DialogViewSensors) || offset < 0) {
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
        functable_Dialogs$DialogViewSensors[offset],
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
        module_Dialogs$DialogViewSensors,
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
PyObject *modulecode_Dialogs$DialogViewSensors(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("Dialogs.DialogViewSensors");

    // Store the module for future use.
    module_Dialogs$DialogViewSensors = module;

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
        PRINT_STRING("Dialogs.DialogViewSensors: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Dialogs.DialogViewSensors: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("Dialogs.DialogViewSensors: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initDialogs$DialogViewSensors\n");

    moduledict_Dialogs$DialogViewSensors = MODULE_DICT(module_Dialogs$DialogViewSensors);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_Dialogs$DialogViewSensors,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_Dialogs$DialogViewSensors,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[259]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_Dialogs$DialogViewSensors,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_Dialogs$DialogViewSensors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_Dialogs$DialogViewSensors,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_Dialogs$DialogViewSensors);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_Dialogs$DialogViewSensors);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_aa7ed55aa8079c15ea1cc19bb533e24c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_c7a721a20b956c4c1229252f7516a272_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_c7a721a20b956c4c1229252f7516a272_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_aa7ed55aa8079c15ea1cc19bb533e24c = MAKE_MODULE_FRAME(codeobj_aa7ed55aa8079c15ea1cc19bb533e24c, module_Dialogs$DialogViewSensors);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_aa7ed55aa8079c15ea1cc19bb533e24c);
    assert(Py_REFCNT(frame_aa7ed55aa8079c15ea1cc19bb533e24c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[205], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[204]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[204]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[206], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_Dialogs$DialogViewSensors;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[35];
        frame_aa7ed55aa8079c15ea1cc19bb533e24c->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[208];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_Dialogs$DialogViewSensors;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[209];
        tmp_level_value_2 = mod_consts[35];
        frame_aa7ed55aa8079c15ea1cc19bb533e24c->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_Dialogs$DialogViewSensors,
                mod_consts[133],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[133]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_5);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[210];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_Dialogs$DialogViewSensors;
        tmp_locals_arg_value_3 = (PyObject *)moduledict_Dialogs$DialogViewSensors;
        tmp_fromlist_value_3 = mod_consts[211];
        tmp_level_value_3 = mod_consts[35];
        frame_aa7ed55aa8079c15ea1cc19bb533e24c->m_frame.f_lineno = 3;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_Dialogs$DialogViewSensors, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[212];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_Dialogs$DialogViewSensors;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[213];
        tmp_level_value_4 = mod_consts[35];
        frame_aa7ed55aa8079c15ea1cc19bb533e24c->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_Dialogs$DialogViewSensors,
                mod_consts[169],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[169]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[214];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_Dialogs$DialogViewSensors;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[215];
        tmp_level_value_5 = mod_consts[35];
        frame_aa7ed55aa8079c15ea1cc19bb533e24c->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_Dialogs$DialogViewSensors,
                mod_consts[178],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[178]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[216];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_Dialogs$DialogViewSensors;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[217];
        tmp_level_value_6 = mod_consts[35];
        frame_aa7ed55aa8079c15ea1cc19bb533e24c->m_frame.f_lineno = 6;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_Dialogs$DialogViewSensors,
                mod_consts[183],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[183]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[216];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_Dialogs$DialogViewSensors;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[218];
        tmp_level_value_7 = mod_consts[35];
        frame_aa7ed55aa8079c15ea1cc19bb533e24c->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_Dialogs$DialogViewSensors,
                mod_consts[80],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[80]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_Dialogs$DialogViewSensors,
                mod_consts[82],
                mod_consts[35]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[82]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_11);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        tmp_assign_source_12 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_assign_source_12, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_13 = impl___main__$$$function__3__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_metaclass_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        tmp_key_value_1 = mod_consts[219];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_value_2 = mod_consts[219];
        tmp_metaclass_value_1 = DICT_GET_ITEM0(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_metaclass_value_1 == NULL) {
            tmp_metaclass_value_1 = Py_None;
        }
        assert(!(tmp_metaclass_value_1 == NULL));
        Py_INCREF(tmp_metaclass_value_1);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_2 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[35];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_15 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        tmp_key_value_3 = mod_consts[219];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_value_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[219];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 10;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_3, mod_consts[220]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[220]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[221];
        tmp_args_value_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_aa7ed55aa8079c15ea1cc19bb533e24c->m_frame.f_lineno = 10;
        tmp_assign_source_16 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_5 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[222]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_value_1;
        PyObject *tmp_right_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_value_1 = mod_consts[223];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[224];
        tmp_getattr_default_1 = mod_consts[225];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        tmp_right_value_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_value_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[224]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_value_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_value_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_value_1, tmp_right_value_1);
        Py_DECREF(tmp_right_value_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 10;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_17;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_18;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[226];
        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[227], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[221];
        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[228], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_c7a721a20b956c4c1229252f7516a272_2)) {
            Py_XDECREF(cache_frame_c7a721a20b956c4c1229252f7516a272_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c7a721a20b956c4c1229252f7516a272_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c7a721a20b956c4c1229252f7516a272_2 = MAKE_FUNCTION_FRAME(codeobj_c7a721a20b956c4c1229252f7516a272, module_Dialogs$DialogViewSensors, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_c7a721a20b956c4c1229252f7516a272_2->m_type_description == NULL);
        frame_c7a721a20b956c4c1229252f7516a272_2 = cache_frame_c7a721a20b956c4c1229252f7516a272_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_c7a721a20b956c4c1229252f7516a272_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_c7a721a20b956c4c1229252f7516a272_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__1___init__();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[2], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__2_loadSavedSelections();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[144], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__3_onOK();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[125], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__4_onQuit();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[127], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__5_tryToConnect();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[143], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__6_onValueChange();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[137], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__7_onAttach();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[135], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__8_onCalibrate();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[72], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__9_onSerialSelect();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[111], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__10_onThermocoupleSelect();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[85], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__11_onAdd();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[117], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__12_onRemove();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[119], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_Dialogs$DialogViewSensors$$$function__13_onLabelChange();

        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[95], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c7a721a20b956c4c1229252f7516a272_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_c7a721a20b956c4c1229252f7516a272_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c7a721a20b956c4c1229252f7516a272_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c7a721a20b956c4c1229252f7516a272_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c7a721a20b956c4c1229252f7516a272_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c7a721a20b956c4c1229252f7516a272_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_c7a721a20b956c4c1229252f7516a272_2 == cache_frame_c7a721a20b956c4c1229252f7516a272_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_c7a721a20b956c4c1229252f7516a272_2);
            cache_frame_c7a721a20b956c4c1229252f7516a272_2 = NULL;
        }

        assertFrameObject(frame_c7a721a20b956c4c1229252f7516a272_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10, mod_consts[242], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[221];
            tmp_args_value_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_aa7ed55aa8079c15ea1cc19bb533e24c->m_frame.f_lineno = 10;
            tmp_assign_source_19 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_19;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_18 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_18);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10);
        locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10);
        locals_Dialogs$DialogViewSensors$$$class__1_ViewSensorsDialog_10 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 10;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)mod_consts[221], tmp_assign_source_18);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa7ed55aa8079c15ea1cc19bb533e24c);
#endif
    popFrameStack();

    assertFrameObject(frame_aa7ed55aa8079c15ea1cc19bb533e24c);

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_aa7ed55aa8079c15ea1cc19bb533e24c);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aa7ed55aa8079c15ea1cc19bb533e24c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aa7ed55aa8079c15ea1cc19bb533e24c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aa7ed55aa8079c15ea1cc19bb533e24c, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("Dialogs.DialogViewSensors", false);

    return module_Dialogs$DialogViewSensors;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_Dialogs$DialogViewSensors, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("Dialogs$DialogViewSensors", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}