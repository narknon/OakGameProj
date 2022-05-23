#pragma once
#include "CoreMinimal.h"
#include "GbxGFxObject.h"
#include "GFxTrophyCaseMenuLargeNavObject.generated.h"

class UGbxTextField;
class UGbxGFxButton;

UCLASS(NonTransient)
class UGFxTrophyCaseMenuLargeNavObject : public UGbxGFxObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    UGbxTextField* CategoryNameTextClip;
    
    UPROPERTY(Transient)
    UGbxTextField* CompletionTextClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavButtonLeftClip;
    
    UPROPERTY(Transient)
    UGbxGFxButton* NavButtonRightClip;
    
    UPROPERTY(Transient)
    bool bShowing;
    
public:
    UGFxTrophyCaseMenuLargeNavObject();
};

