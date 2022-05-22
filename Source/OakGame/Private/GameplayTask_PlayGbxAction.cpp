#include "GameplayTask_PlayGbxAction.h"
#include "Templates/SubclassOf.h"

class UGbxAction;
class AActor;
class UWeaponSlotData;
class UGameplayTask_PlayGbxAction;

UGameplayTask_PlayGbxAction* UGameplayTask_PlayGbxAction::PlayGbxAction(TSubclassOf<UGbxAction> ActionClass, const TArray<FGbxActionRegister>& GbxActionRegisters, EGbxActionNetMode NetMode, AActor* Target, UWeaponSlotData* WeaponSlot, float Duration, float PlayRate, FVector Direction, int32 MontageLoopCount) {
    return NULL;
}

UGameplayTask_PlayGbxAction::UGameplayTask_PlayGbxAction() {
    this->Action = NULL;
}

