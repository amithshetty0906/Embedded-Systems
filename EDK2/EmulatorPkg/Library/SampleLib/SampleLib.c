#include <Library/DebugLib.h>
#include <Base.h>
#include <Library/SampleLib.h>

VOID 
EFIAPI
SampleLib (
    VOID
)
{
    DEBUG((DEBUG_INFO,"[Sample Lib]-> Hello from Sample Library\n"));
    return;
}
