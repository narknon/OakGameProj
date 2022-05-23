#pragma once
#include "CoreMinimal.h"
#include "GFxRolloutMessage.h"
#include "GFxOnlineMessageAnimationWidget.generated.h"

UCLASS()
class UGFxOnlineMessageAnimationWidget : public UGFxRolloutMessage {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FString ProfileTextureName;
    
    UPROPERTY(EditAnywhere)
    TArray<float> SubtitleBackgroundSizeMapping;
    
    UPROPERTY(EditAnywhere)
    float UserPicWidthPadding;
    
    UPROPERTY(EditAnywhere)
    bool DebugForUserPic;
    
    UPROPERTY(EditAnywhere)
    FString InnerInstanceStringMenu;
    
    UPROPERTY(EditAnywhere)
    FString InnerInstanceStringHud;
    
    UGFxOnlineMessageAnimationWidget();
};

