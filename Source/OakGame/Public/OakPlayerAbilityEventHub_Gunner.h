#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityEventHub.h"
#include "IronBearEventSignatureDelegate.h"
#include "OakPlayerAbilityEventHub_Gunner.generated.h"

UCLASS()
class UOakPlayerAbilityEventHub_Gunner : public UOakPlayerAbilityEventHub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FIronBearEventSignature IronBearEnteredAndPlayerReady;
    
    UPROPERTY(BlueprintAssignable)
    FIronBearEventSignature IronBearExitedAndPlayerReady;
    
    UPROPERTY(EditDefaultsOnly)
    FString IronCubIconFrameName;
    
    UOakPlayerAbilityEventHub_Gunner();
};

