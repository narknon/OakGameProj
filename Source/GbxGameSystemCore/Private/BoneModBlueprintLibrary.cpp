#include "BoneModBlueprintLibrary.h"

class UObject;
class UCurveFloat;
class UGbxBoneModifyProfile;

void UBoneModBlueprintLibrary::SetBoneTranslation(const FName BoneName, const FVector Translation, UObject* Target, const float InBlendTime, const EAlphaBlendOption InBlendOption, const UCurveFloat* InCustomBlendCurve) {
}

void UBoneModBlueprintLibrary::SetBoneScale3D(const FName BoneName, const FVector Scale3D, UObject* Target, const float InBlendTime, const EAlphaBlendOption InBlendOption, const UCurveFloat* InCustomBlendCurve) {
}

void UBoneModBlueprintLibrary::SetBoneScale(const FName BoneName, const float Scale, UObject* Target, const float InBlendTime, const EAlphaBlendOption InBlendOption, const UCurveFloat* InCustomBlendCurve) {
}

void UBoneModBlueprintLibrary::SetBoneRotation(const FName BoneName, const FRotator Rotation, UObject* Target, const float InBlendTime, const EAlphaBlendOption InBlendOption, const UCurveFloat* InCustomBlendCurve) {
}

void UBoneModBlueprintLibrary::SetBoneModUseTranslation(const FName BoneModName, const bool bUseTranslation, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModUseScale(const FName BoneModName, const bool bUseScale, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModUseRotation(const FName BoneModName, const bool bUseRotation, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModTranslationSpace(const FName BoneModName, const TEnumAsByte<EBoneControlSpace> TranslationSpace, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModTranslation(const FName BoneModName, const FVector Translation, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModTransform(const FName BoneModName, const FTransform Transform, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModScale3D(const FName BoneModName, const FVector Scale, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModScale(const FName BoneModName, const float Scale, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModRotationSpace(const FName BoneModName, const TEnumAsByte<EBoneControlSpace> RotationSpace, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModRotation(const FName BoneModName, const FRotator Rotation, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModReplaceTranslation(const FName BoneModName, const bool bReplaceTranslation, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModReplaceScale(const FName BoneModName, const bool bReplaceScale, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModReplaceRotation(const FName BoneModName, const bool bReplaceRotation, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModName(const FName BoneModName, const FName NewBoneModName, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModifyProfileState(const FName StateName, bool bActive, UObject* Target, float BlendTime) {
}

void UBoneModBlueprintLibrary::SetBoneModifyProfile(UGbxBoneModifyProfile* BoneModifyProfile, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModBoneName(const FName BoneModName, const FName BoneModBoneName, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModBlendTime(const FName BoneModName, const float BlendTime, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModAlphaBlend(const FName BoneModName, const FAlphaBlend Blend, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneModActive(const FName BoneModName, bool bActive, UObject* Target) {
}

void UBoneModBlueprintLibrary::SetBoneMod(FBoneModInstance& InBoneMod, const FName BoneModToSet, UObject* Target, bool bBlendIn) {
}

void UBoneModBlueprintLibrary::RemoveBoneMod(const FName BoneModToRemove, UObject* Target, bool bBlendOut) {
}

bool UBoneModBlueprintLibrary::GetBoneMod(const FName BoneModName, FBoneModInstance& BoneMod, UObject* Target) {
    return false;
}

void UBoneModBlueprintLibrary::CreateBoneMod(const FName InBoneModName, const FName InBoneName, const FVector InTranslation, const FRotator InRotation, const FVector InScale, const float InBlendTime, UObject* Target, const EAlphaBlendOption InBlendOption, const UCurveFloat* InCustomBlendCurve, const bool bInUseTranslation, const bool bInUseRotation, const bool bInUseScale, const bool bInReplaceTranslation, const bool bInReplaceRotation, const bool bInReplaceScale, const TEnumAsByte<EBoneControlSpace> InTranslationSpace, const TEnumAsByte<EBoneControlSpace> InRotationSpace, const bool bBlendIn) {
}

UBoneModBlueprintLibrary::UBoneModBlueprintLibrary() {
}

