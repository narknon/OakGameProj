#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PlayerAbilityWeaponEventSignatureDelegate.h"
#include "OakPlayerAbilityEventHub.generated.h"

UCLASS()
class UOakPlayerAbilityEventHub : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerAbilityWeaponEventSignature OnWeaponEquipped;
    
    UOakPlayerAbilityEventHub();
};

