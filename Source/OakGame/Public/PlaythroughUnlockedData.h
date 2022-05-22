#pragma once
#include "CoreMinimal.h"
#include "PlaythroughUnlockedData.generated.h"

class UGFxModalTutorialDataAsset;
class UTutorialMessageDataAsset;

USTRUCT(BlueprintType)
struct FPlaythroughUnlockedData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<UTutorialMessageDataAsset*> PlaythroughUnlockedMessages;
    
    UPROPERTY(EditAnywhere)
    TArray<UGFxModalTutorialDataAsset*> PlaythroughUnlockedMessages_Modal;
    
    UPROPERTY(EditAnywhere)
    bool bUseModalTutorial;
    
    UPROPERTY(EditAnywhere)
    float ModalTutorialDelay;
    
    OAKGAME_API FPlaythroughUnlockedData();
};

