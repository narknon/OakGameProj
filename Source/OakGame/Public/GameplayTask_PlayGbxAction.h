#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTask.h"
#include "TaskEndStateActionDelegateDelegate.h"
#include "TaskAnimEndActionDelegateDelegate.h"
#include "GbxActionRegister.h"
#include "EGbxActionNetMode.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTask_PlayGbxAction.generated.h"

class UGbxAction;
class UGameplayTask_PlayGbxAction;
class AActor;
class UWeaponSlotData;

UCLASS()
class OAKGAME_API UGameplayTask_PlayGbxAction : public UGameplayTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FTaskEndStateActionDelegate OnEnd;
    
    UPROPERTY(BlueprintAssignable)
    FTaskAnimEndActionDelegate OnAnimEnd;
    
    UPROPERTY(BlueprintReadOnly)
    UGbxAction* Action;
    
    UGameplayTask_PlayGbxAction();
    UFUNCTION(BlueprintCallable)
    static UGameplayTask_PlayGbxAction* PlayGbxAction(TSubclassOf<UGbxAction> ActionClass, const TArray<FGbxActionRegister>& GbxActionRegisters, EGbxActionNetMode NetMode, AActor* Target, UWeaponSlotData* WeaponSlot, float Duration, float PlayRate, FVector Direction, int32 MontageLoopCount);
    
};

