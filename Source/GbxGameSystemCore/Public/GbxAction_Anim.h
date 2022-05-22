#pragma once
#include "CoreMinimal.h"
#include "EGbxActionEndCondition.h"
#include "GbxAction_SimpleAnim.h"
#include "AnimMeshList.h"
#include "GbxAction_Anim.generated.h"

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxAction_Anim : public UGbxAction_SimpleAnim {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAnimMeshList DefaultAnims;
    
    UPROPERTY(EditAnywhere)
    EGbxActionEndCondition DefaultEndCondition;
    
    UPROPERTY(EditAnywhere)
    FName AnimationSlot;
    
    UPROPERTY(EditAnywhere)
    float BlendInTime;
    
    UPROPERTY(EditAnywhere)
    bool bPushBlendInTime;
    
    UPROPERTY(EditAnywhere)
    float DefaultBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    bool bPushBlendOutTime;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bScalePlayrateWithCharacterScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SourceCameraAlpha;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MontageCameraAlpha;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bDisableFootIk;
    
    UPROPERTY(EditAnywhere)
    bool bBody1stControlsDuration;
    
    UPROPERTY(EditAnywhere)
    bool bPlay1stPersonAnimationsOnRemotePlayers;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlot3rd;
    
    UPROPERTY(EditAnywhere)
    FName AnimSlot1st;
    
    UPROPERTY(EditAnywhere)
    bool bHasAnimSlot3rdValue;
    
    UPROPERTY(EditAnywhere)
    bool bHasAnimSlot1stValue;
    
    UPROPERTY(EditAnywhere)
    bool bGodMode;
    
    UPROPERTY(EditAnywhere)
    bool bDemigodMode;
    
    UPROPERTY(EditAnywhere)
    bool bBlockCrouching;
    
    UPROPERTY(EditAnywhere)
    bool bBlockMantling;
    
    UPROPERTY(EditAnywhere)
    bool bEnableScaledRootMotion;
    
    UPROPERTY(EditAnywhere)
    bool bMaintainRootVelocity;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideDuration;
    
    UPROPERTY(EditAnywhere)
    float OverrideDuration;
    
    UPROPERTY(EditAnywhere)
    bool bOverrideCount;
    
    UPROPERTY(EditAnywhere)
    int32 OverrideCount;
    
    UPROPERTY(EditAnywhere)
    bool bOverridePlayRate;
    
    UPROPERTY(EditAnywhere)
    float OverridePlayRate;
    
    UPROPERTY(EditAnywhere)
    FName BlendSpaceXRegisterName;
    
    UPROPERTY(EditAnywhere)
    FName BlendSpaceYRegisterName;
    
    UGbxAction_Anim();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetMantlingBlocked(bool bBlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetGodMode(bool bEnable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetFootIK(bool bDisable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetDemigodMode(bool bEnable) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_SetCrouchBlocked(bool bBlocked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_Resume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_RepProceedToNextSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_RepJumpToNextSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_ProceedToNextSection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_Pause() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void K2_JumpToNextSection() const;
    
};

