#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxPassiveSkillIcon.generated.h"

class UGbxGFxProgressBar;
class UGbxGFxHUDWidget;
class UTexture;

UCLASS(NonTransient)
class OAKGAME_API UGFxPassiveSkillIcon : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxGFxProgressBar* CooldownProgressBar;
    
    UPROPERTY(Transient)
    UGbxGFxObject* TextureContainer;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UGbxGFxHUDWidget> OwningWidget;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<UTexture> TextureRef;
    
public:
    UGFxPassiveSkillIcon();
};

