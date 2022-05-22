#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "GbxNavMeshPainter.generated.h"

class UGbxNavMeshPainterComponent;

UCLASS()
class GBXNAV_API AGbxNavMeshPainter : public AVolume {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export, VisibleAnywhere)
    UGbxNavMeshPainterComponent* PainterComponent;
    
public:
    AGbxNavMeshPainter();
    UFUNCTION(BlueprintCallable)
    void SetPainterEnabled(bool bNewEnabled);
    
    UFUNCTION(BlueprintPure)
    bool IsPainterEnabled() const;
    
};

