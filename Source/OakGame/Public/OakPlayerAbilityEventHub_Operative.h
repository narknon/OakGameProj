#pragma once
#include "CoreMinimal.h"
#include "OakPlayerAbilityEventHub.h"
#include "OperativeDigicloneEventSignatureDelegate.h"
#include "OperativeBarrierEventSignatureDelegate.h"
#include "OperativeEventSignatureDelegate.h"
#include "OakPlayerAbilityEventHub_Operative.generated.h"

UCLASS()
class UOakPlayerAbilityEventHub_Operative : public UOakPlayerAbilityEventHub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FOperativeDigicloneEventSignature OperativeSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FOperativeDigicloneEventSignature OnDigicloneDestroyed;
    
    UPROPERTY(BlueprintAssignable)
    FOperativeBarrierEventSignature OnBarrierSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FOperativeEventSignature OnCalledShotActivated;
    
    UPROPERTY(EditDefaultsOnly)
    FString DigicloneIconFrameName;
    
    UOakPlayerAbilityEventHub_Operative();
};

