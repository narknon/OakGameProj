#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "GbxActionRegister.h"
#include "EGbxActionNetMode.h"
#include "OakActionBlueprintLibrary.generated.h"

class UGbxAction;
class AActor;
class UWeaponSlotData;

UCLASS(BlueprintType)
class OAKGAME_API UOakActionBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOakActionBlueprintLibrary();
private:
    UFUNCTION(BlueprintCallable)
    static UGbxAction* K2Play(TSubclassOf<UGbxAction> ActionClass, const TArray<FGbxActionRegister>& GbxActionRegisters, EGbxActionNetMode NetMode, AActor* Target, UWeaponSlotData* WeaponSlot, float Duration, float PlayRate, FVector Direction, int32 MontageLoopCount);
    
};

