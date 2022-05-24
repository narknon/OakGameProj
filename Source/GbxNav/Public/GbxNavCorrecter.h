#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavigationTypes.h"
#include "SavedCollision.h"
#include "GbxNavCorrecter.generated.h"

class AGbxNavWorld;
class UWorld;
class UGbxNavComponent;
class AActor;
class UGbxCharacterMovementComponent;

USTRUCT(BlueprintType)
struct GBXNAV_API FGbxNavCorrecter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UWorld* World;
    
    UPROPERTY(Transient)
    AGbxNavWorld* GbxNavWorld;
    
    UPROPERTY(Export, Transient)
    UGbxNavComponent* NavComp;
    
    UPROPERTY(Transient)
    AActor* PathingActor;
    
    UPROPERTY(Export, Transient)
    UGbxCharacterMovementComponent* MoveComp;
    
    UPROPERTY(Transient)
    FNavAgentProperties NavAgentProps;
    
    UPROPERTY(Transient)
    FSavedCollision SavedCollision;
    
public:
    FGbxNavCorrecter();
};

