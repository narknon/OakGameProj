#pragma once
#include "CoreMinimal.h"
#include "GbxGFxHUDWidget.h"
#include "UIManagerMessage.h"
#include "EOakMessageType.h"
#include "OakLevelSyncMessageText.h"
#include "GFxRolloutMessage.generated.h"

class UGFxRolloutMessage;
class UGbxGFxHintWidget;

UCLASS()
class UGFxRolloutMessage : public UGbxGFxHUDWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRolloutMessageDelegate, const UGFxRolloutMessage*, Widget);
    
protected:
    UPROPERTY(Transient)
    FUIManagerMessage CachedMessage;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* GlyphField;
    
public:
    UPROPERTY(BlueprintReadOnly)
    FRolloutMessageDelegate OnShowMessageComplete;
    
    UPROPERTY(BlueprintReadOnly)
    FRolloutMessageDelegate OnHideMessageComplete;
    
    UPROPERTY(EditAnywhere)
    float MinimumDisplaySeconds;
    
    UPROPERTY(EditAnywhere)
    FString InnerInstanceString;
    
    UPROPERTY(EditAnywhere)
    FString EventIconInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString TitleFieldInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString DescriptionFieldInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString DescriptionWithGlyphFieldInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString GlyphFieldInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString PlayerNameFieldInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString CommandFieldInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString SpinnerInstanceName;
    
    UPROPERTY(EditAnywhere)
    FString SpinnerPulseInstanceName;
    
    UPROPERTY(EditAnywhere)
    TMap<EOakMessageType, FOakLevelSyncMessageText> SocialEventTextMap;
    
    UPROPERTY(EditAnywhere)
    bool bHUDWidget;
    
    UGFxRolloutMessage();
private:
    UFUNCTION()
    void OnInputDeviceChanged() const;
    
protected:
    UFUNCTION()
    void extShowAnimationFinished() const;
    
};

