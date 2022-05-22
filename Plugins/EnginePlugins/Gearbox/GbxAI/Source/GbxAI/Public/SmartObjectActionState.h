#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "UObject/NoExportTypes.h"
#include "SmartActionUser.h"
#include "SmartObjectActionState.generated.h"

class AController;
class USmartObjectAction;

USTRUCT(BlueprintType)
struct GBXAI_API FSmartObjectActionState {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bEnabled;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag ActionTag;
    
    UPROPERTY(EditAnywhere, Instanced)
    USmartObjectAction* ActionDefinition;
    
    UPROPERTY(EditAnywhere)
    FColor DebugColor;
    
private:
    UPROPERTY(Transient)
    float CooldownTime;
    
    UPROPERTY(Transient)
    TArray<FSmartActionUser> Users;
    
    UPROPERTY(Transient)
    TMap<AController*, float> CooldownMap;
    
public:
    FSmartObjectActionState();
};

