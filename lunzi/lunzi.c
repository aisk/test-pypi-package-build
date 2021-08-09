#include <Python.h>


static PyObject *add(PyObject *self, PyObject *args) {
    return PyLong_FromLong(1234);
}

static PyMethodDef LunziMethods[] = {
    {"add", add, METH_VARARGS, "Python interface for add C library function"},
    {NULL, NULL, 0, NULL}
};


static struct PyModuleDef lunzimodule = {
    PyModuleDef_HEAD_INIT,
    "lunzi",
    "Python interface for the lunzi C library function",
    -1,
    LunziMethods
};

PyMODINIT_FUNC PyInit_lunzi(void) {
    return PyModule_Create(&lunzimodule);
}
