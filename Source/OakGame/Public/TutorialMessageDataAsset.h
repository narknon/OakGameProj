#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "TutorialMessageDataAsset.generated.h"

UCLASS()
class UTutorialMessageDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Header;
    
    UPROPERTY(EditAnywhere)
    FText Body;
    
    UPROPERTY(EditAnywhere)
    float Duration;
    
    UTutorialMessageDataAsset();
};

