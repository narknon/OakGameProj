#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "CharacterGroundSlamGradeData.generated.h"

class UControlledMove;
class UGbxAction;

USTRUCT(BlueprintType)
struct FCharacterGroundSlamGradeData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MinimumHeight;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UControlledMove> ControlledMove;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> StartAction;
    
    UPROPERTY(EditAnywhere)
    float LandingDistance;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UGbxAction> LandingAction;
    
    OAKGAME_API FCharacterGroundSlamGradeData();
};

