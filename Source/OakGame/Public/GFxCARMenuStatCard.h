#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "OakCARMenuPartType.h"
#include "GFxCARMenuStatCard.generated.h"

class UGbxTextField;
class UGFxCARMenuStatLine;

UCLASS(NonTransient)
class OAKGAME_API UGFxCARMenuStatCard : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    FOakCARMenuPartType PartType;
    
    UPROPERTY(Transient)
    UGbxTextField* PanelHeader;
    
    UPROPERTY(Transient)
    UGbxGFxObject* StatBarClips;
    
    UPROPERTY(Transient)
    UGbxTextField* ModNameClip;
    
    UPROPERTY(Transient)
    UGbxTextField* ModDescriptionClip;
    
    UPROPERTY(Transient)
    UGbxTextField* StatDescriptionClip;
    
    UPROPERTY(Transient)
    TArray<UGFxCARMenuStatLine*> StatLines;
    
public:
    UGFxCARMenuStatCard();
};

