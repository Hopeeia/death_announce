
#include "windows.h"
#include "library.h"
#include <iostream>
#include "LLAPI.h"
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
        case DLL_PROCESS_ATTACH:
            LL::registerPlugin("Death Announce","show who and where die",DEATH_VERSION,"None","None");
        case DLL_THREAD_ATTACH:
        case DLL_THREAD_DETACH:
        case DLL_PROCESS_DETACH:
            break;
    }
    return TRUE;
}
extern "C" {
__declspec(dllexport) void onPostInit(){
    std::ios::sync_with_stdio(false);
    death();
}
}