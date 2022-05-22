#pragma once
#include "CoreMinimal.h"
#include "GbxAbilityManagerComponent.h"
#include "OakCharacterAbilityManagerComponent.generated.h"

class UOakCharacterAbilityListData;
class UOakInputAbilityListData;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOakCharacterAbilityManagerComponent : public UGbxAbilityManagerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UOakCharacterAbilityListData* DefaultAbilities;
    
    UPROPERTY(EditDefaultsOnly)
    UOakInputAbilityListData* OakInputAbilities;
    
public:
    UOakCharacterAbilityManagerComponent();
};

