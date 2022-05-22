#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "CinematicData.h"
#include "OakCinematicBrainData.generated.h"

UCLASS()
class OAKGAME_API UOakCinematicBrainData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FCinematicData> Cinematics;
    
    UOakCinematicBrainData();
};

