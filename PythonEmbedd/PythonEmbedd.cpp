// PythonEmbedd.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


//int _tmain(int argc, const char* argv[])
//{
//
//	const char* argv;
//
//
//	PyObject *pName, *pModule, *pDict, *pFunc;
//	PyObject *pArgs, *pValue;
//	int i;
//
//	if (argc < 3) {
//		fprintf(stderr, "Usage: call pythonfile funcname [args]\n");
//		return 1;
//	}
//
//	Py_Initialize();
//	pName = PyString_FromString(argv[1]);
//	/* Error checking of pName left out */
//
//	pModule = PyImport_Import(pName);
//	Py_DECREF(pName);
//
//	if (pModule != NULL) {
//		pFunc = PyObject_GetAttrString(pModule, argv[2]);
//		/* pFunc is a new reference */
//
//		if (pFunc && PyCallable_Check(pFunc)) {
//			pArgs = PyTuple_New(argc - 3);
//			for (i = 0; i < argc - 3; ++i) {
//				pValue = PyInt_FromLong(atoi(argv[i + 3]));
//				if (!pValue) {
//					Py_DECREF(pArgs);
//					Py_DECREF(pModule);
//					fprintf(stderr, "Cannot convert argument\n");
//					return 1;
//				}
//				/* pValue reference stolen here: */
//				PyTuple_SetItem(pArgs, i, pValue);
//			}
//			pValue = PyObject_CallObject(pFunc, pArgs);
//			Py_DECREF(pArgs);
//			if (pValue != NULL) {
//				printf("Result of call: %ld\n", PyInt_AsLong(pValue));
//				Py_DECREF(pValue);
//			}
//			else {
//				Py_DECREF(pFunc);
//				Py_DECREF(pModule);
//				PyErr_Print();
//				fprintf(stderr, "Call failed\n");
//				return 1;
//			}
//		}
//		else {
//			if (PyErr_Occurred())
//				PyErr_Print();
//			fprintf(stderr, "Cannot find function \"%s\"\n", argv[2]);
//		}
//		Py_XDECREF(pFunc);
//		Py_DECREF(pModule);
//	}
//	else {
//		PyErr_Print();
//		fprintf(stderr, "Failed to load \"%s\"\n", argv[1]);
//		return 1;
//	}
//	Py_Finalize();
//	return 0;
//}


//int main(int argc, char *argv[])
//{
//	PyObject *pName, *pModule, *pDict, *pFunc, *pValue;
//
//	if (argc < 3)
//	{
//		printf("Usage: exe_name python_source function_name\n");
//		return 1;
//	}
//
//	// Initialize the Python Interpreter
//	Py_Initialize();
//
//	// Build the name object
//	pName = PyString_FromString(argv[1]);
//
//	// Load the module object
//	pModule = PyImport_Import(pName);
//
//	// pDict is a borrowed reference 
//	pDict = PyModule_GetDict(pModule);
//
//	// pFunc is also a borrowed reference 
//	pFunc = PyDict_GetItemString(pDict, argv[2]);
//
//	if (PyCallable_Check(pFunc))
//	{
//		PyObject_CallObject(pFunc, NULL);
//	}
//	else
//	{
//		PyErr_Print();
//	}
//
//	// Clean up
//	Py_DECREF(pModule);
//	Py_DECREF(pName);
//
//	// Finish the Python Interpreter
//	Py_Finalize();
//
//	return 0;
//}

//#include "boost\python.hpp"
//#include <iostream>
//
//namespace py = boost::python;
//
//int main()
//{
//	Py_Initialize();
//	py::object main_module = py::import("__main__");
//	py::object main_namespace = main_module.attr("__dict__");
//	try
//	{
//		py::object noneType = py::exec("result = 2*2", main_namespace);
//		int res = py::extract<int>(main_namespace["result"]);
//		std::cout << res << std::endl;
//	}
//	catch (py::error_already_set const &)
//	{
//		PyErr_Print();
//	}
//}

#include <boost/regex.hpp>
#include <iostream>
#include <string>

int main()
{
	std::string line;
	boost::regex pat("^Subject: (Re: |Aw: )*(.*)");

	while (std::cin)
	{
		std::getline(std::cin, line);
		boost::smatch matches;
		if (boost::regex_match(line, matches, pat))
			std::cout << matches[2] << std::endl;
	}
}