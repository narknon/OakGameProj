#pragma once
#include "CoreMinimal.h"
#include "GbxUIScroller.generated.h"

USTRUCT(BlueprintType)
struct GBXUI_API FGbxUIScroller {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Acceleration;
    
    UPROPERTY(EditAnywhere)
    float ItemSize;
    
    UPROPERTY(EditAnywhere)
    float MaxVelocity;
    
    UPROPERTY(EditAnywhere)
    float MinVelocity;
    
    UPROPERTY(EditAnywhere)
    bool bUseFixedVelocity;
    
    UPROPERTY(EditAnywhere)
    float FixedVelocity;
    
private:
    UPROPERTY(Transient)
    float ScrollPosition;
    
    UPROPERTY(Transient)
    float DesiredPosition;
    
    UPROPERTY(Transient)
    float WindowSize;
    
    UPROPERTY(Transient)
    float FullSize;
    
    UPROPERTY(Transient)
    float CurVelocity;
    
    UPROPERTY(Transient)
    float DesiredVelocity;
    
    UPROPERTY(Transient)
    bool bHasMoved;
    
    UPROPERTY(Transient)
    bool bIsMoving;
    
    UPROPERTY(Transient)
    bool bHasSlowedDown;
    
public:
    FGbxUIScroller();
};

