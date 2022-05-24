#pragma once
#include "CoreMinimal.h"
#include "BeastmasterPetEventSignatureDelegate.h"
#include "OakPlayerAbilityEventHub.h"
#include "OakPlayerAbilityEventHub_Beastmaster.generated.h"

UCLASS()
class UOakPlayerAbilityEventHub_Beastmaster : public UOakPlayerAbilityEventHub {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FBeastmasterPetEventSignature OnBeastmasterPetSpawned;
    
    UPROPERTY(BlueprintAssignable)
    FBeastmasterPetEventSignature OnBeastmasterPetReleased;
    
    UOakPlayerAbilityEventHub_Beastmaster();
};

