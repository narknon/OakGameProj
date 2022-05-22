#pragma once
#include "CoreMinimal.h"
#include "SavedCollisionItem.h"
#include "SavedTeamCollision.h"
#include "SavedCollision.generated.h"

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FSavedCollision {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FSavedCollisionItem> SavedItems;
    
    UPROPERTY()
    TArray<FSavedTeamCollision> SavedTeamItems;
    
public:
    FSavedCollision();
};

