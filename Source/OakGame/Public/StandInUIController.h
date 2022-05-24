#pragma once
#include "CoreMinimal.h"
#include "StandInLightComponentInstance.h"
#include "DesiredStandInActorData.h"
#include "StandInUIController.generated.h"

class AOakUIActorContainer;
class UObject;
class AActor;
class AOakPlayerController;
class UInventoryBalanceStateComponent;
class USceneComponent;

USTRUCT(BlueprintType)
struct FStandInUIController {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<AOakUIActorContainer> ContainerClass;
    
    UPROPERTY(EditAnywhere)
    float VerticalSplitInVehicleAdjustment;
    
    UPROPERTY(Transient)
    UObject* OuterObject;
    
    UPROPERTY(Transient)
    AOakPlayerController* PlayerController;
    
    UPROPERTY(Transient)
    AOakUIActorContainer* StandInContainer;
    
    UPROPERTY(Transient)
    TArray<FStandInLightComponentInstance> LightComponents;
    
    UPROPERTY(Export, Transient)
    USceneComponent* StandInTransformRoot;
    
    UPROPERTY(Transient)
    AActor* CurrentStandInActor;
    
    UPROPERTY(Transient)
    TArray<AActor*> SecondaryActors;
    
    UPROPERTY(Transient)
    AActor* TempInventoryActor;
    
    UPROPERTY(Export, Transient)
    UInventoryBalanceStateComponent* StandInTemplateInventoryBalanceState;
    
    UPROPERTY(Transient)
    FDesiredStandInActorData LastDesiredActorData;
    
    UPROPERTY(Transient)
    FDesiredStandInActorData DesiredActorData;
    
    UPROPERTY(Transient)
    TArray<UObject*> StreamedObjects;
    
    UPROPERTY(Transient)
    uint32 WantedStreamRequest;
    
public:
    OAKGAME_API FStandInUIController();
};

