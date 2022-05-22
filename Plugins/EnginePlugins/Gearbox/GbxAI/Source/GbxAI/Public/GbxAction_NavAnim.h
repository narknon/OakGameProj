#pragma once
#include "CoreMinimal.h"
#include "GbxAction_Navigation.h"
#include "AnimMeshList.h"
#include "StretchBonesSettings.h"
#include "AnimActionDef.h"
#include "GbxAction_NavAnim.generated.h"

class UAnimSequenceBase;

UCLASS()
class GBXAI_API UGbxAction_NavAnim : public UGbxAction_Navigation {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    float EntryTime;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    float BlendOutTime;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlot;
    
    UPROPERTY(EditAnywhere)
    FAnimMeshList NavAnimations;
    
    UPROPERTY(EditAnywhere)
    bool bLerpLocation;
    
    UPROPERTY(EditAnywhere)
    bool bLerpRotation;
    
    UPROPERTY(EditAnywhere)
    bool bUseStretchy;
    
    UPROPERTY(EditDefaultsOnly)
    FStretchBonesSettings StretchBonesSettings;
    
    UPROPERTY()
    UAnimSequenceBase* NavAnim;
    
    UPROPERTY()
    FAnimActionDef NavAnimation;
    
public:
    UGbxAction_NavAnim();
};

