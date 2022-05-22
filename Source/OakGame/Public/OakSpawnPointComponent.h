#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "SpawnPointComponent.h"
#include "SpawnPointEffect.h"
#include "OakSpawnPointComponent.generated.h"

class UOakAction_CoordinatedEffect;
class UGbxCondition;
class USpawnerComponent;
class UTerritoryComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class OAKGAME_API UOakSpawnPointComponent : public USpawnPointComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced)
    UGbxCondition* OnMissionLoadedEnabledCondition;
    
    UPROPERTY(Export, Transient)
    TMap<USpawnerComponent*, UTerritoryComponent*> SpawnPointGroupTerritoryMap;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UOakAction_CoordinatedEffect> SpecialEffect;
    
    UPROPERTY(EditAnywhere)
    TArray<FSpawnPointEffect> ConditionalSpecialEffects;
    
public:
    UOakSpawnPointComponent();
private:
    UFUNCTION()
    UClass* GetRequiredInterface();
    
};

