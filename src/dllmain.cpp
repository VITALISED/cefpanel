#include <windows.h>

#include "bindings/native_closures.h"
#include "interfaces/interface.h"

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID reserved)
{
    switch (fdwReason)
    {
    case DLL_PROCESS_ATTACH: interfaces_init(); break;
    case DLL_PROCESS_DETACH:
        if (reserved) break;
        interfaces_destroy();
    }

    return TRUE;
}
