#pragma once
#include "CoreMinimal.h"
#include "GbxUserWidget.h"
#include "OakMinimapElement.generated.h"

class AActor;
class UImage;
class UScaleBox;

UCLASS(EditInlineNew)
class OAKGAME_API UOakMinimapElement : public UGbxUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InRangeAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OutOfRangeAlpha;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bClampRadarEdge;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxClampDistance;
    
    UPROPERTY(Transient)
    bool bShouldDisplay;
    
    UPROPERTY(Transient)
    uint32 WaypointRadius;
    
    UPROPERTY(Transient)
    AActor* TargetActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UImage* ElementImage;
    
    UPROPERTY(BlueprintReadWrite, Export, Transient)
    UScaleBox* ElementScale;
    
public:
    UOakMinimapElement();
};

