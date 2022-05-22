#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneSpawnable.h"
#include "GbxLevelSequenceBindingSlot.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct GBXLEVELSEQUENCE_API FGbxLevelSequenceBindingSlot {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid BindingID;
    
    UPROPERTY()
    FString BindingName;
    
    UPROPERTY()
    TSubclassOf<AActor> BindingClass;
    
    UPROPERTY()
    TWeakObjectPtr<AActor> BoundActor;
    
    UPROPERTY()
    FVector Location;
    
    UPROPERTY()
    FRotator Rotation;
    
    UPROPERTY()
    ESpawnOwnership SpawnOwnership;
    
    FGbxLevelSequenceBindingSlot();
};

