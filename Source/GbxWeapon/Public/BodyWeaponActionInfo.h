#pragma once
#include "CoreMinimal.h"
#include "EWeaponActionType.h"
#include "ConditionalWeaponActionSet.h"
#include "ConditionalActionInfo.h"
#include "BodyWeaponActionInfo.generated.h"

class UGbxCondition;

USTRUCT(BlueprintType)
struct FBodyWeaponActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EWeaponActionType> WeaponAction;
    
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* Condition;
    
    UPROPERTY(EditAnywhere)
    TArray<FConditionalWeaponActionSet> ConditionalWeaponActions;
    
    UPROPERTY()
    TArray<FConditionalActionInfo> ConditionalActions;
    
    GBXWEAPON_API FBodyWeaponActionInfo();
};

