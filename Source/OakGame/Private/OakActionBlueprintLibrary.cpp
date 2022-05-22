#include "OakActionBlueprintLibrary.h"
#include "Templates/SubclassOf.h"

class UGbxAction;
class AActor;
class UWeaponSlotData;

UGbxAction* UOakActionBlueprintLibrary::K2Play(TSubclassOf<UGbxAction> ActionClass, const TArray<FGbxActionRegister>& GbxActionRegisters, EGbxActionNetMode NetMode, AActor* Target, UWeaponSlotData* WeaponSlot, float Duration, float PlayRate, FVector Direction, int32 MontageLoopCount) {
    return NULL;
}

UOakActionBlueprintLibrary::UOakActionBlueprintLibrary() {
}

