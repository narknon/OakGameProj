#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "CharacterGroundSlamGradeData.h"
#include "CharacterGroundSlamData.generated.h"

class ULandingData;

UCLASS()
class UCharacterGroundSlamData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FCharacterGroundSlamGradeData> GroundSlamGrades;
    
    UPROPERTY(EditAnywhere)
    ULandingData* DefaultLandingData;
    
    UCharacterGroundSlamData();
};

