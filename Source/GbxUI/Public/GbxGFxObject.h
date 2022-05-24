#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GFxObject.h"
#include "GbxGFxObject.generated.h"

class UGbxGFxMovie;

UCLASS(NonTransient)
class GBXUI_API UGbxGFxObject : public UGFxObject {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UGbxGFxMovie* OwningMovie;
    
    UGbxGFxObject();
    UFUNCTION(BlueprintCallable)
    void SetOffsetDisplayTransform(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void SetBaseDisplayTransform(const FTransform& Transform);
    
    UFUNCTION(BlueprintCallable)
    void RotateAboutPoint(const float Degrees, const FVector2D& Point);
    
    UFUNCTION(BlueprintPure)
    FTransform GetOffsetDisplayTransform() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetBaseDisplayTransform() const;
    
};

