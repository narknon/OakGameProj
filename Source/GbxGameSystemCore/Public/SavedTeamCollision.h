#pragma once
#include "CoreMinimal.h"
#include "SavedTeamCollision.generated.h"

class UTeamComponent;

USTRUCT(BlueprintType)
struct GBXGAMESYSTEMCORE_API FSavedTeamCollision {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UTeamComponent* TeamComponent;
    
    UPROPERTY()
    bool bUseTeamCollision;
    
    UPROPERTY()
    bool bCollideWithTeam;
    
    FSavedTeamCollision();
};

