#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxTrophyCaseMenuSmallNavObject.generated.h"

class UGbxTextField;
class UGbxGFxHintWidget;

UCLASS(NonTransient)
class UGFxTrophyCaseMenuSmallNavObject : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* CategoryNameTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* CompletionTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PromptHintWrapperRBClip;
    
    UPROPERTY(Transient)
    UGbxGFxHintWidget* PromptHintWrapperLBClip;
    
    UPROPERTY(Transient)
    bool bShowing;
    
public:
    UGFxTrophyCaseMenuSmallNavObject();
};

