#include <iostream>
#include <Python.h>

int main() {
    Py_Initialize();  // open python interpreter

    PyRun_SimpleString(
        "import matplotlib.pyplot as plt\n"
        "x = [1, 2, 3, 4, 5]\n"
        "y = [1, 4, 9, 16, 25]\n"
        "plt.plot(x, y)\n"
        "plt.savefig('tmp.png')\n" // image will save in build/ if you run the exec there
    );

    Py_Finalize();  // close python interpreter

    return 0;
}