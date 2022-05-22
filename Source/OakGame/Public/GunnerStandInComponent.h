#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "StandInCharacterComponent.h"
#include "UObject/NoExportTypes.h"
#include "GunnerStandInComponent.generated.h"

class UOakActionAbilityAugmentData;
class UGbxAction;
class AStandInAuxiliaryActor_IronBear;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGunnerStandInComponent : public UStandInCharacterComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<AStandInAuxiliaryActor_IronBear> IronBearBlueprint;
    
    UPROPERTY(EditAnywhere)
    FVector IronBearTranslationOffset;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> IronBearSpawnAction;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UOakActionAbilityAugmentData> IronCubAugment;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AStandInAuxiliaryActor_IronBear> IronCubBlueprint;
    
    UPROPERTY(EditAnywhere)
    FVector IronCubTranslationOffset;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> IronCubSpawnAction;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> GunnerSpawnIronCubAction;
    
    UPROPERTY(EditAnywhere)
    float IronCubSpawnDelay;
    
    UPROPERTY(EditAnywhere)
    FName IronCubPositionSettingContextOverrideName;
    
    UPROPERTY(Transient)
    AStandInAuxiliaryActor_IronBear* IronBear;
    
public:
    UGunnerStandInComponent();
};

