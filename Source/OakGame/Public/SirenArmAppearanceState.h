#pragma once
#include "CoreMinimal.h"
#include "SirenGhostArmConfiguration.h"
#include "EPhaseTranceElementalType.h"
#include "SirenArmAppearanceState.generated.h"

class USirenCharacterComponent;
class USirenArmControllerInterface;
class ISirenArmControllerInterface;

USTRUCT(Atomic, BlueprintType)
struct FSirenArmAppearanceState {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FSirenGhostArmConfiguration PassiveGhostArmConfiguration;
    
    UPROPERTY()
    bool bTattooFlare;
    
    UPROPERTY()
    EPhaseTranceElementalType ElementalType;
    
    UPROPERTY(NotReplicated)
    FSirenGhostArmConfiguration ActiveGhostArmConfiguration;
    
    UPROPERTY(Export, NotReplicated)
    USirenCharacterComponent* Owner;
    
    UPROPERTY(NotReplicated)
    TArray<TScriptInterface<ISirenArmControllerInterface>> PassiveArmControllers;
    
    UPROPERTY(NotReplicated)
    TArray<TScriptInterface<ISirenArmControllerInterface>> ActionArmControllers;
    
public:
    OAKGAME_API FSirenArmAppearanceState();
};

