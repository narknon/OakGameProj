#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxCrewQuartersMoodMenuInfoPanelObject.generated.h"

class UGbxTextField;
class UGbxGFxHintWidget;
class UTexture;

UCLASS(NonTransient)
class UGFxCrewQuartersMoodMenuInfoPanelObject : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* RoomMoodsTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* DescriptionTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* ButtonPromptHintClip;
    
    UPROPERTY(Transient)
    TSoftObjectPtr<UTexture> Picture;
    
public:
    UGFxCrewQuartersMoodMenuInfoPanelObject();
private:
    UFUNCTION()
    void OnTextureLoaded();
    
};

