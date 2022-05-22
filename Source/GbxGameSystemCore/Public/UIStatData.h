#pragma once
#include "CoreMinimal.h"
#include "GbxDataAsset.h"
#include "UIStatCollector.h"
#include "UIStatData.generated.h"

class UObject;
class UGbxAttributeData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class GBXGAMESYSTEMCORE_API UUIStatData : public UGbxDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    uint8 bCanDisplayMultipleTimes: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bBiggerIsBetter: 1;
    
    UPROPERTY(EditAnywhere)
    float BasePriority;
    
    UPROPERTY(EditAnywhere)
    FName SectionName;
    
    UPROPERTY(EditAnywhere)
    FString IconFrameName;
    
public:
    UUIStatData();
protected:
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    bool K2_ShouldDisplayStat(UObject* Context) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    FText K2_GetValueText(UObject* Context, const FUIStatCollector& Collector) const;
    
    UFUNCTION(BlueprintNativeEvent, BlueprintPure)
    float K2_GetComparisonValue(UObject* Context, const FUIStatCollector& Collector) const;
    
private:
    UFUNCTION()
    void EnumerateSectionNames(TArray<FName>& OutSectionNameList) const;
    
public:
    UFUNCTION(BlueprintPure)
    float ComputeAttributeModification(UGbxAttributeData* Attribute, const bool bScale, const FUIStatCollector& Collector) const;
    
};

