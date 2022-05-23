#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxDataAsset.h"
#include "EZoneMapTargetType.h"
#include "ZoneMapPOITypeData.generated.h"

class AZoneMapIconBase;
class UTexture2D;
class AActor;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class OAKGAME_API UZoneMapPOITypeData : public UGbxDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(EditAnywhere)
    FText SubHeading;
    
    UPROPERTY(EditAnywhere)
    FText Description;
    
    UPROPERTY(EditAnywhere)
    FText UseText;
    
    UPROPERTY(EditAnywhere)
    FText CanNotBeUsedText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTexture2D* POISprite;
    
    UPROPERTY(EditAnywhere)
    FString IconFrameName;
    
    UPROPERTY(EditAnywhere)
    FString AlternateIconFrameName;
    
    UPROPERTY(EditAnywhere)
    bool bDisplayInFastTravelList;
    
    UPROPERTY(EditAnywhere)
    EZoneMapTargetType POICategory;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> POIClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<AZoneMapIconBase> POIIconClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<UPrimitiveComponent> POIIconComponentClass;
    
    UPROPERTY(EditAnywhere)
    bool bShowInMiniMap;
    
    UPROPERTY(EditAnywhere)
    bool bShowInZoneMap;
    
    UPROPERTY(EditAnywhere)
    int32 TranslucencySortPriority;
    
    UPROPERTY(EditAnywhere)
    float SizeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float IconZOffset;
    
    UPROPERTY(EditAnywhere)
    bool DontUseScaleformIcon;
    
    UZoneMapPOITypeData();
};

