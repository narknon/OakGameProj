#pragma once
#include "CoreMinimal.h"
#include "AttributeInitializationData.h"
#include "GbxDataAsset.h"
#include "UIStatPriorityData.h"
#include "CustomizationAssetEntry.h"
#include "ActionState_Base.h"
#include "CustomizationAssetLoadedDelegate.h"
#include "GbxCustomizationData.generated.h"

class UTexture;
class AActor;
class UGbxCustomizationTypeData;
class UGbxCustomizationData;
class UGbxAction;

UCLASS(Abstract, BlueprintType)
class GBXGAMESYSTEMCORE_API UGbxCustomizationData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FText CustomizationName;
    
    UPROPERTY(EditDefaultsOnly)
    FText CustomizationDescription;
    
    UPROPERTY(EditDefaultsOnly)
    FString IconFrameName;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FUIStatPriorityData> UIStats;
    
    UPROPERTY(EditDefaultsOnly)
    FString ItemCardTypeFrameName;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UTexture> PreviewImage;
    
    UPROPERTY(EditDefaultsOnly)
    FAttributeInitializationData PurchasePrice;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxCustomizationTypeData* CustomizationType;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FCustomizationAssetEntry> CustomizationTargetAssets;
    
    UPROPERTY(EditDefaultsOnly)
    bool bUnlockedByDefault;
    
    UPROPERTY(EditDefaultsOnly)
    bool bEquippedByDefault;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxCustomizationData* DefaultSkin;
    
    UPROPERTY(EditDefaultsOnly)
    UGbxCustomizationData* DependentBody;
    
    UGbxCustomizationData();
    UFUNCTION(BlueprintPure)
    bool RemoveCustomizationFromActor(AActor* TargetActor) const;
    
private:
    UFUNCTION()
    void OnCustomizationAssetLoaded();
    
    UFUNCTION(BlueprintCallable)
    UGbxAction* K2_PlayAction(AActor* TargetActor, const FActionState_Base& ActionData);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsLoading();
    
    UFUNCTION(BlueprintPure)
    bool IsLoaded(int32 OptionalCustomizationId) const;
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadCustomizationAssets(const FCustomizationAssetLoaded& LoadedDelegate);
    
    UFUNCTION(BlueprintPure)
    bool ApplyCustomizationToActor(AActor* TargetActor, int32 OptionalCustomizationId) const;
    
};

