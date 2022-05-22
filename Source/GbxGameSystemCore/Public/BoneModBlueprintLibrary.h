#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AlphaBlend.h"
#include "AlphaBlend.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoneModInstance -FallbackName=BoneModInstance
#include "BoneModBlueprintLibrary.generated.h"

class UCurveFloat;
class UGbxBoneModifyProfile;
class UObject;

UCLASS(BlueprintType)
class GBXGAMESYSTEMCORE_API UBoneModBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBoneModBlueprintLibrary();
    UFUNCTION(BlueprintCallable)
    static void SetBoneTranslation(const FName BoneName, const FVector Translation, UObject* Target, const float InBlendTime, const EAlphaBlendOption InBlendOption, const UCurveFloat* InCustomBlendCurve);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneScale3D(const FName BoneName, const FVector Scale3D, UObject* Target, const float InBlendTime, const EAlphaBlendOption InBlendOption, const UCurveFloat* InCustomBlendCurve);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneScale(const FName BoneName, const float Scale, UObject* Target, const float InBlendTime, const EAlphaBlendOption InBlendOption, const UCurveFloat* InCustomBlendCurve);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneRotation(const FName BoneName, const FRotator Rotation, UObject* Target, const float InBlendTime, const EAlphaBlendOption InBlendOption, const UCurveFloat* InCustomBlendCurve);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModUseTranslation(const FName BoneModName, const bool bUseTranslation, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModUseScale(const FName BoneModName, const bool bUseScale, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModUseRotation(const FName BoneModName, const bool bUseRotation, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModTranslationSpace(const FName BoneModName, const TEnumAsByte<EBoneControlSpace> TranslationSpace, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModTranslation(const FName BoneModName, const FVector Translation, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModTransform(const FName BoneModName, const FTransform Transform, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModScale3D(const FName BoneModName, const FVector Scale, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModScale(const FName BoneModName, const float Scale, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModRotationSpace(const FName BoneModName, const TEnumAsByte<EBoneControlSpace> RotationSpace, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModRotation(const FName BoneModName, const FRotator Rotation, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModReplaceTranslation(const FName BoneModName, const bool bReplaceTranslation, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModReplaceScale(const FName BoneModName, const bool bReplaceScale, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModReplaceRotation(const FName BoneModName, const bool bReplaceRotation, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModName(const FName BoneModName, const FName NewBoneModName, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModifyProfileState(const FName StateName, bool bActive, UObject* Target, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModifyProfile(UGbxBoneModifyProfile* BoneModifyProfile, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModBoneName(const FName BoneModName, const FName BoneModBoneName, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModBlendTime(const FName BoneModName, const float BlendTime, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModAlphaBlend(const FName BoneModName, const FAlphaBlend Blend, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneModActive(const FName BoneModName, bool bActive, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void SetBoneMod(UPARAM(Ref) FBoneModInstance& InBoneMod, const FName BoneModToSet, UObject* Target, bool bBlendIn);
    
    UFUNCTION(BlueprintCallable)
    static void RemoveBoneMod(const FName BoneModToRemove, UObject* Target, bool bBlendOut);
    
    UFUNCTION(BlueprintCallable)
    static bool GetBoneMod(const FName BoneModName, FBoneModInstance& BoneMod, UObject* Target);
    
    UFUNCTION(BlueprintCallable)
    static void CreateBoneMod(const FName InBoneModName, const FName InBoneName, const FVector InTranslation, const FRotator InRotation, const FVector InScale, const float InBlendTime, UObject* Target, const EAlphaBlendOption InBlendOption, const UCurveFloat* InCustomBlendCurve, const bool bInUseTranslation, const bool bInUseRotation, const bool bInUseScale, const bool bInReplaceTranslation, const bool bInReplaceRotation, const bool bInReplaceScale, const TEnumAsByte<EBoneControlSpace> InTranslationSpace, const TEnumAsByte<EBoneControlSpace> InRotationSpace, const bool bBlendIn);
    
};

