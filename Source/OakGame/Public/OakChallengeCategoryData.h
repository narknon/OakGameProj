#pragma once
#include "CoreMinimal.h"
#include "ChallengeCategoryData.h"
#include "OakChallengeCategoryData.generated.h"

class UInWorldIconData;
class UTexture2D;

UCLASS()
class OAKGAME_API UOakChallengeCategoryData : public UChallengeCategoryData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UInWorldIconData* LevelActorIcon;
    
    UPROPERTY(EditAnywhere)
    UInWorldIconData* CompleteLevelActorIcon;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* LevelActorMapIconActive;
    
    UPROPERTY(EditAnywhere)
    UTexture2D* LevelActorMapIconComplete;
    
    UPROPERTY(EditAnywhere)
    bool bDontUseScaleformIcon;
    
    UPROPERTY(EditAnywhere)
    FString ScaleformMapIconActive;
    
    UPROPERTY(EditAnywhere)
    FString ScaleformMapIconComplete;
    
    UOakChallengeCategoryData();
};

