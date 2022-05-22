#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InspectionInfoProvider.h"
#include "CustomizationColorApplication.h"
#include "CustomizationTextureInheritanceSettings.h"
#include "CustomizationColorEntry.h"
#include "CustomizationLinkedParameterEntry.h"
#include "EGbxCustomizationComponentInitSourceType.h"
#include "GbxCustomizationContainer.h"
#include "CharacterCustomizationAppliedDelegate.h"
#include "MaterialArray.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GbxCustomizationComponent.generated.h"

class UGbxCustomizationComponent;
class UMeshComponent;
class UGbxCustomizationData;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXGAMESYSTEMCORE_API UGbxCustomizationComponent : public UActorComponent, public IInspectionInfoProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FCustomizationColorEntry> ColorCustomizationParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FCustomizationLinkedParameterEntry> SharedLinkedParameters;
    
    UPROPERTY(EditAnywhere)
    TArray<FCustomizationLinkedParameterEntry> LinkedParameters;
    
    UPROPERTY(EditAnywhere)
    EGbxCustomizationComponentInitSourceType CustomizationSourceInitType;
    
    UPROPERTY(EditAnywhere)
    FCustomizationTextureInheritanceSettings TextureInheritanceSettings;
    
    UPROPERTY(Replicated)
    FGbxCustomizationContainer CustomizationList;
    
    UPROPERTY(ReplicatedUsing=OnRep_CustomColorSelections)
    TArray<FCustomizationColorApplication> CustomColorSelections;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterCustomizationApplied OnCustomizationApplied;
    
    UPROPERTY(BlueprintAssignable)
    FCharacterCustomizationApplied OnCustomizationRemoved;
    
protected:
    UPROPERTY(Export, Transient)
    UGbxCustomizationComponent* LinkedCustomizationSource;
    
    UPROPERTY(Transient)
    TMap<UMeshComponent*, FMaterialArray> CustomMaterials;
    
    UPROPERTY(Transient)
    bool bUseCustomMaterials;
    
public:
    UGbxCustomizationComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerApplyCustomizationData(UGbxCustomizationData* CustomizationToApply, int32 OptionalCustomizationId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerApplyCustomColor(int32 CustomColorIndex, FVector InAppliedColor, FVector InSplitColor, bool InUseDefaultColor, bool InUseDefaultSplitColor);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveCustomization(UGbxCustomizationData* Customization);
    
    UFUNCTION()
    void OnRep_CustomColorSelections();
    
    UFUNCTION(BlueprintCallable)
    void LinkToCustomization(UGbxCustomizationComponent* SourceComponent);
    
    UFUNCTION()
    void LinkedCustomizationRemoved(UGbxCustomizationData* Customization);
    
    UFUNCTION()
    void LinkedCustomizationApplied(UGbxCustomizationData* Customization);
    
    UFUNCTION(BlueprintCallable)
    bool GetDefaultCustomSplitColor(int32 SelectionIndex, FLinearColor& DefaultSplitColor);
    
    UFUNCTION(BlueprintCallable)
    bool GetDefaultCustomColor(int32 SelectionIndex, FLinearColor& DefaultColor);
    
    UFUNCTION(BlueprintCallable)
    void CopyFromCustomization(UGbxCustomizationComponent* SourceComponent);
    
    
    // Fix for true pure virtual functions not being implemented
};

