#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GbxNavSectionComponent.h"
#include "GbxNavFlySectionComponent.generated.h"

class UGbxNavFlyLayer;
class UHavokNavVolume;
class UHavokNavVolumeLayer;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GBXNAV_API UGbxNavFlySectionComponent : public UGbxNavSectionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, NoClear)
    UGbxNavFlyLayer* FlyLayer;
    
    UPROPERTY()
    UGbxNavFlyLayer* BuildFlyLayer;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDrawBoundingFaces;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDrawCells;
    
    UPROPERTY(EditAnywhere, Transient)
    bool bDrawFaces;
    
    UPROPERTY(EditAnywhere, Transient)
    float DrawBoxSize;
    
    UPROPERTY(EditAnywhere, Transient)
    float DrawCullDistance;
    
    UPROPERTY()
    UHavokNavVolume* NavVolume;
    
    UPROPERTY()
    TArray<uint16> CellGroups;
    
    UPROPERTY()
    TSubclassOf<UHavokNavVolumeLayer> Layer;
    
    UPROPERTY()
    TSubclassOf<UHavokNavVolumeLayer> BuildLayer;
    
public:
    UGbxNavFlySectionComponent();
};

