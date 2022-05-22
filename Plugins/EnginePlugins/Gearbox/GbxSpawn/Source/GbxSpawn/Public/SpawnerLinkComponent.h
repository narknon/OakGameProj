#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "SpawnerLinkData.h"
#include "SpawnerLinkComponent.generated.h"

class AActor;
class UObject;
class ASpawner;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXSPAWN_API USpawnerLinkComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(NonPIEDuplicateTransient)
    TArray<FSpawnerLinkData> LinkDataList;
    
    UPROPERTY(EditAnywhere, NonPIEDuplicateTransient)
    TArray<AActor*> LinkedSpawners;
    
    UPROPERTY(EditAnywhere)
    bool bAutoProximityLink;
    
    UPROPERTY(Transient)
    FSpawnerLinkData MasterLinkData;
    
    UPROPERTY(Transient)
    bool bBeingDestroyed;
    
    UPROPERTY(Transient)
    TArray<UObject*> SharedStates;
    
    UPROPERTY()
    TArray<ASpawner*> AllLinkedSpawners;
    
public:
    USpawnerLinkComponent();
};

