#pragma once
#include "CoreMinimal.h"
#include "TutorialLevelUpData.generated.h"

class UGFxModalTutorialDataAsset;
class UTutorialMessageDataAsset;

USTRUCT(BlueprintType)
struct FTutorialLevelUpData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UTutorialMessageDataAsset* LevelUpMessage;
    
    UPROPERTY(EditAnywhere)
    UGFxModalTutorialDataAsset* LevelUpMessage_Modal;
    
    UPROPERTY(EditAnywhere)
    int32 LevelForMessage;
    
    UPROPERTY(EditAnywhere)
    bool bUseModalTutorial;
    
    UPROPERTY(EditAnywhere)
    float ModalTutorialDelay;
    
    OAKGAME_API FTutorialLevelUpData();
};

