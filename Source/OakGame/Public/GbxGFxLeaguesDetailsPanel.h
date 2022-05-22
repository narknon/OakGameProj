#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GbxGFxLeaguesDetailsPanel.generated.h"

class UGbxTextField;

UCLASS(NonTransient)
class OAKGAME_API UGbxGFxLeaguesDetailsPanel : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* TitleField;
    
    UPROPERTY(Transient)
    UGbxTextField* SubtitleField;
    
    UPROPERTY(Transient)
    UGbxTextField* BodyField;
    
public:
    UGbxGFxLeaguesDetailsPanel();
};

