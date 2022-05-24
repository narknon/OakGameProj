#pragma once
#include "CoreMinimal.h"
#include "DamageModifierAttributeCollection.h"
#include "GameFramework/DamageType.h"
#include "GameplayTagAssetInterface.h"
#include "UObject/NoExportTypes.h"
#include "DamageSurfaceModifier.h"
#include "GameplayTagContainer.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GbxDamageType.generated.h"

class UStatusEffectData;
class UUIStatData;

UCLASS()
class GBXGAMESYSTEMCORE_API UGbxDamageType : public UDamageType, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DamageTypeDisplayName;
    
    UPROPERTY(EditAnywhere)
    FText DamageEffectVerb;
    
    UPROPERTY(EditAnywhere)
    FText DamageTypeBaseDescription;
    
    UPROPERTY(EditAnywhere)
    FLinearColor DamageColor;
    
    UPROPERTY(EditAnywhere)
    FString DamageIconFrameName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsHealingType;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDoT;
    
    UPROPERTY(EditAnywhere)
    float InnerDamageRadiusPercent;
    
    UPROPERTY(EditAnywhere)
    float OuterDamageRadiusPercent;
    
    UPROPERTY(EditAnywhere)
    float MinRadiusDamageScalar;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY(EditAnywhere)
    FDamageModifierAttributeCollection ModifierAttributes;
    
    UPROPERTY(EditAnywhere)
    FDataTableRowHandle OnlyApplyToThisHealthType;
    
    UPROPERTY(EditAnywhere)
    UStatusEffectData* StatusEffectData;
    
protected:
    UPROPERTY(EditAnywhere)
    TArray<FDamageSurfaceModifier> SurfaceDamageModifiers;
    
    UPROPERTY(EditAnywhere, Export)
    TArray<UUIStatData*> UIStats;
    
public:
    UGbxDamageType();
    UFUNCTION(BlueprintPure)
    bool IsElementalType() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

