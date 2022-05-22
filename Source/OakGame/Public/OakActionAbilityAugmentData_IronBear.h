#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OakActionAbilityAugmentData.h"
#include "EIronBearCoreType.h"
#include "EIronBearModType.h"
#include "OakActionAbilityAugmentData_IronBear.generated.h"

class AOakWeapon_IronBearHardPoint;

UCLASS()
class UOakActionAbilityAugmentData_IronBear : public UOakActionAbilityAugmentData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString HardpointProgressBarFrameName;
    
    UPROPERTY(EditAnywhere)
    FString HardpointIconFrameName;
    
    UPROPERTY(EditAnywhere)
    FString HardpointProgressBarName;
    
    UPROPERTY(EditAnywhere)
    FString HardpointElementalIconName;
    
    UPROPERTY(EditDefaultsOnly)
    FText HardpointBarText;
    
    UPROPERTY(EditAnywhere)
    FString HardpointFallbackElementalIconFrameName;
    
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOakWeapon_IronBearHardPoint> AugmentClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EIronBearCoreType CoreType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EIronBearModType ModType;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOakWeapon_IronBearHardPoint> AugmentOverrideClass;
    
public:
    UOakActionAbilityAugmentData_IronBear();
};

