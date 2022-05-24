#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "SpawnDetails.h"
#include "SpawnFactory.generated.h"

class UTeam;
class UGameplayTagContainerComponent;

UCLASS(Abstract, CollapseCategories, EditInlineNew)
class GBXSPAWN_API USpawnFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool bUsedInSpawnPointOverlapChecks;
    
private:
    UPROPERTY(EditAnywhere)
    bool bOverrideActorTags;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer Tags;
    
    UPROPERTY(EditAnywhere)
    FSpawnDetails SpawnDetails;
    
    UPROPERTY(Export, Transient)
    UGameplayTagContainerComponent* CachedActorClassTagComponent;
    
    UPROPERTY(VisibleAnywhere)
    UTeam* CachedTeam;
    
public:
    USpawnFactory();
};

