#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "GFxModalTutorialDataAsset.generated.h"

UCLASS()
class UGFxModalTutorialDataAsset : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText Header;
    
    UPROPERTY(EditAnywhere)
    FText Body;
    
    UPROPERTY(EditAnywhere)
    FString ImageFrameName;
    
    UPROPERTY(EditAnywhere)
    float LockoutDelay;
    
    UPROPERTY(EditAnywhere)
    bool bUpsellContent;
    
    UPROPERTY(EditAnywhere)
    bool bShowEvenIfTutorialsAreDisabled;
    
    UGFxModalTutorialDataAsset();
};

