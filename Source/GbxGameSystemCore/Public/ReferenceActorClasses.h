#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ReferenceActorClasses.generated.h"

USTRUCT()
struct FReferenceActorClasses {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY()
    FSoftObjectPath ActorAsset;
    
    GBXGAMESYSTEMCORE_API FReferenceActorClasses();
};

